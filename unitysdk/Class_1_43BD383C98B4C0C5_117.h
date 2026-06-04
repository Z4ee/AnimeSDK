#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"

class Class_3_795ECCED069014FF;

#define CLASS_1_43BD383C98B4C0C5_117__CTOR_OFFSET UNITYSDK_OFFSET(0x135528A0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_117_TypeDefinitionIndex = 50298;

class Class_1_43BD383C98B4C0C5_117 : public ::System::Object
{
public:
	::Class_3_795ECCED069014FF* Field_1_0; // 0x10
	::Class_3_795ECCED069014FF* Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::RPG::GameCore::HealFormulaType Field_1_4; // 0x2C
	::RPG::GameCore::FixPoint Field_1_5; // 0x30
	::RPG::GameCore::FixPoint Field_1_6; // 0x38
	::RPG::GameCore::FixPoint Field_1_7; // 0x40
	::RPG::GameCore::FixPoint Field_1_8; // 0x48
	::RPG::GameCore::FixPoint Field_1_9; // 0x50
	::RPG::GameCore::FixPoint Field_1_10; // 0x58
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_11; // 0x60
	::RPG::GameCore::AbilityLinearProperty Field_1_12; // 0xB0
	::RPG::GameCore::FixPoint Field_1_13; // 0xF8
	::RPG::GameCore::FixPoint Field_1_14; // 0x100
	::RPG::GameCore::FixPoint Field_1_15; // 0x108
	::RPG::GameCore::FixPoint Field_1_16; // 0x110
	::RPG::GameCore::FixPoint Field_1_17; // 0x118
	::RPG::GameCore::FixPoint Field_1_18; // 0x120
	::RPG::GameCore::FixPoint Field_1_19; // 0x128
	::RPG::GameCore::FixPoint Field_1_20; // 0x130
	::RPG::GameCore::FixPoint Field_1_21; // 0x138
	::RPG::GameCore::FixPoint Field_1_22; // 0x140

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_117__CTOR_OFFSET))(this);
	}
};
