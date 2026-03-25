#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformanceLiveStreamTransitionType_TypeDefinitionIndex = 39019;

	enum class PerformanceLiveStreamTransitionType : ::System::Int32
	{
		Full = 0,
		NoPre = 1,
		NoPost = 2,
		NoPrePost = 3,
	};
}
