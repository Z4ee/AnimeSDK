#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int TimePeriodType_TypeDefinitionIndex = 22849;

	enum class TimePeriodType : ::System::Int32
	{
		EVENING = 3,
		NIGHT = 4,
		AFTERNOON = 2,
		MORNING = 1,
		NOW = 99,
		TIME_PERIOD_TYPE_NONE = 0,
	};
}
