#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_044382BF73D8EA3B;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }

#define CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS84_0__CTOR_OFFSET UNITYSDK_OFFSET(0x104F00B0)
#define CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS84_0___TRYLOOKATCHAMPIONCAT_B__0_OFFSET UNITYSDK_OFFSET(0x104F0D50)

inline static constexpr unsigned int Class_1_044382BF73D8EA3B___c__DisplayClass84_0_TypeDefinitionIndex = 63477;

class Class_1_044382BF73D8EA3B___c__DisplayClass84_0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* championCatView; // 0x10
	::Class_1_044382BF73D8EA3B* __4__this; // 0x18
	::System::UInt32 runnerUpID; // 0x20
	::System::UInt32 championCatID; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS84_0__CTOR_OFFSET))(this);
	}

	::System::Void __TryLookAtChampionCat_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS84_0___TRYLOOKATCHAMPIONCAT_B__0_OFFSET))(this);
	}
};
