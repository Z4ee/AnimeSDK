#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_FPATHFINDINGEDGE_FPATHFINDINGEDGECACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x6055A0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathFindingGraph_PathFindingNode_FPathFindingEdge_FPathFindingEdgeCache_TypeDefinitionIndex = 47986;

	struct alignas(1) PathFindingGraph_PathFindingNode_FPathFindingEdge_FPathFindingEdgeCache
	{
		::System::Boolean OverrideEnabled; // 0x10
		::System::Boolean Enabled; // 0x11

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_FPATHFINDINGEDGE_FPATHFINDINGEDGECACHE_CLEAR_OFFSET))(this);
		}
	};
}
