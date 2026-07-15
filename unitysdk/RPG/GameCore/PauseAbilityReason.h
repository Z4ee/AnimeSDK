#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseAbilityReason_TypeDefinitionIndex = 54312;

	enum class PauseAbilityReason : ::System::Int32
	{
		Freeze = 2,
		TimeLock = 4,
	};
}
