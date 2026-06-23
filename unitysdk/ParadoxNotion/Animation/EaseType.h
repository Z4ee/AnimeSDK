#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Animation
{
	inline static constexpr unsigned int EaseType_TypeDefinitionIndex = 30130;

	enum class EaseType : ::System::Int32
	{
		CircularOut = 17,
		CircularIn = 16,
		ElasticIn = 22,
		ExponentialIn = 13,
		BounceIn = 25,
		QuadraticIn = 1,
		CubicOut = 11,
		ElasticInOut = 24,
		QuarticInOut = 6,
		ExponentialInOut = 15,
		ExponentialOut = 14,
		SinusoidalIn = 19,
		QuarticIn = 4,
		QuadraticOut = 2,
		QuinticOut = 8,
		QuadraticInOut = 3,
		BackInOut = 30,
		SinusoidalInOut = 21,
		SinusoidalOut = 20,
		QuinticIn = 7,
		Linear = 0,
		ElasticOut = 23,
		QuinticInOut = 9,
		QuarticOut = 5,
		BackOut = 29,
		BackIn = 28,
		CircularInOut = 18,
		BounceInOut = 27,
		CubicInOut = 12,
		CubicIn = 10,
		BounceOut = 26,
	};
}
