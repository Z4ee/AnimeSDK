#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PDG_EventInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PDG_State.h"
#include "unitysdk/HoudiniEngineUnity/HEU_TOPNodeData_PDGState.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_PDGAssetLink; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_TOPNetworkData; }
namespace HoudiniEngineUnity { class HEU_TOPNodeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_HEU_PDGSESSION_ADDASSET_OFFSET UNITYSDK_OFFSET(0x8C9D6A0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_ADDEVENTMESSAGE_OFFSET UNITYSDK_OFFSET(0x8C9DCB0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_CANCELCOOK_OFFSET UNITYSDK_OFFSET(0x8C9C270)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEANUP_OFFSET UNITYSDK_OFFSET(0x8C9D6C0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEARERRORSTATE_OFFSET UNITYSDK_OFFSET(0x8C9DC10)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEAREVENTMESSAGES_OFFSET UNITYSDK_OFFSET(0x8C9DD40)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEARWORKITEMRESULT_OFFSET UNITYSDK_OFFSET(0x8C9DCA0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_COOKTOPNETWORKOUTPUTNODE_OFFSET UNITYSDK_OFFSET(0x8C9BFD0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_COOKTOPNODE_OFFSET UNITYSDK_OFFSET(0x8C9BE30)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_DIRTYALL_OFFSET UNITYSDK_OFFSET(0x8C9BF10)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_DIRTYTOPNODE_OFFSET UNITYSDK_OFFSET(0x8C9BD90)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_GETEVENTMESSAGES_OFFSET UNITYSDK_OFFSET(0x8C9DD20)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_GETHAPIPDGSESSION_OFFSET UNITYSDK_OFFSET(0x8C9DC20)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_GETPDGSESSION_OFFSET UNITYSDK_OFFSET(0x8C994C0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_GETTOPASSETLINKANDNODE_OFFSET UNITYSDK_OFFSET(0x8C9D7E0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODECOOKEDWORKITEM_OFFSET UNITYSDK_OFFSET(0x8C9D9D0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODECOOKINGWORKITEM_OFFSET UNITYSDK_OFFSET(0x8C9DB10)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODEERRORWORKITEM_OFFSET UNITYSDK_OFFSET(0x8C9DA20)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODEPDGSTATECLEAR_OFFSET UNITYSDK_OFFSET(0x8C9D920)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODESCHEDULEDWORKITEM_OFFSET UNITYSDK_OFFSET(0x8C9DAC0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODETOTALWORKITEM_OFFSET UNITYSDK_OFFSET(0x8C9D980)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODEWAITINGWORKITEM_OFFSET UNITYSDK_OFFSET(0x8C9DA70)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_PAUSECOOK_OFFSET UNITYSDK_OFFSET(0x8C9C120)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_PROCESSPDGEVENT_OFFSET UNITYSDK_OFFSET(0x8C9D7D0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_REINITIALIZEPDGCONTEXT_OFFSET UNITYSDK_OFFSET(0x8C9D7C0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_REMOVEASSET_OFFSET UNITYSDK_OFFSET(0x8C99540)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_RESETPDGEVENTINFO_OFFSET UNITYSDK_OFFSET(0x8C9DB60)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_SETERRORSTATE_OFFSET UNITYSDK_OFFSET(0x8C9DB80)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_SETTOPNODEPDGSTATE_OFFSET UNITYSDK_OFFSET(0x8C9D8E0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_UPDATEPDGCONTEXT_OFFSET UNITYSDK_OFFSET(0x8C9D7B0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x8C9D6B0)
#define HOUDINIENGINEUNITY_HEU_PDGSESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x8C9D550)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGSession_TypeDefinitionIndex = 43631;

	class HEU_PDGSession : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::HEU_PDGSession** StaticGet__pdgSession()
		{
			return (::HoudiniEngineUnity::HEU_PDGSession**)Il2CppClass::FromTypeDefinitionIndex(HEU_PDGSession_TypeDefinitionIndex)->GetStaticField(0x40D40);
		}
		::System::String* _errorMsg; // 0x10
		::Il2CppArray<::System::Int32>* _pdgContextIDs; // 0x18
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PDGAssetLink*>* _pdgAssets; // 0x20
		::System::Text::StringBuilder* _pdgEventMessages; // 0x28
		::Il2CppArray<::System::String*>* _eventMessageColorCode; // 0x30
		::Il2CppArray<::HoudiniEngineUnity::HAPI_PDG_EventInfo>* _pdgQueryEvents; // 0x38
		::System::Boolean _errored; // 0x40
		::HoudiniEngineUnity::HAPI_PDG_State _pdgState; // 0x44
		::System::Int32 _pdgMaxProcessEvents; // 0x48
		::System::Int32 _pdgContextSize; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION__CTOR_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::HEU_PDGSession* GetPDGSession()
		{
			return ((::HoudiniEngineUnity::HEU_PDGSession*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_GETPDGSESSION_OFFSET))();
		}

		::System::Void AddAsset(::HoudiniEngineUnity::HEU_PDGAssetLink* asset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_ADDASSET_OFFSET))(this, asset);
		}

		::System::Void RemoveAsset(::HoudiniEngineUnity::HEU_PDGAssetLink* asset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_REMOVEASSET_OFFSET))(this, asset);
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

		::System::Void ProcessPDGEvent(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 contextID, ::HoudiniEngineUnity::HAPI_PDG_EventInfo& eventInfo)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_PDG_EventInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_PROCESSPDGEVENT_OFFSET))(this, session, contextID, eventInfo);
		}

		::System::Boolean GetTOPAssetLinkAndNode(::System::Int32 nodeID, ::HoudiniEngineUnity::HEU_PDGAssetLink*& assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData*& topNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::HEU_PDGAssetLink*&, ::HoudiniEngineUnity::HEU_TOPNodeData*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_GETTOPASSETLINKANDNODE_OFFSET))(this, nodeID, assetLink, topNode);
		}

		::System::Void SetTOPNodePDGState(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState pdgState)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_TOPNodeData_PDGState))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_SETTOPNODEPDGSTATE_OFFSET))(this, assetLink, topNode, pdgState);
		}

		::System::Void NotifyTOPNodePDGStateClear(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODEPDGSTATECLEAR_OFFSET))(this, assetLink, topNode);
		}

		::System::Void NotifyTOPNodeTotalWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::System::Int32 inc)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODETOTALWORKITEM_OFFSET))(this, assetLink, topNode, inc);
		}

		::System::Void NotifyTOPNodeCookedWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODECOOKEDWORKITEM_OFFSET))(this, assetLink, topNode);
		}

		::System::Void NotifyTOPNodeErrorWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODEERRORWORKITEM_OFFSET))(this, assetLink, topNode);
		}

		::System::Void NotifyTOPNodeWaitingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::System::Int32 inc)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODEWAITINGWORKITEM_OFFSET))(this, assetLink, topNode, inc);
		}

		::System::Void NotifyTOPNodeScheduledWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::System::Int32 inc)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODESCHEDULEDWORKITEM_OFFSET))(this, assetLink, topNode, inc);
		}

		::System::Void NotifyTOPNodeCookingWorkItem(::HoudiniEngineUnity::HEU_PDGAssetLink* assetLink, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode, ::System::Int32 inc)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_PDGAssetLink*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_NOTIFYTOPNODECOOKINGWORKITEM_OFFSET))(this, assetLink, topNode, inc);
		}

		static ::System::Void ResetPDGEventInfo(::HoudiniEngineUnity::HAPI_PDG_EventInfo& eventInfo)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HAPI_PDG_EventInfo&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_RESETPDGEVENTINFO_OFFSET))(eventInfo);
		}

		::System::Void SetErrorState(::System::String* msg, ::System::Boolean bLogIt)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_SETERRORSTATE_OFFSET))(this, msg, bLogIt);
		}

		::System::Void ClearErrorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEARERRORSTATE_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_SessionBase* GetHAPIPDGSession(::System::Boolean bCreate)
		{
			return ((::HoudiniEngineUnity::HEU_SessionBase*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_GETHAPIPDGSESSION_OFFSET))(this, bCreate);
		}

		::System::Void CookTOPNetworkOutputNode(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNetworkData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_COOKTOPNETWORKOUTPUTNODE_OFFSET))(this, topNetwork);
		}

		::System::Void PauseCook(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNetworkData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_PAUSECOOK_OFFSET))(this, topNetwork);
		}

		::System::Void CancelCook(::HoudiniEngineUnity::HEU_TOPNetworkData* topNetwork)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_TOPNetworkData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_CANCELCOOK_OFFSET))(this, topNetwork);
		}

		::System::Void ClearWorkItemResult(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 contextID, ::HoudiniEngineUnity::HAPI_PDG_EventInfo eventInfo, ::HoudiniEngineUnity::HEU_TOPNodeData* topNode)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::HoudiniEngineUnity::HAPI_PDG_EventInfo, ::HoudiniEngineUnity::HEU_TOPNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEARWORKITEMRESULT_OFFSET))(this, session, contextID, eventInfo, topNode);
		}

		::System::Boolean DirtyTOPNode(::System::Int32 nodeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_DIRTYTOPNODE_OFFSET))(this, nodeID);
		}

		::System::Boolean CookTOPNode(::System::Int32 nodeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_COOKTOPNODE_OFFSET))(this, nodeID);
		}

		::System::Boolean DirtyAll(::System::Int32 nodeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_DIRTYALL_OFFSET))(this, nodeID);
		}

		::System::Void AddEventMessage(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_ADDEVENTMESSAGE_OFFSET))(this, msg);
		}

		::System::String* GetEventMessages()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_GETEVENTMESSAGES_OFFSET))(this);
		}

		::System::Void ClearEventMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGSESSION_CLEAREVENTMESSAGES_OFFSET))(this);
		}
	};
}
