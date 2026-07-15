#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"

class Class_3_BB8B7764D3497776;

#define CLASS_1_43BD383C98B4C0C5_120__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8D850)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_120_TypeDefinitionIndex = 51380;

class Class_1_43BD383C98B4C0C5_120 : public ::System::Object
{
public:
	::Class_3_BB8B7764D3497776* Field_1_0; // 0x10
	::Class_3_BB8B7764D3497776* Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::RPG::GameCore::FixPoint Field_1_5; // 0x38
	::RPG::GameCore::FixPoint Field_1_6; // 0x40
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_7; // 0x48
	::RPG::GameCore::FixPoint Field_1_8; // 0x98
	::RPG::GameCore::FixPoint Field_1_9; // 0xA0
	::RPG::GameCore::AbilityLinearProperty Field_1_10; // 0xA8
	::RPG::GameCore::FixPoint Field_1_11; // 0xF0
	::RPG::GameCore::FixPoint Field_1_12; // 0xF8
	::RPG::GameCore::FixPoint Field_1_13; // 0x100
	::RPG::GameCore::FixPoint Field_1_14; // 0x108
	::System::Boolean Field_1_15; // 0x110
	::RPG::GameCore::HealFormulaType Field_1_16; // 0x114
	::RPG::GameCore::FixPoint Field_1_17; // 0x118
	::RPG::GameCore::FixPoint Field_1_18; // 0x120
	::RPG::GameCore::FixPoint Field_1_19; // 0x128
	::RPG::GameCore::FixPoint Field_1_20; // 0x130
	::RPG::GameCore::FixPoint Field_1_21; // 0x138
	::RPG::GameCore::FixPoint Field_1_22; // 0x140

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_120__CTOR_OFFSET))(this);
	}
};
