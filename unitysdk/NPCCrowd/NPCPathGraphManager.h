#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_D9B8A457D8A4B7BB;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace NPCCrowd::AI { class PathGraphAssetSO; }
namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointRuntime; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace NPCCrowd::AI { class PathGraphNodeRuntime; }
namespace NPCCrowd::AI { class PathGraphRuntime; }
namespace NPCCrowd::AI { class PathGraphRuntime_PathFindingResult; }
namespace NPCCrowd::AI { class PathGraphSpawnGroupRuntime; }
namespace NPCCrowd::AI { class PathGraphSplineNodeRuntime_BlockState; }
namespace NPCCrowd::AI { class PathGraphStateRuntime; }
namespace NPCCrowd::AI { class PathSectionAssetSO; }
namespace NPCCrowd::AI { class PathStateAssetSO; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0xBDF3090)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPH_OFFSET UNITYSDK_OFFSET(0xBDF2D60)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ENABLEGRAPH_OFFSET UNITYSDK_OFFSET(0xBDF4010)
#define NPCCROWD_NPCPATHGRAPHMANAGER_FINDPATHDYNAMIC_OFFSET UNITYSDK_OFFSET(0xBDF6E00)
#define NPCCROWD_NPCPATHGRAPHMANAGER_FINDPATH_OFFSET UNITYSDK_OFFSET(0xBDF6C40)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETALLNODEPOINT_OFFSET UNITYSDK_OFFSET(0xBDF7150)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETEXPORTFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0xBDF5D60)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETEXPORTSPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xBDF5E30)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINTPATHS_OFFSET UNITYSDK_OFFSET(0xBDF4320)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0xBDF5CF0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0xBDF5C90)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETGRAPHSPAWNEDNPCCOUNT_OFFSET UNITYSDK_OFFSET(0xBDF5EA0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETGRAPH_OFFSET UNITYSDK_OFFSET(0xBDF4380)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEBLACKTAGQUERY_OFFSET UNITYSDK_OFFSET(0xBDF5750)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEENTITIES_1_OFFSET UNITYSDK_OFFSET(0xBDF5110)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEENTITIES_OFFSET UNITYSDK_OFFSET(0xBDF4F90)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODELANEWEIGHT_OFFSET UNITYSDK_OFFSET(0xBDF5A90)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODE_OFFSET UNITYSDK_OFFSET(0xBDF44F0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETSPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xBDF5DD0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xBDF2430)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GM_SWITCHTRAFFICSTATE_OFFSET UNITYSDK_OFFSET(0xBDF6FF0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_INITPATHGRAPH_OFFSET UNITYSDK_OFFSET(0xBDF3800)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBDF2BE0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONPATHBLOCKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xBDF70E0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xBDF2780)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONTRAFFICCHANGE_OFFSET UNITYSDK_OFFSET(0xBDF6FA0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PATHLANECOUNTVALID_OFFSET UNITYSDK_OFFSET(0xBDF51F0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PATHLANETAGVALID_OFFSET UNITYSDK_OFFSET(0xBDF53B0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_POSTINITPATHGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0xBDF6490)
#define NPCCROWD_NPCPATHGRAPHMANAGER_POSTINITSPAWNGROUPS_OFFSET UNITYSDK_OFFSET(0xBDF6B50)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBDF6BB0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xBDF2650)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REFRESHPATHGRAPH_OFFSET UNITYSDK_OFFSET(0xBDF3D00)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REGISTERABILITYIDXINNODE_OFFSET UNITYSDK_OFFSET(0xBDF49E0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETENABLEDGRAPH_OFFSET UNITYSDK_OFFSET(0xBDF3E80)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEDATA_1_OFFSET UNITYSDK_OFFSET(0xBDF4740)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEDATA_OFFSET UNITYSDK_OFFSET(0xBDF46D0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEENABLE_1_OFFSET UNITYSDK_OFFSET(0xBDF4900)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEENABLE_OFFSET UNITYSDK_OFFSET(0xBDF4890)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETPATHGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0xBDF5F00)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xBDF25B0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_TRYLOADSECTIONPATHDATA_OFFSET UNITYSDK_OFFSET(0xBDF3240)
#define NPCCROWD_NPCPATHGRAPHMANAGER_UNREGISTERABILITYIDXINNODE_OFFSET UNITYSDK_OFFSET(0xBDF4DA0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_UPDATECROSSINGFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0xBDF6690)
#define NPCCROWD_NPCPATHGRAPHMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDF7A70)
#define NPCCROWD_NPCPATHGRAPHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xBDF79E0)
#define NPCCROWD_NPCPATHGRAPHMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBDF7AB0)
#define NPCCROWD_NPCPATHGRAPHMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xBDF7B40)
#define NPCCROWD_NPCPATHGRAPHMANAGER___BASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBDF7BD0)
#define NPCCROWD_NPCPATHGRAPHMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xBDF7C70)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPathGraphManager_TypeDefinitionIndex = 68498;

	class NPCPathGraphManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet__sectionAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCPathGraphManager_TypeDefinitionIndex)->GetStaticField(0x44CD0);
		}
		static ::System::String** StaticGet_SectionDataPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCPathGraphManager_TypeDefinitionIndex)->GetStaticField(0x44CF0);
		}
		::Foundation::AssetRequestHandle _graphHandle; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PathGraphRuntime*>* _disabledGraphRuntimeDict; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*>*>* _node2EntityIDs; // 0x40
		::NPCCrowd::AI::PathGraphAssetSO* _graphSo; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PathGraphRuntime*>* _graphRuntimeDict; // 0x50
		::NPCCrowd::AI::PathSectionAssetSO* _sectionAssetSo; // 0x58
		::Foundation::AssetRequestHandle _stateHandle; // 0x60
		::NPCCrowd::AI::PathGraphStateRuntime* _stateRuntime; // 0x80
		::NPCCrowd::AI::PathStateAssetSO* _stateSo; // 0x88
		::System::Int32 _stateID; // 0x90
		::System::Int32 _graphSectionID; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::NPCPathGraphManager* Get()
		{
			return ((::NPCCrowd::NPCPathGraphManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GET_OFFSET))();
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SHOULDTICK_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void TryLoadSectionPathData(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_TRYLOADSECTIONPATHDATA_OFFSET))(this, sectionID);
		}

		::System::Void InitPathGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_INITPATHGRAPH_OFFSET))(this);
		}

		::System::Void RefreshPathGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_REFRESHPATHGRAPH_OFFSET))(this);
		}

		::System::Void ClearPathGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPH_OFFSET))(this);
		}

		::System::Void SetEnabledGraph(::System::Collections::Generic::List_1<::System::Int32>* enabledGraph)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETENABLEDGRAPH_OFFSET))(this, enabledGraph);
		}

		::System::Void EnableGraph(::System::Int32 graphID, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ENABLEGRAPH_OFFSET))(this, graphID, enable);
		}

		::System::Void GetFeaturePointPaths(::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointPathConfig*>*& featurePointPaths)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointPathConfig*>*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINTPATHS_OFFSET))(this, featurePointPaths);
		}

		::NPCCrowd::AI::PathGraphRuntime* GetGraph(::System::Int32 graphID)
		{
			return ((::NPCCrowd::AI::PathGraphRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETGRAPH_OFFSET))(this, graphID);
		}

		::NPCCrowd::AI::PathGraphNodeRuntime* GetNode(::System::Int32 nodeID)
		{
			return ((::NPCCrowd::AI::PathGraphNodeRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODE_OFFSET))(this, nodeID);
		}

		::System::Void SetNodeData(::System::Int32 nodeID, ::Class_3_D9B8A457D8A4B7BB* config)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_D9B8A457D8A4B7BB*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEDATA_OFFSET))(this, nodeID, config);
		}

		::System::Void SetNodeData_1(::NPCCrowd::AI::PathGraphNodeRuntime* node, ::Class_3_D9B8A457D8A4B7BB* config)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathGraphNodeRuntime*, ::Class_3_D9B8A457D8A4B7BB*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEDATA_1_OFFSET))(this, node, config);
		}

		::System::Void SetNodeEnable(::System::Int32 nodeID, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEENABLE_OFFSET))(this, nodeID, enable);
		}

		::System::Void SetNodeEnable_1(::NPCCrowd::AI::PathGraphNodeRuntime* node, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathGraphNodeRuntime*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEENABLE_1_OFFSET))(this, node, enable);
		}

		::System::Void RegisterAbilityIdxInNode(::System::Int32 node, ::System::Int32 laneIdx, ::System::UInt32 entityID, ::System::Boolean sort)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_REGISTERABILITYIDXINNODE_OFFSET))(this, node, laneIdx, entityID, sort);
		}

		::System::Void UnRegisterAbilityIdxInNode(::System::Int32 node, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_UNREGISTERABILITYIDXINNODE_OFFSET))(this, node, entityID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNodeEntities(::System::Int32 node, ::System::Int32 laneIdx)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEENTITIES_OFFSET))(this, node, laneIdx);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*>* GetNodeEntities_1(::System::Int32 node)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEENTITIES_1_OFFSET))(this, node);
		}

		::System::Boolean PathLaneCountValid(::System::Int32 node, ::System::Int32 laneIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_PATHLANECOUNTVALID_OFFSET))(this, node, laneIdx);
		}

		::System::Boolean PathLaneTagValid(::System::Int32 node, ::Foundation::Unreal::FGameplayTagContainer tags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_PATHLANETAGVALID_OFFSET))(this, node, tags);
		}

		::System::Boolean GetNodeBlackTagQuery(::System::Int32 node, ::Foundation::Unreal::FGameplayTagQuery*& query)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FGameplayTagQuery*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEBLACKTAGQUERY_OFFSET))(this, node, query);
		}

		::System::Single GetNodeLaneWeight(::System::Int32 node, ::System::Int32 laneIdx)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODELANEWEIGHT_OFFSET))(this, node, laneIdx);
		}

		::NPCCrowd::AI::PathGraphFeaturePointRuntime* GetFeaturePoint(::System::Int32 pointID)
		{
			return ((::NPCCrowd::AI::PathGraphFeaturePointRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINT_OFFSET))(this, pointID);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>* GetFeaturePoints(::System::ValueTuple_2<::System::Int32, ::System::Int32> pointID)
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINTS_OFFSET))(this, pointID);
		}

		::NPCCrowd::AI::PathGraphFeaturePointRuntime* GetExportFeaturePoint(::System::String* key)
		{
			return ((::NPCCrowd::AI::PathGraphFeaturePointRuntime*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETEXPORTFEATUREPOINT_OFFSET))(this, key);
		}

		::NPCCrowd::AI::PathGraphSpawnGroupRuntime* GetSpawnGroup(::System::Int32 groupID)
		{
			return ((::NPCCrowd::AI::PathGraphSpawnGroupRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETSPAWNGROUP_OFFSET))(this, groupID);
		}

		::NPCCrowd::AI::PathGraphSpawnGroupRuntime* GetExportSpawnGroup(::System::String* key)
		{
			return ((::NPCCrowd::AI::PathGraphSpawnGroupRuntime*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETEXPORTSPAWNGROUP_OFFSET))(this, key);
		}

		::System::Int32 GetGraphSpawnedNpcCount(::System::Int32 graphID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETGRAPHSPAWNEDNPCCOUNT_OFFSET))(this, graphID);
		}

		::System::Void SetPathGraphState(::System::Int32 stateID, ::System::Boolean doPost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETPATHGRAPHSTATE_OFFSET))(this, stateID, doPost);
		}

		::System::Void ClearPathGraphState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPHSTATE_OFFSET))(this);
		}

		::System::Void PostInitPathGraphState(::System::Boolean spawnInitNPC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_POSTINITPATHGRAPHSTATE_OFFSET))(this, spawnInitNPC);
		}

		::System::Void PostInitSpawnGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_POSTINITSPAWNGROUPS_OFFSET))(this);
		}

		::System::Void PreLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_PRELATEUPDATE_OFFSET))(this, deltaTime);
		}

		::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* FindPath(::NPCCrowd::AI::PathGraphFeaturePointPathConfig* pathConfig)
		{
			return ((::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*(*)(::PVOID, ::NPCCrowd::AI::PathGraphFeaturePointPathConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_FINDPATH_OFFSET))(this, pathConfig);
		}

		::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* FindPathDynamic(::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>* pointList)
		{
			return ((::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_FINDPATHDYNAMIC_OFFSET))(this, pointList);
		}

		::System::Void OnTrafficChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ONTRAFFICCHANGE_OFFSET))(this, args);
		}

		::System::Void UpdateCrossingFeaturePoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_UPDATECROSSINGFEATUREPOINTS_OFFSET))(this);
		}

		::System::Void GM_SwitchTrafficState(::System::Int32 featurePointID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GM_SWITCHTRAFFICSTATE_OFFSET))(this, featurePointID);
		}

		::System::Void OnPathBlockStateChanged(::System::Int32 pathID, ::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ONPATHBLOCKSTATECHANGED_OFFSET))(this, pathID, state);
		}

		::System::Void GetAllNodePoint(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& endPoints, ::System::Collections::Generic::List_1<::System::Int32>*& nodes, ::System::Boolean excludeStair)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETALLNODEPOINT_OFFSET))(this, endPoints, nodes, excludeStair);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void __base_PreLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER___BASE_PRELATEUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
