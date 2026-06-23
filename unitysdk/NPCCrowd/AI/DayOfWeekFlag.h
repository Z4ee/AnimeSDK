#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int DayOfWeekFlag_TypeDefinitionIndex = 61487;

	enum class DayOfWeekFlag : ::System::Int32
	{
		Saturday = 64,
		Sunday = 1,
		Tuesday = 4,
		Friday = 32,
		Thursday = 16,
		Monday = 2,
		Wednesday = 8,
	};
}
