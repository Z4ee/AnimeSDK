#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PDG_WorkItemInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PDG_WorkItemOutputFile.h"
#include "unitysdk/HoudiniEngineUnity/HEU_LinkStateWrapper.h"
#include "unitysdk/HoudiniEngineUnity/HEU_PDGAssetLink_LinkState.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_CookedEventData; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_PDGAssetLink_UpdateUIDelegate; }
namespace HoudiniEngineUnity { class HEU_PDGCookedDataEvent; }
namespace HoudiniEngineUnity { class HEU_PDGCookedEventData; }
namespace HoudiniEngineUnity { class HEU_ReloadEventData; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_SyncedEventData; }
namespace HoudiniEngineUnity { class HEU_TOPNetworkData; }
namespace HoudiniEngineUnity { class HEU_TOPNodeData; }
namespace HoudiniEngineUnity { class HEU_TOPWorkResult; }
namespace HoudiniEngineUnity { class HEU_WorkItemTally; }
namespace HoudiniEngineUnity { class TOPNodeTags; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_AWAKE_OFFSET UNITYSDK_OFFSET(0x17F2A110)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CANCELCOOK_OFFSET UNITYSDK_OFFSET(0x17F29B60)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARALLTOPDATA_OFFSET UNITYSDK_OFFSET(0x17F28A00)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARTOPNETWORKWORKITEMRESULTS_OFFSET UNITYSDK_OFFSET(0x17F296A0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARTOPNODEWORKITEMRESULTS_OFFSET UNITYSDK_OFFSET(0x17F293E0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARWORKITEMRESULTBYID_OFFSET UNITYSDK_OFFSET(0x17F2B7B0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARWORKITEMRESULT_OFFSET UNITYSDK_OFFSET(0x17F2B920)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_COOKOUTPUT_OFFSET UNITYSDK_OFFSET(0x17F29790)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_COOKTOPNODE_OFFSET UNITYSDK_OFFSET(0x17F29530)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_DESTROYWORKITEMRESULTDATA_OFFSET UNITYSDK_OFFSET(0x17F2B560)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_DIRTYALL_OFFSET UNITYSDK_OFFSET(0x17F295D0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_DIRTYTOPNODE_OFFSET UNITYSDK_OFFSET(0x17F292C0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETHAPISESSION_OFFSET UNITYSDK_OFFSET(0x17F29940)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETLOADROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x17F2C730)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETNONHIDDENTOPNODES_OFFSET UNITYSDK_OFFSET(0x17F28F20)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETSELECTEDTOPNETWORK_OFFSET UNITYSDK_OFFSET(0x17F29180)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETSELECTEDTOPNODE_OFFSET UNITYSDK_OFFSET(0x17F29230)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNETWORKBYNAME_OFFSET UNITYSDK_OFFSET(0x17F29E90)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNETWORK_OFFSET UNITYSDK_OFFSET(0x17F291E0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNODEBYNAME_OFFSET UNITYSDK_OFFSET(0x17F29FD0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNODESTATUS_OFFSET UNITYSDK_OFFSET(0x17F29DF0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNODE_OFFSET UNITYSDK_OFFSET(0x17F29CA0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETWORKRESULTBYID_OFFSET UNITYSDK_OFFSET(0x17F2B830)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETGO_OFFSET UNITYSDK_OFFSET(0x17F28620)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETID_OFFSET UNITYSDK_OFFSET(0x17F28640)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETLINKSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17F286D0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x17F28630)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x17F28610)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_AUTOCOOK_OFFSET UNITYSDK_OFFSET(0x17F28540)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_COOKEDDATAEVENT_OFFSET UNITYSDK_OFFSET(0x17F286C0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_LOADROOTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17F286A0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_OUTPUTCACHEPATHROOT_OFFSET UNITYSDK_OFFSET(0x17F286B0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_PARENTASSET_OFFSET UNITYSDK_OFFSET(0x17F28600)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_PDGLINKSTATE_OFFSET UNITYSDK_OFFSET(0x17F28680)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_SELECTEDTOPNETWORK_OFFSET UNITYSDK_OFFSET(0x17F28670)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_TOPNETWORKNAMES_OFFSET UNITYSDK_OFFSET(0x17F28660)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_TOPNETWORKS_OFFSET UNITYSDK_OFFSET(0x17F28650)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_TOPNODEFILTER_OFFSET UNITYSDK_OFFSET(0x17F285C0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_TOPOUTPUTFILTER_OFFSET UNITYSDK_OFFSET(0x17F285E0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_USEHENGINEDATA_OFFSET UNITYSDK_OFFSET(0x17F28560)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_USETOPNODEFILTER_OFFSET UNITYSDK_OFFSET(0x17F28580)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_USETOPOUTPUTFILTER_OFFSET UNITYSDK_OFFSET(0x17F285A0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_HANDLEINITIALLOAD_OFFSET UNITYSDK_OFFSET(0x17F2A120)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_LINKSTATE_INTERNALTOWRAPPER_OFFSET UNITYSDK_OFFSET(0x17F28690)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_LINKSTATE_WRAPPERTOINTERNAL_OFFSET UNITYSDK_OFFSET(0x17F2D090)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_LOADRESULTS_OFFSET UNITYSDK_OFFSET(0x17F2B9D0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_NOTIFYASSETCOOKED_1_OFFSET UNITYSDK_OFFSET(0x17F2A210)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_NOTIFYASSETCOOKED_2_OFFSET UNITYSDK_OFFSET(0x17F2A240)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_NOTIFYASSETCOOKED_OFFSET UNITYSDK_OFFSET(0x17F2A1E0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17F2A140)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17F2A130)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17F2A150)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONSYNCCOMPLETE_OFFSET UNITYSDK_OFFSET(0x17F2D030)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONTOPNODEFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0x17F2C9C0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONTOPOUTPUTFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0x17F2CD10)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_PARSEHENGINEDATA_OFFSET UNITYSDK_OFFSET(0x17F2AC20)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_PAUSECOOK_OFFSET UNITYSDK_OFFSET(0x17F29A20)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_POPULATEFROMHDA_OFFSET UNITYSDK_OFFSET(0x17F28CA0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_POPULATETOPNETWORKS_OFFSET UNITYSDK_OFFSET(0x17F2A270)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_POPULATETOPNODES_OFFSET UNITYSDK_OFFSET(0x17F2AED0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_REFRESH_OFFSET UNITYSDK_OFFSET(0x17F286F0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_REPAINTUI_OFFSET UNITYSDK_OFFSET(0x17F28C80)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_RESETTOPNETWORKWORKITEMTALLY_OFFSET UNITYSDK_OFFSET(0x17F29960)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_RESET_OFFSET UNITYSDK_OFFSET(0x17F286E0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SELECTTOPNETWORK_OFFSET UNITYSDK_OFFSET(0x17F29110)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SELECTTOPNODE_OFFSET UNITYSDK_OFFSET(0x17F29140)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SETUPTOPNETWORKNAMES_OFFSET UNITYSDK_OFFSET(0x17F2B490)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SETUP_OFFSET UNITYSDK_OFFSET(0x17EE94B0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SET_AUTOCOOK_OFFSET UNITYSDK_OFFSET(0x17F28550)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SET_TOPNODEFILTER_OFFSET UNITYSDK_OFFSET(0x17F285D0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SET_TOPOUTPUTFILTER_OFFSET UNITYSDK_OFFSET(0x17F285F0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SET_USEHENGINEDATA_OFFSET UNITYSDK_OFFSET(0x17F28570)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SET_USETOPNODEFILTER_OFFSET UNITYSDK_OFFSET(0x17F28590)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SET_USETOPOUTPUTFILTER_OFFSET UNITYSDK_OFFSET(0x17F285B0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATETOPNODERESULTSVISIBILITY_OFFSET UNITYSDK_OFFSET(0x17F2B990)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATEWORKITEMTALLY_OFFSET UNITYSDK_OFFSET(0x17F2C840)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2D0A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGAssetLink_TypeDefinitionIndex = 37568;

	class HEU_PDGAssetLink : public ::UnityEngine::MonoBehaviour
	{
	public:
		::HoudiniEngineUnity::HEU_PDGCookedDataEvent* _cookedDataEvent; // 0x18
		::System::String* _assetPath; // 0x20
		::UnityEngine::GameObject* _assetGO; // 0x28
		::System::String* _assetName; // 0x30
		::System::Int32 _assetID; // 0x38
		::HoudiniEngineUnity::HEU_HoudiniAsset* _heu; // 0x40
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>* _topNetworks; // 0x48
		::Il2CppArray<::System::String*>* _topNetworkNames; // 0x50
		::System::Int32 _selectedTOPNetwork; // 0x58
		::HoudiniEngineUnity::HEU_PDGAssetLink_LinkState _linkState; // 0x5C
		::System::Boolean _autoCook; // 0x60
		::System::Boolean _useHEngineData; // 0x61
		::HoudiniEngineUnity::HEU_PDGAssetLink_UpdateUIDelegate* _repaintUIDelegate; // 0x68
		::HoudiniEngineUnity::HEU_WorkItemTally* _workItemTally; // 0x70
		::UnityEngine::GameObject* _loadRootGameObject; // 0x78
		::System::String* _outputCachePathRoot; // 0x80
		::System::Boolean _bUseTOPNodeFilter; // 0x88
		::System::Boolean _bUseTOPOutputFilter; // 0x89
		::System::String* _topNodeFilter; // 0x90
		::System::String* _topOutputFilter; // 0x98
		::System::Int32 _numLoadingResults; // 0xA0
		::System::Int32 _numTotalResults; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AutoCook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_AUTOCOOK_OFFSET))(this);
		}

		::System::Void set_AutoCook(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SET_AUTOCOOK_OFFSET))(this, a1);
		}

		::System::Boolean get_UseHEngineData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_USEHENGINEDATA_OFFSET))(this);
		}

		::System::Void set_UseHEngineData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SET_USEHENGINEDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_UseTOPNodeFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_USETOPNODEFILTER_OFFSET))(this);
		}

		::System::Void set_UseTOPNodeFilter(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SET_USETOPNODEFILTER_OFFSET))(this, a1);
		}

		::System::Boolean get_UseTOPOutputFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_USETOPOUTPUTFILTER_OFFSET))(this);
		}

		::System::Void set_UseTOPOutputFilter(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SET_USETOPOUTPUTFILTER_OFFSET))(this, a1);
		}

		::System::String* get_TopNodeFilter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_TOPNODEFILTER_OFFSET))(this);
		}

		::System::Void set_TopNodeFilter(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SET_TOPNODEFILTER_OFFSET))(this, a1);
		}

		::System::String* get_TopOutputFilter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_TOPOUTPUTFILTER_OFFSET))(this);
		}

		::System::Void set_TopOutputFilter(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SET_TOPOUTPUTFILTER_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_PARENTASSET_OFFSET))(this);
		}

		::System::String* get_AssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETPATH_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_AssetGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETGO_OFFSET))(this);
		}

		::System::String* get_AssetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETNAME_OFFSET))(this);
		}

		::System::Int32 get_AssetID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>* get_TopNetworks()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_TOPNETWORKS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_TopNetworkNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_TOPNETWORKNAMES_OFFSET))(this);
		}

		::System::Int32 get_SelectedTOPNetwork()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_SELECTEDTOPNETWORK_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_LinkStateWrapper get_PDGLinkState()
		{
			return ((::HoudiniEngineUnity::HEU_LinkStateWrapper(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_PDGLINKSTATE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_LoadRootGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_LOADROOTGAMEOBJECT_OFFSET))(this);
		}

		::System::String* get_OutputCachePathRoot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_OUTPUTCACHEPATHROOT_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_PDGCookedDataEvent* get_CookedDataEvent()
		{
			return ((::HoudiniEngineUnity::HEU_PDGCookedDataEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_COOKEDDATAEVENT_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_PDGAssetLink_LinkState get_AssetLinkStateInternal()
		{
			return ((::HoudiniEngineUnity::HEU_PDGAssetLink_LinkState(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GET_ASSETLINKSTATEINTERNAL_OFFSET))(this);
		}

		::System::Void Setup(::HoudiniEngineUnity::HEU_HoudiniAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SETUP_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_REFRESH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::HoudiniEngineUnity::HEU_TOPNodeData*>>* GetNonHiddenTOPNodes(::HoudiniEngineUnity::HEU_TOPNetworkData* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::HoudiniEngineUnity::HEU_TOPNodeData*>>*(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNetworkData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETNONHIDDENTOPNODES_OFFSET))(this, a1);
		}

		::System::Void SelectTOPNetwork(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SELECTTOPNETWORK_OFFSET))(this, a1);
		}

		::System::Void SelectTOPNode(::HoudiniEngineUnity::HEU_TOPNetworkData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNetworkData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SELECTTOPNODE_OFFSET))(this, a1, a2);
		}

		::HoudiniEngineUnity::HEU_TOPNetworkData* GetSelectedTOPNetwork()
		{
			return ((::HoudiniEngineUnity::HEU_TOPNetworkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETSELECTEDTOPNETWORK_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_TOPNodeData* GetSelectedTOPNode()
		{
			return ((::HoudiniEngineUnity::HEU_TOPNodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETSELECTEDTOPNODE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_TOPNetworkData* GetTOPNetwork(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::HEU_TOPNetworkData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNETWORK_OFFSET))(this, a1);
		}

		::System::Void DirtyTOPNode(::HoudiniEngineUnity::HEU_TOPNodeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_DIRTYTOPNODE_OFFSET))(this, a1);
		}

		::System::Void CookTOPNode(::HoudiniEngineUnity::HEU_TOPNodeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_COOKTOPNODE_OFFSET))(this, a1);
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

		::HoudiniEngineUnity::HEU_TOPNodeData* GetTOPNode(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::HEU_TOPNodeData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNODE_OFFSET))(this, a1);
		}

		::System::String* GetTOPNodeStatus(::HoudiniEngineUnity::HEU_TOPNodeData* a1)
		{
			return ((::System::String*(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNODESTATUS_OFFSET))(this, a1);
		}

		static ::HoudiniEngineUnity::HEU_TOPNetworkData* GetTOPNetworkByName(::System::String* a1, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>* a2)
		{
			return ((::HoudiniEngineUnity::HEU_TOPNetworkData*(*)(::System::String*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNETWORKBYNAME_OFFSET))(a1, a2);
		}

		static ::HoudiniEngineUnity::HEU_TOPNodeData* GetTOPNodeByName(::System::String* a1, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>* a2)
		{
			return ((::HoudiniEngineUnity::HEU_TOPNodeData*(*)(::System::String*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETTOPNODEBYNAME_OFFSET))(a1, a2);
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

		::System::Void NotifyAssetCooked(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Boolean, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_NOTIFYASSETCOOKED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NotifyAssetCooked_1(::HoudiniEngineUnity::HEU_CookedEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_CookedEventData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_NOTIFYASSETCOOKED_1_OFFSET))(this, a1);
		}

		::System::Void NotifyAssetCooked_2(::HoudiniEngineUnity::HEU_ReloadEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ReloadEventData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_NOTIFYASSETCOOKED_2_OFFSET))(this, a1);
		}

		::System::Void PopulateFromHDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_POPULATEFROMHDA_OFFSET))(this);
		}

		::System::Boolean PopulateTOPNetworks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_POPULATETOPNETWORKS_OFFSET))(this);
		}

		::System::Boolean PopulateTOPNodes(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_TOPNetworkData* a2, ::Il2CppArray<::System::Int32>* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_TOPNetworkData*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_POPULATETOPNODES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ClearAllTOPData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARALLTOPDATA_OFFSET))(this);
		}

		static ::System::Void ClearTOPNetworkWorkItemResults(::HoudiniEngineUnity::HEU_TOPNetworkData* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_TOPNetworkData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARTOPNETWORKWORKITEMRESULTS_OFFSET))(a1);
		}

		static ::System::Void ClearTOPNodeWorkItemResults(::HoudiniEngineUnity::HEU_TOPNodeData* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARTOPNODEWORKITEMRESULTS_OFFSET))(a1);
		}

		static ::System::Void ClearWorkItemResultByID(::HoudiniEngineUnity::HEU_TOPNodeData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_TOPNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARWORKITEMRESULTBYID_OFFSET))(a1, a2);
		}

		static ::System::Void ClearWorkItemResult(::HoudiniEngineUnity::HEU_TOPNodeData* a1, ::HoudiniEngineUnity::HEU_TOPWorkResult* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_TOPWorkResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_CLEARWORKITEMRESULT_OFFSET))(a1, a2);
		}

		::System::Void UpdateTOPNodeResultsVisibility(::HoudiniEngineUnity::HEU_TOPNodeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATETOPNODERESULTSVISIBILITY_OFFSET))(this, a1);
		}

		static ::HoudiniEngineUnity::HEU_TOPWorkResult* GetWorkResultByID(::HoudiniEngineUnity::HEU_TOPNodeData* a1, ::System::Int32 a2)
		{
			return ((::HoudiniEngineUnity::HEU_TOPWorkResult*(*)(::HoudiniEngineUnity::HEU_TOPNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETWORKRESULTBYID_OFFSET))(a1, a2);
		}

		static ::System::Void DestroyWorkItemResultData(::HoudiniEngineUnity::HEU_TOPNodeData* a1, ::HoudiniEngineUnity::HEU_TOPWorkResult* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_TOPWorkResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_DESTROYWORKITEMRESULTDATA_OFFSET))(a1, a2);
		}

		::System::Void LoadResults(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_TOPNodeData* a2, ::HoudiniEngineUnity::HAPI_PDG_WorkItemInfo a3, ::Il2CppArray<::HoudiniEngineUnity::HAPI_PDG_WorkItemOutputFile>* a4, ::System::Int32 a5, ::System::Action_2<::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_SyncedEventData*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HAPI_PDG_WorkItemInfo, ::Il2CppArray<::HoudiniEngineUnity::HAPI_PDG_WorkItemOutputFile>*, ::System::Int32, ::System::Action_2<::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_SyncedEventData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_LOADRESULTS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Transform* GetLoadRootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_GETLOADROOTTRANSFORM_OFFSET))(this);
		}

		::System::Void RepaintUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_REPAINTUI_OFFSET))(this);
		}

		::System::Void UpdateWorkItemTally()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATEWORKITEMTALLY_OFFSET))(this);
		}

		::System::Void ResetTOPNetworkWorkItemTally(::HoudiniEngineUnity::HEU_TOPNetworkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNetworkData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_RESETTOPNETWORKWORKITEMTALLY_OFFSET))(this, a1);
		}

		::System::Void OnTOPNodeFilterChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONTOPNODEFILTERCHANGED_OFFSET))(this, a1);
		}

		::System::Void OnTOPOutputFilterChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONTOPOUTPUTFILTERCHANGED_OFFSET))(this, a1);
		}

		static ::System::Void ParseHEngineData(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HAPI_NodeInfo& a3, ::HoudiniEngineUnity::TOPNodeTags*& a4)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_NodeInfo&, ::HoudiniEngineUnity::TOPNodeTags*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_PARSEHENGINEDATA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void SetupTopNetworkNames(::HoudiniEngineUnity::HEU_TOPNetworkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNetworkData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_SETUPTOPNETWORKNAMES_OFFSET))(this, a1);
		}

		::System::Void OnSyncComplete(::HoudiniEngineUnity::HEU_PDGCookedEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGCookedEventData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_ONSYNCCOMPLETE_OFFSET))(this, a1);
		}

		static ::HoudiniEngineUnity::HEU_LinkStateWrapper LinkState_InternalToWrapper(::HoudiniEngineUnity::HEU_PDGAssetLink_LinkState a1)
		{
			return ((::HoudiniEngineUnity::HEU_LinkStateWrapper(*)(::HoudiniEngineUnity::HEU_PDGAssetLink_LinkState))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_LINKSTATE_INTERNALTOWRAPPER_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::HEU_PDGAssetLink_LinkState LinkState_WrapperToInternal(::HoudiniEngineUnity::HEU_LinkStateWrapper a1)
		{
			return ((::HoudiniEngineUnity::HEU_PDGAssetLink_LinkState(*)(::HoudiniEngineUnity::HEU_LinkStateWrapper))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_LINKSTATE_WRAPPERTOINTERNAL_OFFSET))(a1);
		}
	};
}
