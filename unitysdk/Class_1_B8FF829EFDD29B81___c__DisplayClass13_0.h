#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"

class Class_2_6B60059019300BAD;

#define CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAAD50)
#define CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS13_0___FILTERSOLDIERBYINITPOSITION_B__4_OFFSET UNITYSDK_OFFSET(0xBFAFFF0)

inline static constexpr unsigned int Class_1_B8FF829EFDD29B81___c__DisplayClass13_0_TypeDefinitionIndex = 73915;

class Class_1_B8FF829EFDD29B81___c__DisplayClass13_0 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingBattleInitPosition minPosition; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FilterSoldierByInitPosition_b__4(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS13_0___FILTERSOLDIERBYINITPOSITION_B__4_OFFSET))(this, a1);
	}
};
