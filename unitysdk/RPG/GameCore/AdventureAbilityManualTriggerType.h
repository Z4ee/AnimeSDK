#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbilityManualTriggerType_TypeDefinitionIndex = 16726;

	enum class AdventureAbilityManualTriggerType : ::System::Int32
	{
		None = 0,
		Free = 1,
		BySummonUnit = 2,
	};
}
