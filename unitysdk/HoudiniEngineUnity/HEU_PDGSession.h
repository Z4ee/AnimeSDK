#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PDG_EventInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PDG_State.h"
#include "unitysdk/HoudiniEngineUnity/HEU_TOPNodeData_PDGState.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_PDGAssetLink; }
namespace HoudiniEngineUnity { class HEU_PDGCookedEventData; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_SyncedEventData; }
namespace HoudiniEngineUnity { class HEU_TOPNetworkData; }
namespace HoudiniEngineUnity { class HEU_TOPNodeData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_HEU_PDGSESSION_ADDASSET_OFFSET UNITYSDK_OFFSET(0x1B935090)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_ADDEVENTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B9358F0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_CANCELCOOK_OFFSET UNITYSDK_OFFSET(0x1B9319B0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_CHECKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B935260)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1B9350B0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEARERRORSTATE_OFFSET UNITYSDK_OFFSET(0x1B935850)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEAREVENTMESSAGES_OFFSET UNITYSDK_OFFSET(0x1B935980)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEARWORKITEMRESULT_OFFSET UNITYSDK_OFFSET(0x1B9358E0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_COOKTOPNETWORKOUTPUTNODE_OFFSET UNITYSDK_OFFSET(0x1B931630)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_COOKTOPNODE_OFFSET UNITYSDK_OFFSET(0x1B931170)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_DIRTYALL_OFFSET UNITYSDK_OFFSET(0x1B931240)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_DIRTYTOPNODE_OFFSET UNITYSDK_OFFSET(0x1B930F80)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_GETEVENTMESSAGES_OFFSET UNITYSDK_OFFSET(0x1B935960)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_GETHAPIPDGSESSION_OFFSET UNITYSDK_OFFSET(0x1B935860)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_GETNONBYPASSEDNETWORKIDS_OFFSET UNITYSDK_OFFSET(0x1B932560)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_GETPDGSESSION_OFFSET UNITYSDK_OFFSET(0x1B930F00)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_GETTOPASSETLINKANDNODE_OFFSET UNITYSDK_OFFSET(0x1B935300)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_GET_COOKEDDATAEVENT_OFFSET UNITYSDK_OFFSET(0x1B9359B0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_ISPDGASSET_OFFSET UNITYSDK_OFFSET(0x1B8ED450)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODECOOKEDWORKITEM_OFFSET UNITYSDK_OFFSET(0x1B935530)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODECOOKINGWORKITEM_OFFSET UNITYSDK_OFFSET(0x1B935690)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODEERRORWORKITEM_OFFSET UNITYSDK_OFFSET(0x1B935580)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODEPDGSTATECLEAR_OFFSET UNITYSDK_OFFSET(0x1B935470)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODESCHEDULEDWORKITEM_OFFSET UNITYSDK_OFFSET(0x1B935630)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODETOTALWORKITEM_OFFSET UNITYSDK_OFFSET(0x1B9354D0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODEWAITINGWORKITEM_OFFSET UNITYSDK_OFFSET(0x1B9355D0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_ONWORKITEMLOADRESULTS_OFFSET UNITYSDK_OFFSET(0x1B9351D0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_PAUSECOOK_OFFSET UNITYSDK_OFFSET(0x1B9317F0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_PROCESSPDGEVENT_OFFSET UNITYSDK_OFFSET(0x1B9351C0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_REINITIALIZEPDGCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B9351B0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_REMOVEASSET_OFFSET UNITYSDK_OFFSET(0x1B931EF0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_RESETCALLBACKVARIABLES_OFFSET UNITYSDK_OFFSET(0x1B9352F0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_RESETPDGEVENTINFO_OFFSET UNITYSDK_OFFSET(0x1B9356F0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_SETERRORSTATE_OFFSET UNITYSDK_OFFSET(0x1B935710)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_SETTOPNODEPDGSTATE_OFFSET UNITYSDK_OFFSET(0x1B935410)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_SET_COOKEDDATAEVENT_OFFSET UNITYSDK_OFFSET(0x1B9359C0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_UPDATEPDGCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B9351A0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B9350A0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B934F60)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGSession_TypeDefinitionIndex = 40543;

	class HEU_PDGSession : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::HEU_PDGSession** StaticGet__pdgSession()
		{
			return (::HoudiniEngineUnity::HEU_PDGSession**)Il2CppClass::FromTypeDefinitionIndex(HEU_PDGSession_TypeDefinitionIndex)->GetStaticField(0x5F700);
		}
		::Il2CppArray<::HoudiniEngineUnity::HAPI_PDG_EventInfo>* _pdgQueryEvents; // 0x10
		::Il2CppArray<::System::String*>* _eventMessageColorCode; // 0x18
		::Il2CppArray<::System::Int32>* _pdgContextIDs; // 0x20
		::System::Action_1<::HoudiniEngineUnity::HEU_PDGCookedEventData*>* _cookedDataEvent; // 0x28
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink*>* _pdgAssets; // 0x30
		::System::String* _errorMsg; // 0x38
		::System::Text::StringBuilder* _pdgEventMessages; // 0x40
		::System::Boolean _callbackSuccess; // 0x48
		::System::Boolean _pendingCallback; // 0x49
		::System::Boolean _errored; // 0x4A
		::System::Int32 _pdgMaxProcessEvents; // 0x4C
		::System::Int32 _numItemsCompleted; // 0x50
		::System::Int32 _totalNumItems; // 0x54
		::HoudiniEngineUnity::HAPI_PDG_State _pdgState; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION__CTOR_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::HEU_PDGSession* GetPDGSession()
		{
			return ((::HoudiniEngineUnity::HEU_PDGSession*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_GETPDGSESSION_OFFSET))();
		}

		::System::Void AddAsset(::HoudiniEngineUnity::HEU_PDGAssetLink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_ADDASSET_OFFSET))(this, a1);
		}

		::System::Void RemoveAsset(::HoudiniEngineUnity::HEU_PDGAssetLink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_REMOVEASSET_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_UPDATE_OFFSET))(this);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEANUP_OFFSET))(this);
		}

		::System::Void UpdatePDGContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_UPDATEPDGCONTEXT_OFFSET))(this);
		}

		::System::Void ReinitializePDGContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_REINITIALIZEPDGCONTEXT_OFFSET))(this);
		}

		::System::Void ProcessPDGEvent(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HAPI_PDG_EventInfo& a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_PDG_EventInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_PROCESSPDGEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnWorkItemLoadResults(::HoudiniEngineUnity::HEU_TOPNodeData* a1, ::HoudiniEngineUnity::HEU_SyncedEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_SyncedEventData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_ONWORKITEMLOADRESULTS_OFFSET))(this, a1, a2);
		}

		::System::Void CheckCallback(::HoudiniEngineUnity::HEU_TOPNodeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_CHECKCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean GetTOPAssetLinkAndNode(::System::Int32 a1, ::HoudiniEngineUnity::HEU_PDGAssetLink*& a2, ::HoudiniEngineUnity::HEU_TOPNodeData*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::HEU_PDGAssetLink*&, ::HoudiniEngineUnity::HEU_TOPNodeData*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_GETTOPASSETLINKANDNODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTOPNodePDGState(::HoudiniEngineUnity::HEU_PDGAssetLink* a1, ::HoudiniEngineUnity::HEU_TOPNodeData* a2, ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_SETTOPNODEPDGSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NotifyTOPNodePDGStateClear(::HoudiniEngineUnity::HEU_PDGAssetLink* a1, ::HoudiniEngineUnity::HEU_TOPNodeData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODEPDGSTATECLEAR_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyTOPNodeTotalWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* a1, ::HoudiniEngineUnity::HEU_TOPNodeData* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODETOTALWORKITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NotifyTOPNodeCookedWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* a1, ::HoudiniEngineUnity::HEU_TOPNodeData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODECOOKEDWORKITEM_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyTOPNodeErrorWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* a1, ::HoudiniEngineUnity::HEU_TOPNodeData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODEERRORWORKITEM_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyTOPNodeWaitingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* a1, ::HoudiniEngineUnity::HEU_TOPNodeData* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODEWAITINGWORKITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NotifyTOPNodeScheduledWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* a1, ::HoudiniEngineUnity::HEU_TOPNodeData* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODESCHEDULEDWORKITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NotifyTOPNodeCookingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* a1, ::HoudiniEngineUnity::HEU_TOPNodeData* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODECOOKINGWORKITEM_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void ResetPDGEventInfo(::HoudiniEngineUnity::HAPI_PDG_EventInfo& a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HAPI_PDG_EventInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_RESETPDGEVENTINFO_OFFSET))(a1);
		}

		::System::Void SetErrorState(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_SETERRORSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearErrorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEARERRORSTATE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_SessionBase* GetHAPIPDGSession(::System::Boolean a1)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_GETHAPIPDGSESSION_OFFSET))(this, a1);
		}

		::System::Void CookTOPNetworkOutputNode(::HoudiniEngineUnity::HEU_TOPNetworkData* a1, ::System::Action_1<::HoudiniEngineUnity::HEU_PDGCookedEventData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNetworkData*, ::System::Action_1<::HoudiniEngineUnity::HEU_PDGCookedEventData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_COOKTOPNETWORKOUTPUTNODE_OFFSET))(this, a1, a2);
		}

		::System::Void PauseCook(::HoudiniEngineUnity::HEU_TOPNetworkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNetworkData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_PAUSECOOK_OFFSET))(this, a1);
		}

		::System::Void CancelCook(::HoudiniEngineUnity::HEU_TOPNetworkData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNetworkData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_CANCELCOOK_OFFSET))(this, a1);
		}

		::System::Void ClearWorkItemResult(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HAPI_PDG_EventInfo a3, ::HoudiniEngineUnity::HEU_TOPNodeData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_PDG_EventInfo, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEARWORKITEMRESULT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DirtyTOPNode(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_DIRTYTOPNODE_OFFSET))(this, a1);
		}

		::System::Boolean CookTOPNode(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_COOKTOPNODE_OFFSET))(this, a1);
		}

		::System::Boolean DirtyAll(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_DIRTYALL_OFFSET))(this, a1);
		}

		::System::Void AddEventMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_ADDEVENTMESSAGE_OFFSET))(this, a1);
		}

		::System::String* GetEventMessages()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_GETEVENTMESSAGES_OFFSET))(this);
		}

		::System::Void ClearEventMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEAREVENTMESSAGES_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Int32>* GetNonBypassedNetworkIds(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_GETNONBYPASSEDNETWORKIDS_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPDGAsset(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_ISPDGASSET_OFFSET))(a1, a2);
		}

		::System::Void ResetCallbackVariables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_RESETCALLBACKVARIABLES_OFFSET))(this);
		}

		::System::Action_1<::HoudiniEngineUnity::HEU_PDGCookedEventData*>* get_CookedDataEvent()
		{
			return ((::System::Action_1<::HoudiniEngineUnity::HEU_PDGCookedEventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_GET_COOKEDDATAEVENT_OFFSET))(this);
		}

		::System::Void set_CookedDataEvent(::System::Action_1<::HoudiniEngineUnity::HEU_PDGCookedEventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::HoudiniEngineUnity::HEU_PDGCookedEventData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_SET_COOKEDDATAEVENT_OFFSET))(this, a1);
		}
	};
}
