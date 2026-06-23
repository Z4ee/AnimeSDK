#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int EasingFunc_TypeDefinitionIndex = 37672;

	enum class EasingFunc : ::System::Int32
	{
		Linear = 0,
		Step = 1,
		SinIn = 2,
		SinOut = 3,
		SinInOut = 4,
		EaseIn = 5,
		EaseOut = 6,
		EaseInOut = 7,
		ExpoIn = 8,
		ExpoOut = 9,
		ExpoInOut = 10,
		CircularIn = 11,
		CircularOut = 12,
		CircularInOut = 13,
	};
}
