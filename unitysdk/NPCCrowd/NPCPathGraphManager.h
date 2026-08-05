#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/NPCCrowd/AI/PathGraphShadowOverrideConfig.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/NPCCrowd/NPCPathGraphManager_NodePopulationLimitData.h"
#include "unitysdk/NPCCrowd/NPCPathGraphManager___c__DisplayClass35_0.h"
#include "unitysdk/NPCCrowd/NPCPathGraphManager___c__DisplayClass36_0.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_D9B8A457D8A4B7BB_3;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace MonoNotRelateGameLogic { class DynamicCarPlateAssetCfg; }
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
namespace NPCCrowd::AI { class PathSectionAssetSO_SectionPathData; }
namespace NPCCrowd::AI { class PathStateAssetSO; }
namespace NPCCrowd::AI { class SpawnPointConfig; }
namespace NPCCrowd::AI { class SpawnPointGroup; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARCARPLATE_OFFSET UNITYSDK_OFFSET(0xD8A3F80)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0xD8A3D50)
#define NPCCROWD_NPCPATHGRAPHMANAGER_CLEARPATHGRAPH_OFFSET UNITYSDK_OFFSET(0xD8A3990)
#define NPCCROWD_NPCPATHGRAPHMANAGER_COLLECTNODELOADMAXFACTORS_OFFSET UNITYSDK_OFFSET(0xD8A6090)
#define NPCCROWD_NPCPATHGRAPHMANAGER_COLLECTNODEPOPULATIONWEIGHTS_OFFSET UNITYSDK_OFFSET(0xD8A5DB0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ENABLEGRAPH_OFFSET UNITYSDK_OFFSET(0xD8A6E90)
#define NPCCROWD_NPCPATHGRAPHMANAGER_FINDPATHDYNAMIC_OFFSET UNITYSDK_OFFSET(0xD8AA210)
#define NPCCROWD_NPCPATHGRAPHMANAGER_FINDPATH_OFFSET UNITYSDK_OFFSET(0xD8AA050)
#define NPCCROWD_NPCPATHGRAPHMANAGER_FINDSECTIONPATHDATA_OFFSET UNITYSDK_OFFSET(0xD8A3060)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETALLNODEPOINT_OFFSET UNITYSDK_OFFSET(0xD8AAA40)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETALLSPLINENODE_OFFSET UNITYSDK_OFFSET(0xD8AA560)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETEXPORTFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0xD8A9180)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETEXPORTSPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xD8A9250)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINTPATHS_OFFSET UNITYSDK_OFFSET(0xD8A71A0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0xD8A9110)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0xD8A90B0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETGRAPHSPAWNEDNPCCOUNT_OFFSET UNITYSDK_OFFSET(0xD8A92C0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETGRAPH_OFFSET UNITYSDK_OFFSET(0xD8A7200)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEBLACKTAGQUERY_OFFSET UNITYSDK_OFFSET(0xD8A8B60)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEENTITIES_1_OFFSET UNITYSDK_OFFSET(0xD8A6B20)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEENTITIES_OFFSET UNITYSDK_OFFSET(0xD8A8450)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODELANEWEIGHT_OFFSET UNITYSDK_OFFSET(0xD8A8EB0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEPOPULATIONDATA_OFFSET UNITYSDK_OFFSET(0xD8A6CB0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETNODE_OFFSET UNITYSDK_OFFSET(0xD8A7400)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETSPAWNGROUP_OFFSET UNITYSDK_OFFSET(0xD8A91F0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GETSPAWNPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0xD8A6C50)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GET_CARPLATECFG_OFFSET UNITYSDK_OFFSET(0xD8A4020)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GET_GRAPHSO_OFFSET UNITYSDK_OFFSET(0xD8A4010)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xD8A2CC0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_GM_SWITCHTRAFFICSTATE_OFFSET UNITYSDK_OFFSET(0xD8AA400)
#define NPCCROWD_NPCPATHGRAPHMANAGER_INITCARPLATE_OFFSET UNITYSDK_OFFSET(0xD8A4270)
#define NPCCROWD_NPCPATHGRAPHMANAGER_INITPATHGRAPH_OFFSET UNITYSDK_OFFSET(0xD8A4760)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ISPOPULATIONWEIGHTLIMITENABLED_OFFSET UNITYSDK_OFFSET(0xD8A6C00)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD8A3750)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONPATHBLOCKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xD8AA4F0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xD8A31B0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_ONTRAFFICCHANGE_OFFSET UNITYSDK_OFFSET(0xD8AA3B0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PATHLANECOUNTVALID_OFFSET UNITYSDK_OFFSET(0xD8A85D0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PATHLANETAGVALID_OFFSET UNITYSDK_OFFSET(0xD8A87C0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PATHNODELOADVALID_OFFSET UNITYSDK_OFFSET(0xD8A6920)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PATHPOPULATIONCOUNTVALID_OFFSET UNITYSDK_OFFSET(0xD8A6810)
#define NPCCROWD_NPCPATHGRAPHMANAGER_POSTINITPATHGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0xD8A98A0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_POSTINITSPAWNGROUPS_OFFSET UNITYSDK_OFFSET(0xD8A9F60)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD8A9FC0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xD8A2F30)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REFRESHPATHGRAPH_OFFSET UNITYSDK_OFFSET(0xD8A4C80)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REFRESHPOPULATIONWEIGHTDISTRIBUTION_OFFSET UNITYSDK_OFFSET(0xD8A4E00)
#define NPCCROWD_NPCPATHGRAPHMANAGER_REGISTERABILITYIDXINNODE_OFFSET UNITYSDK_OFFSET(0xD8A7920)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETENABLEDGRAPH_OFFSET UNITYSDK_OFFSET(0xD8A6D00)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEDATA_1_OFFSET UNITYSDK_OFFSET(0xD8A7650)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEDATA_OFFSET UNITYSDK_OFFSET(0xD8A75E0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEENABLE_1_OFFSET UNITYSDK_OFFSET(0xD8A7820)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEENABLE_OFFSET UNITYSDK_OFFSET(0xD8A77B0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SETPATHGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0xD8A9320)
#define NPCCROWD_NPCPATHGRAPHMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD8A2E40)
#define NPCCROWD_NPCPATHGRAPHMANAGER_TRYGETGRAPHSHADOWOVERRIDE_OFFSET UNITYSDK_OFFSET(0xD8A7370)
#define NPCCROWD_NPCPATHGRAPHMANAGER_TRYGETPOPULATIONID_OFFSET UNITYSDK_OFFSET(0xD8A7D30)
#define NPCCROWD_NPCPATHGRAPHMANAGER_TRYLOADSECTIONCARPLATEDATA_OFFSET UNITYSDK_OFFSET(0xD8A4030)
#define NPCCROWD_NPCPATHGRAPHMANAGER_TRYLOADSECTIONPATHDATA_OFFSET UNITYSDK_OFFSET(0xD8A4300)
#define NPCCROWD_NPCPATHGRAPHMANAGER_UNREGISTERABILITYIDXINNODE_OFFSET UNITYSDK_OFFSET(0xD8A81C0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_UPDATECROSSINGFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0xD8A9AA0)
#define NPCCROWD_NPCPATHGRAPHMANAGER_UPDATENODEPOPULATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD8A7FD0)
#define NPCCROWD_NPCPATHGRAPHMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD8AB430)
#define NPCCROWD_NPCPATHGRAPHMANAGER__COLLECTNODELOADMAXFACTORS_G__ADDGROUP_35_0_OFFSET UNITYSDK_OFFSET(0xD8A6380)
#define NPCCROWD_NPCPATHGRAPHMANAGER__COLLECTNODEPOPULATIONWEIGHTS_G__ADDGROUP_36_0_OFFSET UNITYSDK_OFFSET(0xD8A6430)
#define NPCCROWD_NPCPATHGRAPHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD8AB2E0)
#define NPCCROWD_NPCPATHGRAPHMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD8AB470)
#define NPCCROWD_NPCPATHGRAPHMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xD8AB500)
#define NPCCROWD_NPCPATHGRAPHMANAGER___BASE_PRELATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD8AB590)
#define NPCCROWD_NPCPATHGRAPHMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0xD8AB630)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPathGraphManager_TypeDefinitionIndex = 51825;

	class NPCPathGraphManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::String** StaticGet_SectionDataPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCPathGraphManager_TypeDefinitionIndex)->GetStaticField(0x51C40);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__sectionAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCPathGraphManager_TypeDefinitionIndex)->GetStaticField(0x51C48);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathSectionAssetSO_SectionPathData*>* _cachedSectionPathGraphs; // 0x18
		::NPCCrowd::AI::PathStateAssetSO* _stateSo; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PathGraphRuntime*>* _disabledGraphRuntimeDict; // 0x28
		::NPCCrowd::AI::PathGraphAssetSO* _graphSo; // 0x30
		::Foundation::AssetRequestHandle _stateHandle; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::PathGraphRuntime*>* _graphRuntimeDict; // 0x58
		::MonoNotRelateGameLogic::DynamicCarPlateAssetCfg* _carPlateCfg; // 0x60
		::Foundation::AssetRequestHandle _graphHandle; // 0x68
		::NPCCrowd::AI::PathSectionAssetSO* _sectionAssetSo; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*>*>* _node2EntityIDs; // 0x90
		::NPCCrowd::AI::PathGraphStateRuntime* _stateRuntime; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::NPCPathGraphManager_NodePopulationLimitData>* _nodePopulationData; // 0xA0
		::Foundation::AssetRequestHandle _carPlateHandle; // 0xA8
		::System::Boolean _usePopulationWeightLimit; // 0xC8
		::System::Int32 _stateID; // 0xCC
		::System::Int32 _carPlateSectionID; // 0xD0
		::System::Int32 _graphSectionID; // 0xD4

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

		::NPCCrowd::AI::PathSectionAssetSO_SectionPathData* FindSectionPathData(::System::Int32 sectionID)
		{
			return ((::NPCCrowd::AI::PathSectionAssetSO_SectionPathData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_FINDSECTIONPATHDATA_OFFSET))(this, sectionID);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ONDESTROY_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphAssetSO* get_GraphSo()
		{
			return ((::NPCCrowd::AI::PathGraphAssetSO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GET_GRAPHSO_OFFSET))(this);
		}

		::MonoNotRelateGameLogic::DynamicCarPlateAssetCfg* get_CarPlateCfg()
		{
			return ((::MonoNotRelateGameLogic::DynamicCarPlateAssetCfg*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GET_CARPLATECFG_OFFSET))(this);
		}

		::System::Void TryLoadSectionCarPlateData(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_TRYLOADSECTIONCARPLATEDATA_OFFSET))(this, sectionID);
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

		::System::Void RefreshPopulationWeightDistribution()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_REFRESHPOPULATIONWEIGHTDISTRIBUTION_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* CollectNodeLoadMaxFactors(::NPCCrowd::AI::SpawnPointConfig* spawnPoints)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID, ::NPCCrowd::AI::SpawnPointConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_COLLECTNODELOADMAXFACTORS_OFFSET))(this, spawnPoints);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* CollectNodePopulationWeights(::NPCCrowd::AI::SpawnPointConfig* spawnPoints)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*(*)(::PVOID, ::NPCCrowd::AI::SpawnPointConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_COLLECTNODEPOPULATIONWEIGHTS_OFFSET))(this, spawnPoints);
		}

		::System::Boolean PathPopulationCountValid(::System::Int32 node, ::System::Int32 populationId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_PATHPOPULATIONCOUNTVALID_OFFSET))(this, node, populationId);
		}

		::System::Boolean PathNodeLoadValid(::System::Int32 node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_PATHNODELOADVALID_OFFSET))(this, node);
		}

		::System::Boolean IsPopulationWeightLimitEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_ISPOPULATIONWEIGHTLIMITENABLED_OFFSET))(this);
		}

		::NPCCrowd::AI::SpawnPointConfig* GetSpawnPointConfig()
		{
			return ((::NPCCrowd::AI::SpawnPointConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETSPAWNPOINTCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::NPCPathGraphManager_NodePopulationLimitData>* GetNodePopulationData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::NPCPathGraphManager_NodePopulationLimitData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODEPOPULATIONDATA_OFFSET))(this);
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

		::System::Boolean TryGetGraphShadowOverride(::System::Int32 graphID, ::NPCCrowd::AI::PathGraphShadowOverrideConfig& shadowOverride)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::PathGraphShadowOverrideConfig&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_TRYGETGRAPHSHADOWOVERRIDE_OFFSET))(this, graphID, shadowOverride);
		}

		::NPCCrowd::AI::PathGraphNodeRuntime* GetNode(::System::Int32 nodeID)
		{
			return ((::NPCCrowd::AI::PathGraphNodeRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETNODE_OFFSET))(this, nodeID);
		}

		::System::Void SetNodeData(::System::Int32 nodeID, ::Class_3_D9B8A457D8A4B7BB_3* config)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_D9B8A457D8A4B7BB_3*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEDATA_OFFSET))(this, nodeID, config);
		}

		::System::Void SetNodeData_1(::NPCCrowd::AI::PathGraphNodeRuntime* node, ::Class_3_D9B8A457D8A4B7BB_3* config)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::PathGraphNodeRuntime*, ::Class_3_D9B8A457D8A4B7BB_3*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_SETNODEDATA_1_OFFSET))(this, node, config);
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

		::System::Void UpdateNodePopulationCount(::System::Int32 node, ::System::Int32 populationId, ::System::Int32 delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_UPDATENODEPOPULATIONCOUNT_OFFSET))(this, node, populationId, delta);
		}

		::System::Boolean TryGetPopulationId(::System::UInt32 entityID, ::System::Int32& populationId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_TRYGETPOPULATIONID_OFFSET))(this, entityID, populationId);
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

		::System::Void GetAllSplineNode(::System::Collections::Generic::List_1<::System::Int32>*& nodes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETALLSPLINENODE_OFFSET))(this, nodes);
		}

		::System::Void GetAllNodePoint(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& endPoints, ::System::Collections::Generic::List_1<::System::Int32>*& nodes, ::System::Boolean excludeStair, ::System::Boolean excludeSkyWay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_GETALLNODEPOINT_OFFSET))(this, endPoints, nodes, excludeStair, excludeSkyWay);
		}

		::System::Void InitCarPlate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_INITCARPLATE_OFFSET))(this);
		}

		::System::Void ClearCarPlate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER_CLEARCARPLATE_OFFSET))(this);
		}

		::System::Void _CollectNodeLoadMaxFactors_g__AddGroup_35_0(::NPCCrowd::AI::SpawnPointGroup* group, ::NPCCrowd::NPCPathGraphManager___c__DisplayClass35_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnPointGroup*, ::NPCCrowd::NPCPathGraphManager___c__DisplayClass35_0&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER__COLLECTNODELOADMAXFACTORS_G__ADDGROUP_35_0_OFFSET))(this, group, a2);
		}

		::System::Void _CollectNodePopulationWeights_g__AddGroup_36_0(::NPCCrowd::AI::SpawnPointGroup* group, ::NPCCrowd::NPCPathGraphManager___c__DisplayClass36_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnPointGroup*, ::NPCCrowd::NPCPathGraphManager___c__DisplayClass36_0&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPATHGRAPHMANAGER__COLLECTNODEPOPULATIONWEIGHTS_G__ADDGROUP_36_0_OFFSET))(this, group, a2);
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
