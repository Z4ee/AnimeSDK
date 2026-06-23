#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineNodeRuntime_BlockState_EBlockType_TypeDefinitionIndex = 83281;

	enum class PathGraphSplineNodeRuntime_BlockState_EBlockType : ::System::Int32
	{
		None = 0,
		StopNode = 1,
		StartNode = 2,
	};
}
