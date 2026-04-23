#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"

class Class_2_181A7F9409C60DBC;

#define CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1292E900)
#define CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS13_0___FILTERSOLDIERBYINITPOSITION_B__4_OFFSET UNITYSDK_OFFSET(0x129334C0)

inline static constexpr unsigned int Class_1_36006FC25F5DDC69___c__DisplayClass13_0_TypeDefinitionIndex = 71368;

class Class_1_36006FC25F5DDC69___c__DisplayClass13_0 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingBattleInitPosition minPosition; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FilterSoldierByInitPosition_b__4(::Class_2_181A7F9409C60DBC* soldier)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS13_0___FILTERSOLDIERBYINITPOSITION_B__4_OFFSET))(this, soldier);
	}
};
