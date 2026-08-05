#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointConfig_StopMode_TypeDefinitionIndex = 51390;

	enum class PathGraphCrossingPointConfig_StopMode : ::System::Int32
	{
		OnStartNodeEnter = 1,
		OnStopNodeImmediately = 2,
		OnBothImmediately = 4,
		OnStopNodeExit = 0,
		OnStartNodeImmediately = 3,
	};
}
