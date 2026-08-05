#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LerpFunc_TypeDefinitionIndex = 8779;

	enum class LerpFunc : ::System::Int32
	{
		ExpoIn = 8,
		CircularIn = 11,
		SinInOut = 4,
		ExpoOut = 9,
		ExpoInOut = 10,
		CircularOut = 12,
		SmoothArrival = 14,
		Step = 1,
		SinIn = 2,
		EaseInOut = 7,
		EaseIn = 5,
		CircularInOut = 13,
		Linear = 0,
		EaseOut = 6,
		SmoothDeparture = 15,
		SmoothStep = 16,
		SinOut = 3,
	};
}
