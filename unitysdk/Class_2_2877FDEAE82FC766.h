#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_20.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_582AF6875845819E;
namespace RPG::Client { class UIController; }
namespace System { class Object; }

#define CLASS_2_2877FDEAE82FC766_METHOD_2_50884B570C30FEE7_OFFSET UNITYSDK_OFFSET(0xB908AD0)
#define CLASS_2_2877FDEAE82FC766_METHOD_2_8925D5F9438B14DD_OFFSET UNITYSDK_OFFSET(0xB9089F0)
#define CLASS_2_2877FDEAE82FC766_METHOD_2_8E5AAAE17B8DAB9A_OFFSET UNITYSDK_OFFSET(0xB908890)
#define CLASS_2_2877FDEAE82FC766__CTOR_OFFSET UNITYSDK_OFFSET(0xB908880)

inline static constexpr unsigned int Class_2_2877FDEAE82FC766_TypeDefinitionIndex = 64109;

class Class_2_2877FDEAE82FC766 : public ::Class_1_F9FBCC956DFCF137_20
{
public:
	::RPG::Client::UIController* FAJFHDCOEGE; // 0x18
	::RPG::Client::UIController* NJGMENOFECG; // 0x20

	::System::Void _ctor(::Class_1_582AF6875845819E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_2_2877FDEAE82FC766__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E5AAAE17B8DAB9A(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_2877FDEAE82FC766_METHOD_2_8E5AAAE17B8DAB9A_OFFSET))(this, a1);
	}

	::System::Void Method_2_8925D5F9438B14DD(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_2877FDEAE82FC766_METHOD_2_8925D5F9438B14DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_50884B570C30FEE7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2877FDEAE82FC766_METHOD_2_50884B570C30FEE7_OFFSET))(this, a1);
	}
};
