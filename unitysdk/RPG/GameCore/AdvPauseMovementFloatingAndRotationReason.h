#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPauseMovementFloatingAndRotationReason_TypeDefinitionIndex = 54499;

	enum class AdvPauseMovementFloatingAndRotationReason : ::System::Int32
	{
		Freeze = 1,
		TimeLock = 2,
		FreezeDie = 4,
	};
}
