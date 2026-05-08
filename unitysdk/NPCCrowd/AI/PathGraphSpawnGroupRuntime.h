#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointRuntime; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace NPCCrowd::AI { class PathGraphRuntime_PathFindingResult; }
namespace NPCCrowd::AI { class PathGraphSpawnGroupConfig; }
namespace NPCCrowd::AI { class PathGraphStateRuntime; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_CHECKPATHFINDINGRESULT_OFFSET UNITYSDK_OFFSET(0xD22EB60)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0xD22E0B0)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_GETSPAWNEDNPCCOUNT_OFFSET UNITYSDK_OFFSET(0xD22E1A0)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_GETTIME_OFFSET UNITYSDK_OFFSET(0xD22EC70)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0xD22E070)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_RANDRANGE_1_OFFSET UNITYSDK_OFFSET(0xD22ED20)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_RANDRANGE_OFFSET UNITYSDK_OFFSET(0xD22ECB0)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_REMOVECROWDNPC_OFFSET UNITYSDK_OFFSET(0xD22E510)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_SETENABLED_OFFSET UNITYSDK_OFFSET(0xD22E150)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_SPAWNCROWDNPC_OFFSET UNITYSDK_OFFSET(0xD22E230)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_STARTPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xD22E630)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0xD22E0F0)
#define NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xD22ED70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnGroupRuntime_TypeDefinitionIndex = 54742;

	class PathGraphSpawnGroupRuntime : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>* FeaturePointRuntimeList; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>* FeaturePointConfigList; // 0x18
		::NPCCrowd::AI::PathGraphSpawnGroupConfig* Config; // 0x20
		::NPCCrowd::AI::PathGraphStateRuntime* StateRuntime; // 0x28
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointPathConfig*>* FeaturePointPathConfigList; // 0x30
		::System::Boolean Enabled; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_SETENABLED_OFFSET))(this, enabled);
		}

		::System::Int32 GetSpawnedNpcCount(::System::Int32 graphID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_GETSPAWNEDNPCCOUNT_OFFSET))(this, graphID);
		}

		static ::Class_3_F2DAD7F45F518868* SpawnCrowdNpc(::System::Int32 tag)
		{
			return ((::Class_3_F2DAD7F45F518868*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_SPAWNCROWDNPC_OFFSET))(tag);
		}

		static ::System::Void RemoveCrowdNpc(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_REMOVECROWDNPC_OFFSET))(npcComp);
		}

		static ::System::Void StartPathFollow(::Class_3_F2DAD7F45F518868* npcComp, ::System::String* movementStyle, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::System::Int32 laneIndex, ::System::Single laneInnerOffset)
		{
			return ((::System::Void(*)(::Class_3_F2DAD7F45F518868*, ::System::String*, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_STARTPATHFOLLOW_OFFSET))(npcComp, movementStyle, pathResult, laneIndex, laneInnerOffset);
		}

		static ::System::Boolean CheckPathFindingResult(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig* pathConfig)
		{
			return ((::System::Boolean(*)(::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_CHECKPATHFINDINGRESULT_OFFSET))(pathResult, pathConfig);
		}

		static ::System::Single GetTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_GETTIME_OFFSET))();
		}

		static ::System::Single RandRange(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_RANDRANGE_OFFSET))(min, max);
		}

		static ::System::Int32 RandRange_1(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNGROUPRUNTIME_RANDRANGE_1_OFFSET))(min, max);
		}
	};
}
