#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityLocalLegendDifficulty_TypeDefinitionIndex = 11327;

	enum class ActivityLocalLegendDifficulty : ::System::Int32
	{
		Easy = 1,
		Hard = 2,
		Fearless = 3,
	};
}
