#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {
	int choice;
	int age;
	string name;
	string state;
	char favSym;
	int favNum;
	double Height;
	bool student = true;
	char YorN;
	bool studenInf = false;
	while (true) {

		cout << "---------------------------\n";
		cout << "[1] Age checker\n";
		cout << "[2] User name\n";
		cout << "[3] User state\n";
		cout << "[4] User fav Symbol\n";
		cout << "[5] User Height\n";
		cout << "[6] User fav Number\n";
		cout << "[7] Student checker\n";
		cout << "[8] Your information\n";
		cout << "[9] Exit program\n";
		cout << "---------------------------\n";
		cout << "your choice: ";
		cin >> choice;



		if (choice == 8) {
			studenInf = true;
			cout << "Your age: " << age << endl;
			cout << "Your Name: " << name << endl;
			cout << "your state: " << state << endl;
			cout << "your height " << Height << endl;
			cout << "your fav number: " << favNum << endl;
			cout << "your fav symbol: " << favSym << endl;
			if (student == true) {
				cout << "you are a student" << endl;
			}
			else if (student == false) {
				cout << "you are not a student" << endl;
			}
			else {
				studenInf = false;
				cout << "no info added yet" << endl;
			}

			system("pause");
			system("cls");
			cout << "\n";
			continue;
		}



		else if (choice == 4) {
			cout << "your fav Symbol: ";
			cin >> favSym;
			cout << "\n";
			cout << "saved.\n";
			Sleep(1500);
			system("cls");
			continue;

		}


		else if (choice == 5) {
			cout << "your height: ";
			cin >> Height;
			cout << "\n";
			cout << "saved.\n";
			Sleep(1500);
			system("cls");
			continue;


		}




		else if (choice == 6) {
			cout << "your fav Num: ";
			cin >> favNum;
			cout << "\n";
			cout << "saved.\n";
			Sleep(1500);
			system("cls");
			continue;


		}


		else if (choice == 1) {
			cout << "your age: ";
			cin >> age;
			Sleep(1500);
			cout << "your age in 5 years: " << age + 5 << endl;
			Sleep(1500);
			if (age < 0) {
				cout << "Invalid age!";
				continue;
			}
			if (age == 18) {
				cout << "you are exactly 18!\n";
				Sleep(2000);
			}
			else if (age >= 18) {
				cout << "you are a Adult\n";
				Sleep(2000);
			}
			else if (age >= 14 && age <= 17) {
				cout << "you are a teenager\n";
				Sleep(2000);
			}
			if (age <= 13) {
				cout << "you are a Child\n";
				Sleep(1000);
			}
			system("pause");
			system("cls");
			cout << "\n";
			continue;
		}



		else if (choice == 9) {
			cout << "\n";
			Beep(800, 600);
			Sleep(2000);
			break;
		}

		else if (choice == 2) {
			cout << "your name: ";
			cin.ignore();
			getline(cin, name);
			Sleep(1500);
			Beep(800, 600);
			cout << "\n";
			cout << "saved.";
			Sleep(1500);
			system("cls");
			continue;

		}
		else if (choice == 3) {
			cout << "your state: ";
			cin.ignore();
			getline(cin, state);
			Sleep(1500);
			Beep(800, 600);
			cout << "\n";
			cout << "saved.";
			Sleep(1500);
			system("cls");
			continue;

		}


		else if (choice == 7) {
			cout << "are you a student?(Y/N)\n";
			cin >> YorN;

			if (YorN == 'Y' || YorN == 'y')
				student = true;
			else if (YorN == 'N' || YorN == 'n')
				student = false;
			else {
				cout << "Invalid input!\n";
				Sleep(1500);
				system("cls");
				continue;
			}


			cout << "\n";
			cout << "Saved.\n";
			Sleep(2000);
			system("cls");
			continue;


		}




		else {
			cout << "Wrong choice/Invalid answer";
			Sleep(2000);
			break;

		}



	}
	return 0;
}
