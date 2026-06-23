#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointComponent_StopMode_TypeDefinitionIndex = 45830;

	enum class PathGraphCrossingPointComponent_StopMode : ::System::Int32
	{
		OnBothImmediately = 4,
		OnStopNodeExit = 0,
		OnStartNodeImmediately = 3,
		OnStartNodeEnter = 1,
		OnStopNodeImmediately = 2,
	};
}
