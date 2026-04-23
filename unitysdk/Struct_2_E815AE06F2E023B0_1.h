#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

inline static constexpr unsigned int Struct_2_E815AE06F2E023B0_1_TypeDefinitionIndex = 51485;

struct alignas(8) Struct_2_E815AE06F2E023B0_1
{
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_0; // 0x10
	::RPG::GameCore::ModifierBehaviorFlag Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
};
