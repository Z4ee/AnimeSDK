#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_FPATHFINDINGNODECACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x5A0760)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathFindingGraph_PathFindingNode_FPathFindingNodeCache_TypeDefinitionIndex = 43144;

	struct alignas(4) PathFindingGraph_PathFindingNode_FPathFindingNodeCache
	{
		::System::Boolean OverrideEnabled; // 0x10
		::System::Boolean Enabled; // 0x11
		::System::Int32 PrevNodeIndex; // 0x14
		::System::Int32 PrevNodeOutEdgeIndex; // 0x18
		::System::Single PathDistance; // 0x1C
		::System::Single HeuristicDistance; // 0x20

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_FPATHFINDINGNODECACHE_CLEAR_OFFSET))(this);
		}
	};
}
