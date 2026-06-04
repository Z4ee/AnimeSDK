#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_43BD383C98B4C0C5_119__CTOR_OFFSET UNITYSDK_OFFSET(0xC1EEAF0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_119_TypeDefinitionIndex = 50871;

class Class_1_43BD383C98B4C0C5_119 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_0; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::RPG::GameCore::HealFormulaType Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::Boolean Field_1_5; // 0x2D
	::RPG::GameCore::FixPoint Field_1_6; // 0x30
	::RPG::GameCore::FixPoint Field_1_7; // 0x38
	::RPG::GameCore::FixPoint Field_1_8; // 0x40
	::RPG::GameCore::FixPoint Field_1_9; // 0x48
	::RPG::GameCore::FixPoint Field_1_10; // 0x50
	::RPG::GameCore::FixPoint Field_1_11; // 0x58
	::RPG::GameCore::FixPoint Field_1_12; // 0x60
	::RPG::GameCore::FixPoint Field_1_13; // 0x68
	::RPG::GameCore::FixPoint Field_1_14; // 0x70
	::RPG::GameCore::AbilityLinearProperty Field_1_15; // 0x78
	::RPG::GameCore::FixPoint Field_1_16; // 0xC0
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_17; // 0xC8
	::RPG::GameCore::FixPoint Field_1_18; // 0x118
	::RPG::GameCore::FixPoint Field_1_19; // 0x120
	::RPG::GameCore::FixPoint Field_1_20; // 0x128
	::RPG::GameCore::FixPoint Field_1_21; // 0x130
	::RPG::GameCore::FixPoint Field_1_22; // 0x138
	::RPG::GameCore::FixPoint Field_1_23; // 0x140

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_119__CTOR_OFFSET))(this);
	}
};
