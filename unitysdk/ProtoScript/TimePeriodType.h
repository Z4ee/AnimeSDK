#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int TimePeriodType_TypeDefinitionIndex = 21560;

	enum class TimePeriodType : ::System::Int32
	{
		TIME_PERIOD_TYPE_NONE = 0,
		NOW = 99,
		AFTERNOON = 2,
		EVENING = 3,
		NIGHT = 4,
		MORNING = 1,
	};
}
