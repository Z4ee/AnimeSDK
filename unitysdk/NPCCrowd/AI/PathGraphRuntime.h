#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphRuntime_PathFindingResult_FPathFindingResultNode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace NPCCrowd::AI { class FeaturePointRef; }
namespace NPCCrowd::AI { class PathFindingGraph; }
namespace NPCCrowd::AI { class PathGraphConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace NPCCrowd::AI { class PathGraphNodeRuntime; }
namespace NPCCrowd::AI { class PathGraphRuntime_PathFindingResult; }
namespace NPCCrowd::AI { class PathGraphStateRuntime; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHRUNTIME_CLEARNODES_OFFSET UNITYSDK_OFFSET(0x114F6A60)
#define NPCCROWD_AI_PATHGRAPHRUNTIME_CLEARPATHFINDING_OFFSET UNITYSDK_OFFSET(0x114F6C30)
#define NPCCROWD_AI_PATHGRAPHRUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0x114F6960)
#define NPCCROWD_AI_PATHGRAPHRUNTIME_FINDPATH_1_OFFSET UNITYSDK_OFFSET(0x114F7290)
#define NPCCROWD_AI_PATHGRAPHRUNTIME_FINDPATH_OFFSET UNITYSDK_OFFSET(0x114F70A0)
#define NPCCROWD_AI_PATHGRAPHRUNTIME_GETNODE_OFFSET UNITYSDK_OFFSET(0x114F61A0)
#define NPCCROWD_AI_PATHGRAPHRUNTIME_INITNODES_OFFSET UNITYSDK_OFFSET(0x114F62D0)
#define NPCCROWD_AI_PATHGRAPHRUNTIME_INITPATHFINDING_OFFSET UNITYSDK_OFFSET(0x114F6830)
#define NPCCROWD_AI_PATHGRAPHRUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0x114F6280)
#define NPCCROWD_AI_PATHGRAPHRUNTIME_REFRESH_OFFSET UNITYSDK_OFFSET(0x114F6C90)
#define NPCCROWD_AI_PATHGRAPHRUNTIME_SETPATHGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0x114F7050)
#define NPCCROWD_AI_PATHGRAPHRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x114F7520)
#define NPCCROWD_AI_PATHGRAPHRUNTIME__FINDPATH_B__15_0_OFFSET UNITYSDK_OFFSET(0x114F75B0)
#define NPCCROWD_AI_PATHGRAPHRUNTIME__FINDPATH_B__16_0_OFFSET UNITYSDK_OFFSET(0x114F76C0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphRuntime_TypeDefinitionIndex = 41889;

	class PathGraphRuntime : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*>* _pathCache; // 0x10
		::NPCCrowd::AI::PathGraphConfig* Config; // 0x18
		::NPCCrowd::AI::PathFindingGraph* _pathFindingGraph; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PathGraphNodeRuntime*>* _nodeDictionary; // 0x28
		::NPCCrowd::AI::PathGraphStateRuntime* _stateRuntime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME__CTOR_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphNodeRuntime* GetNode(::System::Int32 nodeID)
		{
			return ((::NPCCrowd::AI::PathGraphNodeRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_GETNODE_OFFSET))(this, nodeID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_INIT_OFFSET))(this);
		}

		::System::Void InitNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_INITNODES_OFFSET))(this);
		}

		::System::Void InitPathFinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_INITPATHFINDING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Void ClearNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_CLEARNODES_OFFSET))(this);
		}

		::System::Void ClearPathFinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_CLEARPATHFINDING_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_REFRESH_OFFSET))(this);
		}

		::System::Void SetPathGraphState(::NPCCrowd::AI::PathGraphStateRuntime* stateRuntime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathGraphStateRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_SETPATHGRAPHSTATE_OFFSET))(this, stateRuntime);
		}

		::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* FindPath(::NPCCrowd::AI::PathGraphFeaturePointPathConfig* pathConfig)
		{
			return ((::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*(*)(::PVOID, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_FINDPATH_OFFSET))(this, pathConfig);
		}

		::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* FindPath_1(::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>* pointList)
		{
			return ((::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME_FINDPATH_1_OFFSET))(this, pointList);
		}

		::NPCCrowd::AI::PathGraphFeaturePointV2Config* _FindPath_b__15_0(::NPCCrowd::AI::FeaturePointRef* pointRef)
		{
			return ((::NPCCrowd::AI::PathGraphFeaturePointV2Config*(*)(::PVOID, ::NPCCrowd::AI::FeaturePointRef*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME__FINDPATH_B__15_0_OFFSET))(this, pointRef);
		}

		::NPCCrowd::AI::PathGraphRuntime_PathFindingResult_FPathFindingResultNode _FindPath_b__16_0(::System::ValueTuple_2<::System::Int32, ::System::Boolean> info)
		{
			return ((::NPCCrowd::AI::PathGraphRuntime_PathFindingResult_FPathFindingResultNode(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Boolean>))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHRUNTIME__FINDPATH_B__16_0_OFFSET))(this, info);
		}
	};
}
