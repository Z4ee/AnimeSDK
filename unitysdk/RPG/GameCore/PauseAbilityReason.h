#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseAbilityReason_TypeDefinitionIndex = 53098;

	enum class PauseAbilityReason : ::System::Int32
	{
		Freeze = 2,
		TimeLock = 4,
	};
}
