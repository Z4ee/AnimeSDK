#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

inline static constexpr unsigned int Class_3_8EB88D6BF0FEB1F8___c__DisplayClass1_1_TypeDefinitionIndex = 52346;

struct alignas(8) Class_3_8EB88D6BF0FEB1F8___c__DisplayClass1_1
{
	::RPG::GameCore::TurnBasedAbilityComponent* abilityCpnt; // 0x10
	::RPG::GameCore::AttackDamageType attachedDamageType; // 0x18
};
