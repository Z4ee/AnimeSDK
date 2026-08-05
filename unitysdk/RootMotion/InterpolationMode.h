#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion
{
	inline static constexpr unsigned int InterpolationMode_TypeDefinitionIndex = 38776;

	enum class InterpolationMode : ::System::Int32
	{
		InOutQuintic = 2,
		OutQuartic = 14,
		InElasticSmall = 9,
		InElasticBig = 10,
		OutInQuartic = 17,
		OutSine = 21,
		InOutSine = 3,
		OutElasticSmall = 19,
		InOutCubic = 1,
		OutQuintic = 13,
		OutBackCubic = 23,
		BackInCubic = 25,
		InCubic = 6,
		InElastic = 8,
		None = 0,
		InQuartic = 5,
		OutElastic = 18,
		OutCubic = 15,
		InQuintic = 4,
		InQuadratic = 7,
		InBack = 12,
		InSine = 11,
		BackInQuartic = 26,
		OutElasticBig = 20,
		OutBack = 22,
		OutInCubic = 16,
		OutBackQuartic = 24,
	};
}
