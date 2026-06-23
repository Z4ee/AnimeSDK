#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointConfig_StopMode_TypeDefinitionIndex = 55721;

	enum class PathGraphCrossingPointConfig_StopMode : ::System::Int32
	{
		OnStartNodeImmediately = 3,
		OnStopNodeImmediately = 2,
		OnStopNodeExit = 0,
		OnStartNodeEnter = 1,
		OnBothImmediately = 4,
	};
}
