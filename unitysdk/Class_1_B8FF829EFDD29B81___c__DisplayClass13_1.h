#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"

class Class_2_6B60059019300BAD;

#define CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0xCFC71F0)
#define CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS13_1___FILTERSOLDIERBYINITPOSITION_B__6_OFFSET UNITYSDK_OFFSET(0xCFCC410)

inline static constexpr unsigned int Class_1_B8FF829EFDD29B81___c__DisplayClass13_1_TypeDefinitionIndex = 77401;

class Class_1_B8FF829EFDD29B81___c__DisplayClass13_1 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingBattleInitPosition maxPosition; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
	}

	::System::Boolean __FilterSoldierByInitPosition_b__6(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS13_1___FILTERSOLDIERBYINITPOSITION_B__6_OFFSET))(this, a1);
	}
};
