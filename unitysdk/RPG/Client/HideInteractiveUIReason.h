#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int HideInteractiveUIReason_TypeDefinitionIndex = 61384;

	enum class HideInteractiveUIReason : ::System::Int32
	{
		InPerformance = 0,
		InPropInteract = 1,
		InPuzzlePerformance = 2,
	};
}
