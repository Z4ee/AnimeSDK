#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class AdventureModifierInstance; }

inline static constexpr unsigned int Struct_2_A98C406BD653F8E9_TypeDefinitionIndex = 57163;

struct alignas(8) Struct_2_A98C406BD653F8E9
{
	::RPG::GameCore::AdventureModifierInstance* ILIIOLJMKME; // 0x10
	::RPG::GameCore::AttackDamageType KOIOKIBIMCB; // 0x18
	::RPG::GameCore::MonsterRank BKEGNEMICHF; // 0x1C
};
