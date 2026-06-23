#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LerpFunc_TypeDefinitionIndex = 8458;

	enum class LerpFunc : ::System::Int32
	{
		ExpoOut = 9,
		CircularOut = 12,
		SmoothDeparture = 15,
		EaseOut = 6,
		EaseInOut = 7,
		SmoothArrival = 14,
		ExpoIn = 8,
		CircularInOut = 13,
		EaseIn = 5,
		SinInOut = 4,
		CircularIn = 11,
		SmoothStep = 16,
		SinOut = 3,
		Linear = 0,
		Step = 1,
		ExpoInOut = 10,
		SinIn = 2,
	};
}
