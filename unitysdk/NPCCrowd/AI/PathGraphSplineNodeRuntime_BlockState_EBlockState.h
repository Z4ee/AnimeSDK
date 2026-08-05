#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineNodeRuntime_BlockState_EBlockState_TypeDefinitionIndex = 84112;

	enum class PathGraphSplineNodeRuntime_BlockState_EBlockState : ::System::Int32
	{
		BlockAtEnter = 1,
		BlockImmediately = 3,
		None = 0,
		BlockAtExit = 2,
	};
}
