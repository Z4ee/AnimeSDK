#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreezeMovementReason_TypeDefinitionIndex = 45883;

	enum class FreezeMovementReason : ::System::Int32
	{
		FreezeFeature = 1,
		TimeLock = 2,
		FreezeByPlayInteraction = 4,
		FreezeDie = 8,
	};
}
