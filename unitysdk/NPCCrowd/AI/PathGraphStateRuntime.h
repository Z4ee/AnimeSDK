#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointRuntime; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace NPCCrowd::AI { class PathGraphSpawnGroupConfig; }
namespace NPCCrowd::AI { class PathGraphSpawnGroupRuntime; }
namespace NPCCrowd::AI { class PathGraphSplineNodeRuntime_BlockState; }
namespace NPCCrowd::AI { class PathGraphStateConfig; }
namespace NPCCrowd::AI { class PathGraphStateGlobalConfig; }
namespace NPCCrowd::AI { class SpawnPointConfig; }
namespace NPCCrowd::AI { class SpawnPointGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEARFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0xFFA5270)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEARSPAWNGROUPS_OFFSET UNITYSDK_OFFSET(0xFFA5FF0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEARSPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0xFFA5460)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0xFFA51A0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETEXPORTFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0xFFA2110)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETEXPORTSPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xFFA22F0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0xFFA1F90)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0xFFA1E00)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETSPAWNEDNPCCOUNT_OFFSET UNITYSDK_OFFSET(0xFFA2400)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETSPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xFFA2220)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0xFFA25C0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITSPAWNGROUPS_OFFSET UNITYSDK_OFFSET(0xFFA2E40)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITSPAWNPOINTGROUP_OFFSET UNITYSDK_OFFSET(0xFFA3330)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITSPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0xFFA2C00)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0xFFA2570)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_ONGRAPHENABLED_OFFSET UNITYSDK_OFFSET(0xFFA3C50)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_ONPATHBLOCKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xFFA61E0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_POSTINITSPAWNGROUPS_OFFSET UNITYSDK_OFFSET(0xFFA3AC0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_UPDATEFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0xFFA65D0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_UPDATESPAWNGROUPS_OFFSET UNITYSDK_OFFSET(0xFFA6730)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0xFFA6570)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xFFA68A0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphStateRuntime_TypeDefinitionIndex = 86268;

	class PathGraphStateRuntime : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _spawnGroupExportMap; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>* FeaturePoints; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointPathConfig*>* FeaturePointPaths; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>* _featurePointRuntimeList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>*>* Path2FeaturePoints; // 0x30
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSpawnGroupRuntime*>* _spawnGroupRuntimeList; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* _disabledSubGraph; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _featurePointExportMap; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* _pathNodeID2SpawnPointHandlers; // 0x50
		::NPCCrowd::AI::SpawnPointConfig* SpawnPoints; // 0x58
		::NPCCrowd::AI::PathGraphStateConfig* Config; // 0x60
		::NPCCrowd::AI::PathGraphStateGlobalConfig* GlobalConfig; // 0x68
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSpawnGroupConfig*>* SpawnGroups; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME__CTOR_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphFeaturePointRuntime* GetFeaturePoint(::System::Int32 pointID)
		{
			return ((::NPCCrowd::AI::PathGraphFeaturePointRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETFEATUREPOINT_OFFSET))(this, pointID);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>* GetFeaturePoints(::System::ValueTuple_2<::System::Int32, ::System::Int32> pointID)
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETFEATUREPOINTS_OFFSET))(this, pointID);
		}

		::NPCCrowd::AI::PathGraphFeaturePointRuntime* GetExportFeaturePoint(::System::String* key)
		{
			return ((::NPCCrowd::AI::PathGraphFeaturePointRuntime*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETEXPORTFEATUREPOINT_OFFSET))(this, key);
		}

		::NPCCrowd::AI::PathGraphSpawnGroupRuntime* GetSpawnGroup(::System::Int32 groupID)
		{
			return ((::NPCCrowd::AI::PathGraphSpawnGroupRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETSPAWNGROUP_OFFSET))(this, groupID);
		}

		::NPCCrowd::AI::PathGraphSpawnGroupRuntime* GetExportSpawnGroup(::System::String* key)
		{
			return ((::NPCCrowd::AI::PathGraphSpawnGroupRuntime*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETEXPORTSPAWNGROUP_OFFSET))(this, key);
		}

		::System::Int32 GetSpawnedNpcCount(::System::Int32 graphID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETSPAWNEDNPCCOUNT_OFFSET))(this, graphID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INIT_OFFSET))(this);
		}

		::System::Void InitFeaturePoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITFEATUREPOINTS_OFFSET))(this);
		}

		::System::Void InitSpawnGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITSPAWNGROUPS_OFFSET))(this);
		}

		::System::Void InitSpawnPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITSPAWNPOINTS_OFFSET))(this);
		}

		::System::Void InitSpawnPointGroup(::NPCCrowd::AI::SpawnPointGroup* groupConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnPointGroup*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITSPAWNPOINTGROUP_OFFSET))(this, groupConfig);
		}

		::System::Void PostInitSpawnGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_POSTINITSPAWNGROUPS_OFFSET))(this);
		}

		::System::Void OnGraphEnabled(::System::Int32 graphID, ::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_ONGRAPHENABLED_OFFSET))(this, graphID, isEnabled);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Void ClearFeaturePoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEARFEATUREPOINTS_OFFSET))(this);
		}

		::System::Void ClearSpawnGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEARSPAWNGROUPS_OFFSET))(this);
		}

		::System::Void ClearSpawnPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEARSPAWNPOINTS_OFFSET))(this);
		}

		::System::Void OnPathBlockStateChanged(::System::Int32 pathID, ::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_ONPATHBLOCKSTATECHANGED_OFFSET))(this, pathID, state);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateFeaturePoints(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_UPDATEFEATUREPOINTS_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateSpawnGroups(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_UPDATESPAWNGROUPS_OFFSET))(this, deltaTime);
		}
	};
}
