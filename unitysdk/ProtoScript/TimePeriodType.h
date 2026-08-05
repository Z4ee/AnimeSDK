#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int TimePeriodType_TypeDefinitionIndex = 22507;

	enum class TimePeriodType : ::System::Int32
	{
		EVENING = 3,
		NIGHT = 4,
		NOW = 99,
		MORNING = 1,
		TIME_PERIOD_TYPE_NONE = 0,
		AFTERNOON = 2,
	};
}
