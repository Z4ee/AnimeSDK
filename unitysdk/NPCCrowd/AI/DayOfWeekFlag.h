#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int DayOfWeekFlag_TypeDefinitionIndex = 87853;

	enum class DayOfWeekFlag : ::System::Int32
	{
		Sunday = 1,
		Monday = 2,
		Thursday = 16,
		Friday = 32,
		Wednesday = 8,
		Saturday = 64,
		Tuesday = 4,
	};
}
