#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphRuntime_PathFindingResult_FPathFindingResultNode.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSpawnGroupRuntime.h"

namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointRuntime; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace NPCCrowd::AI { class PathGraphGuidePointPathSpawnGroupConfig; }
namespace NPCCrowd::AI { class PathGraphGuidePointPathSpawnGroupConfig_SpawnPathInfo; }
namespace NPCCrowd::AI { class PathGraphGuidePointPathSpawnGroupRuntime_SpawnedNpcInfo; }
namespace NPCCrowd::AI { class PathGraphSpawnPointComponentRuntime; }
namespace NPCCrowd::AI { class PathGraphSplineControlPointLocatorComponent; }
namespace NPCCrowd::AI { class PopulationRuntime; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_CHECKGRAPHLIMIT_OFFSET UNITYSDK_OFFSET(0x1135F050)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_CHECKGROUPLIMIT_OFFSET UNITYSDK_OFFSET(0x1135E8A0)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0x1135E080)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_GETLANEINDEXHALFWAY_OFFSET UNITYSDK_OFFSET(0x1135FE40)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_GETSPAWNEDNPCCOUNT_OFFSET UNITYSDK_OFFSET(0x1135E730)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1135DC60)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0x1135DCD0)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_RANDOMPATHINLIST_OFFSET UNITYSDK_OFFSET(0x1135E960)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_RANDOMSPAWNPOINTINPATHLIST_OFFSET UNITYSDK_OFFSET(0x1135F360)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_SPAWNIMMEDIATELYFORPATH_OFFSET UNITYSDK_OFFSET(0x1135FBE0)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_SPAWNINITIALNPC_OFFSET UNITYSDK_OFFSET(0x1135F480)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_SPAWNTAG_OFFSET UNITYSDK_OFFSET(0x1135F200)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_TRYREMOVENPC_OFFSET UNITYSDK_OFFSET(0x1135E390)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_TRYSPAWNNPC_OFFSET UNITYSDK_OFFSET(0x1135E590)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0x1135E320)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x11360070)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME__INIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x11360080)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME__INIT_B__7_1_OFFSET UNITYSDK_OFFSET(0x11360190)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___BASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x113602E0)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___BASE_GETSPAWNEDNPCCOUNT_OFFSET UNITYSDK_OFFSET(0x11360370)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x11360380)
#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x11360410)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphGuidePointPathSpawnGroupRuntime_TypeDefinitionIndex = 62850;

	class PathGraphGuidePointPathSpawnGroupRuntime : public ::NPCCrowd::AI::PathGraphSpawnGroupRuntime
	{
	public:
		::NPCCrowd::AI::PopulationRuntime* _populationRuntime; // 0x40
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphGuidePointPathSpawnGroupRuntime_SpawnedNpcInfo*>* _spawnedNpcList; // 0x48
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSpawnPointComponentRuntime*>* _pathSpawnPointList; // 0x50
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointPathConfig*>* pathsOfIdleSpawnPoints; // 0x58
		::System::Single _lastSpawnTime; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME__CTOR_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphGuidePointPathSpawnGroupConfig* get_Config()
		{
			return ((::NPCCrowd::AI::PathGraphGuidePointPathSpawnGroupConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_GET_CONFIG_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Int32 GetSpawnedNpcCount(::System::Int32 graphID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_GETSPAWNEDNPCCOUNT_OFFSET))(this, graphID);
		}

		::System::Void TryRemoveNpc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_TRYREMOVENPC_OFFSET))(this);
		}

		::System::Void TrySpawnNpc(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_TRYSPAWNNPC_OFFSET))(this, deltaTime);
		}

		::System::Boolean CheckGroupLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_CHECKGROUPLIMIT_OFFSET))(this);
		}

		::System::Boolean CheckGraphLimit(::System::Int32 graphID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_CHECKGRAPHLIMIT_OFFSET))(this, graphID);
		}

		::System::Int32 SpawnTag(::System::Boolean recordTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_SPAWNTAG_OFFSET))(this, recordTime);
		}

		::System::Void RandomPathInList(::NPCCrowd::AI::PathGraphFeaturePointPathConfig*& pathConfig, ::NPCCrowd::AI::PathGraphSpawnPointComponentRuntime*& spawnPoint)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig*&, ::NPCCrowd::AI::PathGraphSpawnPointComponentRuntime*&))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_RANDOMPATHINLIST_OFFSET))(this, pathConfig, spawnPoint);
		}

		static ::NPCCrowd::AI::PathGraphFeaturePointPathConfig* RandomSpawnPointInPathList(::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointPathConfig*>* pathList)
		{
			return ((::NPCCrowd::AI::PathGraphFeaturePointPathConfig*(*)(::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointPathConfig*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_RANDOMSPAWNPOINTINPATHLIST_OFFSET))(pathList);
		}

		::System::Void SpawnInitialNpc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_SPAWNINITIALNPC_OFFSET))(this);
		}

		::System::Void SpawnImmediatelyForPath(::NPCCrowd::AI::PathGraphFeaturePointPathConfig* pathConfig, ::System::Int32 tagID, ::NPCCrowd::AI::PathGraphFeaturePointV2Config* pointConfig, ::NPCCrowd::AI::PathGraphSplineControlPointLocatorComponent* locator, ::System::Int32 spawnGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig*, ::System::Int32, ::NPCCrowd::AI::PathGraphFeaturePointV2Config*, ::NPCCrowd::AI::PathGraphSplineControlPointLocatorComponent*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_SPAWNIMMEDIATELYFORPATH_OFFSET))(this, pathConfig, tagID, pointConfig, locator, spawnGroupID);
		}

		static ::System::Int32 GetLaneIndexHalfWay(::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphRuntime_PathFindingResult_FPathFindingResultNode>* pathNodes, ::System::Int32 firstLaneIndex, ::System::Int32 targetIndex)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphRuntime_PathFindingResult_FPathFindingResultNode>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_GETLANEINDEXHALFWAY_OFFSET))(pathNodes, firstLaneIndex, targetIndex);
		}

		::NPCCrowd::AI::PathGraphFeaturePointPathConfig* _Init_b__7_0(::NPCCrowd::AI::PathGraphGuidePointPathSpawnGroupConfig_SpawnPathInfo* pathInfo)
		{
			return ((::NPCCrowd::AI::PathGraphFeaturePointPathConfig*(*)(::PVOID, ::NPCCrowd::AI::PathGraphGuidePointPathSpawnGroupConfig_SpawnPathInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME__INIT_B__7_0_OFFSET))(this, pathInfo);
		}

		::NPCCrowd::AI::PathGraphFeaturePointRuntime* _Init_b__7_1(::NPCCrowd::AI::PathGraphFeaturePointPathConfig* pathConfig)
		{
			return ((::NPCCrowd::AI::PathGraphFeaturePointRuntime*(*)(::PVOID, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME__INIT_B__7_1_OFFSET))(this, pathConfig);
		}

		::System::Void __base_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___BASE_CLEAR_OFFSET))(this);
		}

		::System::Int32 __base_GetSpawnedNpcCount(::System::Int32 P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___BASE_GETSPAWNEDNPCCOUNT_OFFSET))(this, P0);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
