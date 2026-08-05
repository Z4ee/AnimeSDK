#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathFindingGraph_PathFindingNode_FPathFindingEdge.h"
#include "unitysdk/NPCCrowd/AI/PathFindingGraph_PathFindingNode_FPathFindingNodeCache.h"
#include "unitysdk/NPCCrowd/AI/PathGraphNodeConfig_NodeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_CLEARPATHFINDINGCACHE_OFFSET UNITYSDK_OFFSET(0x10B392D0)
#define NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_ISENABLED_OFFSET UNITYSDK_OFFSET(0x10B39280)
#define NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10B39470)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathFindingGraph_PathFindingNode_TypeDefinitionIndex = 43141;

	class PathFindingGraph_PathFindingNode : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathFindingGraph_PathFindingNode_FPathFindingEdge>* OutEdges; // 0x10
		::NPCCrowd::AI::PathFindingGraph_PathFindingNode_FPathFindingNodeCache NodeCache; // 0x18
		::System::Int32 Index; // 0x2C
		::System::Int32 PathGraphNodeIndex; // 0x30
		::System::Boolean Enabled; // 0x34
		::NPCCrowd::AI::PathGraphNodeConfig_NodeType PathGraphNodeType; // 0x38
		::UnityEngine::Vector3 Position; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_ISENABLED_OFFSET))(this);
		}

		::System::Void ClearPathFindingCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_PATHFINDINGNODE_CLEARPATHFINDINGCACHE_OFFSET))(this);
		}
	};
}
