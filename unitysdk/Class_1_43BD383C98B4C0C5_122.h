#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_43BD383C98B4C0C5_122__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9B080)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_122_TypeDefinitionIndex = 51956;

class Class_1_43BD383C98B4C0C5_122 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_0; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::RPG::GameCore::AbilityLinearProperty Field_1_5; // 0x38
	::RPG::GameCore::FixPoint Field_1_6; // 0x80
	::RPG::GameCore::HealFormulaType Field_1_7; // 0x88
	::System::Boolean Field_1_8; // 0x8C
	::System::Boolean Field_1_9; // 0x8D
	::RPG::GameCore::FixPoint Field_1_10; // 0x90
	::RPG::GameCore::FixPoint Field_1_11; // 0x98
	::RPG::GameCore::FixPoint Field_1_12; // 0xA0
	::RPG::GameCore::FixPoint Field_1_13; // 0xA8
	::RPG::GameCore::FixPoint Field_1_14; // 0xB0
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_15; // 0xB8
	::RPG::GameCore::FixPoint Field_1_16; // 0x108
	::RPG::GameCore::FixPoint Field_1_17; // 0x110
	::RPG::GameCore::FixPoint Field_1_18; // 0x118
	::RPG::GameCore::FixPoint Field_1_19; // 0x120
	::RPG::GameCore::FixPoint Field_1_20; // 0x128
	::RPG::GameCore::FixPoint Field_1_21; // 0x130
	::RPG::GameCore::FixPoint Field_1_22; // 0x138
	::RPG::GameCore::FixPoint Field_1_23; // 0x140

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_122__CTOR_OFFSET))(this);
	}
};
