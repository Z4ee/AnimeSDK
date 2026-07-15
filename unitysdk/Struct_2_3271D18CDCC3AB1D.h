#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_E03B78B927A9E70C_2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_3271D18CDCC3AB1D_TypeDefinitionIndex = 55166;

struct alignas(8) Struct_2_3271D18CDCC3AB1D
{
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_0; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_1; // 0x18
	::RPG::GameCore::AttackDamageType Field_2_2; // 0x20
	::RPG::GameCore::FixPoint Field_2_3; // 0x28
	::RPG::GameCore::FixPoint Field_2_4; // 0x30
	::RPG::GameCore::FixPoint Field_2_5; // 0x38
	::RPG::GameCore::FixPoint Field_2_6; // 0x40
	::System::Boolean Field_2_7; // 0x48
	::RPG::GameCore::FixPoint Field_2_8; // 0x50
	::RPG::GameCore::FixPoint Field_2_9; // 0x58
	::RPG::GameCore::FixPoint Field_2_10; // 0x60
	::RPG::GameCore::FixPoint Field_2_11; // 0x68
	::System::Collections::Generic::List_1<::Struct_2_E03B78B927A9E70C_2>* Field_2_12; // 0x70
	::System::Boolean Field_2_13; // 0x78
};
