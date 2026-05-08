#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int DayOfWeekFlag_TypeDefinitionIndex = 43869;

	enum class DayOfWeekFlag : ::System::Int32
	{
		Saturday = 64,
		Monday = 2,
		Wednesday = 8,
		Tuesday = 4,
		Thursday = 16,
		Sunday = 1,
		Friday = 32,
	};
}
