#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI { class PathGraphNodeRuntime; }

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphRuntime_PathFindingResult_FPathFindingResultNode_TypeDefinitionIndex = 41891;

	struct alignas(8) PathGraphRuntime_PathFindingResult_FPathFindingResultNode
	{
		::NPCCrowd::AI::PathGraphNodeRuntime* SplineNode; // 0x10
		::System::Boolean IsSplineForward; // 0x18
	};
}
