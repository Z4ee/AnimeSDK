#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointComponent_StopMode_TypeDefinitionIndex = 43656;

	enum class PathGraphCrossingPointComponent_StopMode : ::System::Int32
	{
		OnStartNodeEnter = 1,
		OnStartNodeImmediately = 3,
		OnStopNodeImmediately = 2,
		OnStopNodeExit = 0,
		OnBothImmediately = 4,
	};
}
