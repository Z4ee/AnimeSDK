#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformanceLiveStreamBulletCommentsMode_TypeDefinitionIndex = 46394;

	enum class PerformanceLiveStreamBulletCommentsMode : ::System::Int32
	{
		Close = 0,
		Normal = 1,
		Chase = 2,
		Appreciation = 3,
		Surprise = 4,
		Anger = 5,
	};
}
