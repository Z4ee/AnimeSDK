#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int TimePeriodTypeFlag_TypeDefinitionIndex = 53874;

	enum class TimePeriodTypeFlag : ::System::Int32
	{
		NIGHT = 16,
		EVENING = 8,
		MORNING = 2,
		AFTERNOON = 4,
	};
}
