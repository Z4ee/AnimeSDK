#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PDG_WorkitemInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PDG_WorkitemResultInfo.h"
#include "unitysdk/HoudiniEngineUnity/HEU_PDGAssetLink_LinkState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_CookedEventData; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_PDGAssetLink_UpdateUIDelegate; }
namespace HoudiniEngineUnity { class HEU_ReloadEventData; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_TOPNetworkData; }
namespace HoudiniEngineUnity { class HEU_TOPNodeData; }
namespace HoudiniEngineUnity { class HEU_TOPWorkResult; }
namespace HoudiniEngineUnity { class HEU_WorkItemTally; }
namespace HoudiniEngineUnity { class TOPNodeTags; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_AWAKE_OFFSET UNITYSDK_OFFSET(0x8C99400)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CANCELCOOK_OFFSET UNITYSDK_OFFSET(0x8C9C130)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARALLTOPDATA_OFFSET UNITYSDK_OFFSET(0x8C99F30)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARTOPNETWORKWORKITEMRESULTS_OFFSET UNITYSDK_OFFSET(0x8C9B7C0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARTOPNODEWORKITEMRESULTS_OFFSET UNITYSDK_OFFSET(0x8C9B4D0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARWORKITEMRESULTBYID_OFFSET UNITYSDK_OFFSET(0x8C9BAB0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARWORKITEMRESULT_OFFSET UNITYSDK_OFFSET(0x8C9BC50)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_COOKOUTPUT_OFFSET UNITYSDK_OFFSET(0x8C99C10)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_COOKTOPNODE_OFFSET UNITYSDK_OFFSET(0x8C9BDA0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_DESTROYWORKITEMRESULTDATA_OFFSET UNITYSDK_OFFSET(0x8C9B8D0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_DIRTYALL_OFFSET UNITYSDK_OFFSET(0x8C9BE40)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_DIRTYTOPNODE_OFFSET UNITYSDK_OFFSET(0x8C9BD00)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETHAPISESSION_OFFSET UNITYSDK_OFFSET(0x8C9AAF0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETLOADROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8C9CDE0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETSELECTEDTOPNETWORK_OFFSET UNITYSDK_OFFSET(0x8C9B630)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETSELECTEDTOPNODE_OFFSET UNITYSDK_OFFSET(0x8C9B700)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNETWORKBYNAME_OFFSET UNITYSDK_OFFSET(0x8C9ADE0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNETWORK_OFFSET UNITYSDK_OFFSET(0x8C9B6A0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNODEBYNAME_OFFSET UNITYSDK_OFFSET(0x8C9B3C0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNODESTATUS_OFFSET UNITYSDK_OFFSET(0x8C9D3A0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNODE_OFFSET UNITYSDK_OFFSET(0x8C9CE70)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETWORKRESULTBYID_OFFSET UNITYSDK_OFFSET(0x8C9BB30)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETLINKSTATE_OFFSET UNITYSDK_OFFSET(0x8C9D460)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x8C9D440)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_SELECTEDTOPNETWORK_OFFSET UNITYSDK_OFFSET(0x8C9D450)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_HANDLEINITIALLOAD_OFFSET UNITYSDK_OFFSET(0x8C99410)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_LOADRESULTS_OFFSET UNITYSDK_OFFSET(0x8C9C280)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_NOTIFYASSETCOOKED_1_OFFSET UNITYSDK_OFFSET(0x8C99ED0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_NOTIFYASSETCOOKED_2_OFFSET UNITYSDK_OFFSET(0x8C99F00)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_NOTIFYASSETCOOKED_OFFSET UNITYSDK_OFFSET(0x8C99BE0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x8C99430)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x8C99420)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8C99440)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_PARSEHENGINEDATA_OFFSET UNITYSDK_OFFSET(0x8C9AB10)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_PAUSECOOK_OFFSET UNITYSDK_OFFSET(0x8C9BFE0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_POPULATEFROMHDA_OFFSET UNITYSDK_OFFSET(0x8C99D50)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_POPULATETOPNETWORKS_OFFSET UNITYSDK_OFFSET(0x8C9A440)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_POPULATETOPNODES_OFFSET UNITYSDK_OFFSET(0x8C9AEF0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_REFRESH_OFFSET UNITYSDK_OFFSET(0x8C99670)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_REPAINTUI_OFFSET UNITYSDK_OFFSET(0x8C9A430)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_RESETTOPNETWORKWORKITEMTALLY_OFFSET UNITYSDK_OFFSET(0x8C9BF20)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_RESET_OFFSET UNITYSDK_OFFSET(0x8C99660)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SELECTTOPNETWORK_OFFSET UNITYSDK_OFFSET(0x8C9B5C0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SELECTTOPNODE_OFFSET UNITYSDK_OFFSET(0x8C9B5F0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SETUP_OFFSET UNITYSDK_OFFSET(0x8C99550)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATETOPNODERESULTSVISIBILITY_OFFSET UNITYSDK_OFFSET(0x8C9BCC0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATEWORKITEMTALLY_OFFSET UNITYSDK_OFFSET(0x8C9D230)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x8C9D470)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGAssetLink_TypeDefinitionIndex = 43622;

	class HEU_PDGAssetLink : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _assetPath; // 0x18
		::UnityEngine::GameObject* _assetGO; // 0x20
		::System::String* _assetName; // 0x28
		::System::Int32 _assetID; // 0x30
		::HoudiniEngineUnity::HEU_HoudiniAsset* _heu; // 0x38
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>* _topNetworks; // 0x40
		::Il2CppArray<::System::String*>* _topNetworkNames; // 0x48
		::System::Int32 _selectedTOPNetwork; // 0x50
		::HoudiniEngineUnity::HEU_PDGAssetLink_LinkState _linkState; // 0x54
		::System::Boolean _autoCook; // 0x58
		::System::Boolean _useHEngineData; // 0x59
		::HoudiniEngineUnity::HEU_PDGAssetLink_UpdateUIDelegate* _repaintUIDelegate; // 0x60
		::System::Int32 _numWorkItems; // 0x68
		::HoudiniEngineUnity::HEU_WorkItemTally* _workItemTally; // 0x70
		::UnityEngine::GameObject* _loadRootGameObject; // 0x78
		::System::String* _outputCachePathRoot; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_AWAKE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void HandleInitialLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_HANDLEINITIALLOAD_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONDESTROY_OFFSET))(this);
		}

		::System::Void Setup(::HoudiniEngineUnity::HEU_HoudiniAsset* hdaAsset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SETUP_OFFSET))(this, hdaAsset);
		}

		::System::Void NotifyAssetCooked(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::Boolean bSuccess, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* generatedOutputs)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_NOTIFYASSETCOOKED_OFFSET))(this, asset, bSuccess, generatedOutputs);
		}

		::System::Void NotifyAssetCooked_1(::HoudiniEngineUnity::HEU_CookedEventData* cookedEventData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_CookedEventData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_NOTIFYASSETCOOKED_1_OFFSET))(this, cookedEventData);
		}

		::System::Void NotifyAssetCooked_2(::HoudiniEngineUnity::HEU_ReloadEventData* reloadEventData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ReloadEventData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_NOTIFYASSETCOOKED_2_OFFSET))(this, reloadEventData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_REFRESH_OFFSET))(this);
		}

		::System::Void PopulateFromHDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_POPULATEFROMHDA_OFFSET))(this);
		}

		::System::Boolean PopulateTOPNetworks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_POPULATETOPNETWORKS_OFFSET))(this);
		}

		static ::System::Boolean PopulateTOPNodes(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork, ::Il2CppArray<::System::Int32>* topNodeIDs, ::System::Boolean useHEngineData)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_TOPNetworkData*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_POPULATETOPNODES_OFFSET))(session, topNetwork, topNodeIDs, useHEngineData);
		}

		::System::Void SelectTOPNetwork(::System::Int32 newIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SELECTTOPNETWORK_OFFSET))(this, newIndex);
		}

		::System::Void SelectTOPNode(::HoudiniEngineUnity::HEU_TOPNetworkData* network, ::System::Int32 newIndex)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNetworkData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SELECTTOPNODE_OFFSET))(this, network, newIndex);
		}

		::HoudiniEngineUnity::HEU_TOPNetworkData* GetSelectedTOPNetwork()
		{
			return ((::HoudiniEngineUnity::HEU_TOPNetworkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETSELECTEDTOPNETWORK_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_TOPNodeData* GetSelectedTOPNode()
		{
			return ((::HoudiniEngineUnity::HEU_TOPNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETSELECTEDTOPNODE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_TOPNetworkData* GetTOPNetwork(::System::Int32 index)
		{
			return ((::HoudiniEngineUnity::HEU_TOPNetworkData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNETWORK_OFFSET))(this, index);
		}

		static ::HoudiniEngineUnity::HEU_TOPNetworkData* GetTOPNetworkByName(::System::String* name, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>* topNetworks)
		{
			return ((::HoudiniEngineUnity::HEU_TOPNetworkData*(*)(::System::String*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNETWORKBYNAME_OFFSET))(name, topNetworks);
		}

		static ::HoudiniEngineUnity::HEU_TOPNodeData* GetTOPNodeByName(::System::String* name, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>* topNodes)
		{
			return ((::HoudiniEngineUnity::HEU_TOPNodeData*(*)(::System::String*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNODEBYNAME_OFFSET))(name, topNodes);
		}

		::System::Void ClearAllTOPData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARALLTOPDATA_OFFSET))(this);
		}

		static ::System::Void ClearTOPNetworkWorkItemResults(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_TOPNetworkData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARTOPNETWORKWORKITEMRESULTS_OFFSET))(topNetwork);
		}

		static ::System::Void ClearTOPNodeWorkItemResults(::HoudiniEngineUnity::HEU_TOPNodeData* topNode)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARTOPNODEWORKITEMRESULTS_OFFSET))(topNode);
		}

		static ::System::Void ClearWorkItemResultByID(::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::System::Int32 workItemID)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_TOPNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARWORKITEMRESULTBYID_OFFSET))(topNode, workItemID);
		}

		static ::System::Void ClearWorkItemResult(::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::HoudiniEngineUnity::HEU_TOPWorkResult* result)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_TOPWorkResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARWORKITEMRESULT_OFFSET))(topNode, result);
		}

		::System::Void UpdateTOPNodeResultsVisibility(::HoudiniEngineUnity::HEU_TOPNodeData* topNode)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATETOPNODERESULTSVISIBILITY_OFFSET))(this, topNode);
		}

		static ::HoudiniEngineUnity::HEU_TOPWorkResult* GetWorkResultByID(::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::System::Int32 workItemID)
		{
			return ((::HoudiniEngineUnity::HEU_TOPWorkResult*(*)(::HoudiniEngineUnity::HEU_TOPNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETWORKRESULTBYID_OFFSET))(topNode, workItemID);
		}

		static ::System::Void DestroyWorkItemResultData(::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::HoudiniEngineUnity::HEU_TOPWorkResult* result)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_TOPWorkResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_DESTROYWORKITEMRESULTDATA_OFFSET))(topNode, result);
		}

		::System::Void DirtyTOPNode(::HoudiniEngineUnity::HEU_TOPNodeData* topNode)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_DIRTYTOPNODE_OFFSET))(this, topNode);
		}

		::System::Void CookTOPNode(::HoudiniEngineUnity::HEU_TOPNodeData* topNode)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_COOKTOPNODE_OFFSET))(this, topNode);
		}

		::System::Void DirtyAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_DIRTYALL_OFFSET))(this);
		}

		::System::Void CookOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_COOKOUTPUT_OFFSET))(this);
		}

		::System::Void PauseCook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_PAUSECOOK_OFFSET))(this);
		}

		::System::Void CancelCook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CANCELCOOK_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_SessionBase* GetHAPISession()
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETHAPISESSION_OFFSET))(this);
		}

		::System::Void LoadResults(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo workItemInfo, ::Il2CppArray<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo>* resultInfos, ::System::Int32 workItemID)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo, ::Il2CppArray<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo>*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_LOADRESULTS_OFFSET))(this, session, topNode, workItemInfo, resultInfos, workItemID);
		}

		::UnityEngine::Transform* GetLoadRootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETLOADROOTTRANSFORM_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_TOPNodeData* GetTOPNode(::System::Int32 nodeID)
		{
			return ((::HoudiniEngineUnity::HEU_TOPNodeData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNODE_OFFSET))(this, nodeID);
		}

		::System::Void RepaintUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_REPAINTUI_OFFSET))(this);
		}

		::System::Void UpdateWorkItemTally()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATEWORKITEMTALLY_OFFSET))(this);
		}

		::System::Void ResetTOPNetworkWorkItemTally(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNetworkData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_RESETTOPNETWORKWORKITEMTALLY_OFFSET))(this, topNetwork);
		}

		::System::String* GetTOPNodeStatus(::HoudiniEngineUnity::HEU_TOPNodeData* topNode)
		{
			return ((::System::String*(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNODESTATUS_OFFSET))(this, topNode);
		}

		static ::System::Void ParseHEngineData(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 topNodeID, ::HoudiniEngineUnity::HAPI_NodeInfo& nodeInfo, ::HoudiniEngineUnity::TOPNodeTags*& nodeTags)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_NodeInfo&, ::HoudiniEngineUnity::TOPNodeTags*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_PARSEHENGINEDATA_OFFSET))(session, topNodeID, nodeInfo, nodeTags);
		}

		::System::String* get_AssetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETNAME_OFFSET))(this);
		}

		::System::Int32 get_SelectedTOPNetwork()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_SELECTEDTOPNETWORK_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_PDGAssetLink_LinkState get_AssetLinkState()
		{
			return ((::HoudiniEngineUnity::HEU_PDGAssetLink_LinkState(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETLINKSTATE_OFFSET))(this);
		}
	};
}
