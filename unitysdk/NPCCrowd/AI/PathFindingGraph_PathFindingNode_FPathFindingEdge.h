#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathFindingGraph_PathFindingNode_FPathFindingEdge_FPathFindingEdgeCache.h"
#include "unitysdk/NPCCrowd/AI/PathGraphNodeConfig_NodeType.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI { class PathFindingGraph_PathFindingNode; }

#define NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_FPATHFINDINGEDGE_CLEARPATHFINDINGCACHE_OFFSET UNITYSDK_OFFSET(0x6870E0)
#define NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_FPATHFINDINGEDGE_ISENABLED_OFFSET UNITYSDK_OFFSET(0x687090)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathFindingGraph_PathFindingNode_FPathFindingEdge_TypeDefinitionIndex = 47985;

	struct alignas(8) PathFindingGraph_PathFindingNode_FPathFindingEdge
	{
		::System::Boolean Enabled; // 0x10
		::System::Int32 PathGraphNodeIndex; // 0x14
		::NPCCrowd::AI::PathGraphNodeConfig_NodeType PathGraphNodeType; // 0x18
		::System::Boolean PathGraphNodeSplineForward; // 0x1C
		::NPCCrowd::AI::PathFindingGraph_PathFindingNode* TargetNode; // 0x20
		::System::Single Cost; // 0x28
		::NPCCrowd::AI::PathFindingGraph_PathFindingNode_FPathFindingEdge_FPathFindingEdgeCache EdgeCache; // 0x2C

		::System::Boolean IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_FPATHFINDINGEDGE_ISENABLED_OFFSET))(this);
		}

		::System::Void ClearPathFindingCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_FPATHFINDINGEDGE_CLEARPATHFINDINGCACHE_OFFSET))(this);
		}
	};
}
