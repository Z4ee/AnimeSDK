#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int TimeOfDayFMSource_SignalMode_TypeDefinitionIndex = 47703;

	enum class TimeOfDayFMSource_SignalMode : ::System::Int32
	{
		Manual = 0,
		Auto = 1,
		Curve = 2,
	};
}
