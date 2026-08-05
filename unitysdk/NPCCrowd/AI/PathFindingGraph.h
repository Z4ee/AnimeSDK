#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI { class PathFindingGraph_PathFindingNode; }
namespace NPCCrowd::AI { class PathGraphConfigComponentSet; }
namespace NPCCrowd::AI { class PathGraphNodeConfig; }
namespace NPCCrowd::AI { class PathGraphSplineConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHFINDINGGRAPH_CALHEURISTICDISTANCE_OFFSET UNITYSDK_OFFSET(0x15B71540)
#define NPCCROWD_AI_PATHFINDINGGRAPH_CLEAR_OFFSET UNITYSDK_OFFSET(0x15B709D0)
#define NPCCROWD_AI_PATHFINDINGGRAPH_FINDSHORTESTPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x15B70CD0)
#define NPCCROWD_AI_PATHFINDINGGRAPH_FINDSHORTESTPATH_OFFSET UNITYSDK_OFFSET(0x15B70A80)
#define NPCCROWD_AI_PATHFINDINGGRAPH_GETPATHGRAPHNODEINDEX_OFFSET UNITYSDK_OFFSET(0x15B70C10)
#define NPCCROWD_AI_PATHFINDINGGRAPH_INITPATHFINDINGNODES_OFFSET UNITYSDK_OFFSET(0x15B6F210)
#define NPCCROWD_AI_PATHFINDINGGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0x15B6F1C0)
#define NPCCROWD_AI_PATHFINDINGGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x15B71750)
#define NPCCROWD_AI_PATHFINDINGGRAPH__INITPATHFINDINGNODES_G__GETSPLINEPATHFINDINGNODEBYPOSITION_3_1_OFFSET UNITYSDK_OFFSET(0x15B70940)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathFindingGraph_TypeDefinitionIndex = 43140;

	class PathFindingGraph : public ::System::Object
	{
	public:
		// static const ::System::Int32 MaxStepNum = 0xC8; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PathFindingGraph_PathFindingNode*>* _pathFindingNodes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphNodeConfig*>* nodes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphNodeConfig*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_INIT_OFFSET))(this, nodes);
		}

		::System::Void InitPathFindingNodes(::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphNodeConfig*>* nodes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphNodeConfig*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_INITPATHFINDINGNODES_OFFSET))(this, nodes);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_CLEAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Boolean>>* FindShortestPath(::NPCCrowd::AI::PathGraphConfigComponentSet* startComponents, ::NPCCrowd::AI::PathGraphConfigComponentSet* endComponents)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Boolean>>*(*)(::PVOID, ::NPCCrowd::AI::PathGraphConfigComponentSet*, ::NPCCrowd::AI::PathGraphConfigComponentSet*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_FINDSHORTESTPATH_OFFSET))(this, startComponents, endComponents);
		}

		static ::System::Int32 GetPathGraphNodeIndex(::NPCCrowd::AI::PathGraphConfigComponentSet* componentSet)
		{
			return ((::System::Int32(*)(::NPCCrowd::AI::PathGraphConfigComponentSet*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_GETPATHGRAPHNODEINDEX_OFFSET))(componentSet);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Boolean>>* FindShortestPathInternal(::System::Int32 startNodeIndex, ::System::Int32 endNodeIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Boolean>>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_FINDSHORTESTPATHINTERNAL_OFFSET))(this, startNodeIndex, endNodeIndex);
		}

		::System::Single CalHeuristicDistance(::System::Int32 nodeIndex, ::System::Int32 startNodeIndex, ::System::Int32 endNodeIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH_CALHEURISTICDISTANCE_OFFSET))(this, nodeIndex, startNodeIndex, endNodeIndex);
		}

		::NPCCrowd::AI::PathFindingGraph_PathFindingNode* _InitPathFindingNodes_g__GetSplinePathFindingNodeByPosition_3_1(::NPCCrowd::AI::PathGraphSplineConfig* splineConfig, ::UnityEngine::Vector3 centerPosition)
		{
			return ((::NPCCrowd::AI::PathFindingGraph_PathFindingNode*(*)(::PVOID, ::NPCCrowd::AI::PathGraphSplineConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHFINDINGGRAPH__INITPATHFINDINGNODES_G__GETSPLINEPATHFINDINGNODEBYPOSITION_3_1_OFFSET))(this, splineConfig, centerPosition);
		}
	};
}
