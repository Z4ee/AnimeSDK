#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityProperty.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class AdventureAbilityComponent; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierInstance_StackPropertySlot_TypeDefinitionIndex = 51941;

	struct alignas(8) AdventureModifierInstance_StackPropertySlot
	{
		::System::Int32 Index; // 0x10
		::RPG::GameCore::AdventureAbilityProperty Property; // 0x14
		::RPG::GameCore::AdventureAbilityComponent* Target; // 0x18
	};
}
