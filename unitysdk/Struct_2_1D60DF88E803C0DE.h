#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

inline static constexpr unsigned int Struct_2_1D60DF88E803C0DE_TypeDefinitionIndex = 52497;

struct alignas(8) Struct_2_1D60DF88E803C0DE
{
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_0; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_1; // 0x18
	::RPG::GameCore::FixPoint Field_2_2; // 0x20
	::RPG::GameCore::AttackDamageType Field_2_3; // 0x28
	::Class_1_843DD6330B22E422* Field_2_4; // 0x30
	::System::Boolean Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x39
	::System::Boolean Field_2_7; // 0x3A
	::RPG::GameCore::AttackDamageType Field_2_8; // 0x3C
	::RPG::GameCore::FixPoint Field_2_9; // 0x40
	::RPG::GameCore::FixPoint Field_2_10; // 0x48
};
