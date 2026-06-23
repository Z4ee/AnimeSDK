#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion
{
	inline static constexpr unsigned int InterpolationMode_TypeDefinitionIndex = 38133;

	enum class InterpolationMode : ::System::Int32
	{
		OutBack = 22,
		OutBackQuartic = 24,
		InSine = 11,
		OutElasticBig = 20,
		InElasticSmall = 9,
		InBack = 12,
		InElasticBig = 10,
		None = 0,
		InElastic = 8,
		OutElasticSmall = 19,
		OutElastic = 18,
		OutQuartic = 14,
		OutCubic = 15,
		InQuintic = 4,
		InOutQuintic = 2,
		OutSine = 21,
		InQuadratic = 7,
		OutInCubic = 16,
		OutQuintic = 13,
		InCubic = 6,
		BackInQuartic = 26,
		OutBackCubic = 23,
		InOutCubic = 1,
		InOutSine = 3,
		InQuartic = 5,
		OutInQuartic = 17,
		BackInCubic = 25,
	};
}
