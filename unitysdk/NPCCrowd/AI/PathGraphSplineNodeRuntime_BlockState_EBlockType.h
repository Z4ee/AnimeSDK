#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineNodeRuntime_BlockState_EBlockType_TypeDefinitionIndex = 66630;

	enum class PathGraphSplineNodeRuntime_BlockState_EBlockType : ::System::Int32
	{
		StopNode = 1,
		None = 0,
		StartNode = 2,
	};
}
