#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::CustomInvites { class AddNotifyCustomInviteAcceptedOptions; }
namespace Epic::OnlineServices::CustomInvites { class AddNotifyCustomInviteReceivedOptions; }
namespace Epic::OnlineServices::CustomInvites { class FinalizeInviteOptions; }
namespace Epic::OnlineServices::CustomInvites { class OnCustomInviteAcceptedCallback; }
namespace Epic::OnlineServices::CustomInvites { class OnCustomInviteReceivedCallback; }
namespace Epic::OnlineServices::CustomInvites { class OnSendCustomInviteCallback; }
namespace Epic::OnlineServices::CustomInvites { class SendCustomInviteOptions; }
namespace Epic::OnlineServices::CustomInvites { class SetCustomInviteOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ADDNOTIFYCUSTOMINVITEACCEPTED_OFFSET UNITYSDK_OFFSET(0x8631160)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ADDNOTIFYCUSTOMINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0x8631400)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_FINALIZEINVITE_OFFSET UNITYSDK_OFFSET(0x86316A0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ONCUSTOMINVITEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8630F90)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ONCUSTOMINVITERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8631020)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ONSENDCUSTOMINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x86310B0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_REMOVENOTIFYCUSTOMINVITEACCEPTED_OFFSET UNITYSDK_OFFSET(0x8631800)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_REMOVENOTIFYCUSTOMINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0x86318E0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_SENDCUSTOMINVITE_OFFSET UNITYSDK_OFFSET(0x86319C0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_SETCUSTOMINVITE_OFFSET UNITYSDK_OFFSET(0x8631BA0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8631150)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x8631140)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int CustomInvitesInterface_TypeDefinitionIndex = 36410;

	class CustomInvitesInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AddnotifycustominviteacceptedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifycustominvitereceivedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 FinalizeinviteApiLatest = 0x1; // 0x0
		// static const ::System::Int32 MaxPayloadLength = 0x1F4; // 0x0
		// static const ::System::Int32 SendcustominviteApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetcustominviteApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::UInt64 AddNotifyCustomInviteAccepted(::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteAcceptedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteAcceptedOptions*, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ADDNOTIFYCUSTOMINVITEACCEPTED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyCustomInviteReceived(::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteReceivedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ADDNOTIFYCUSTOMINVITERECEIVED_OFFSET))(this, options, clientData, notificationFn);
		}

		::Epic::OnlineServices::Result FinalizeInvite(::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_FINALIZEINVITE_OFFSET))(this, options);
		}

		::System::Void RemoveNotifyCustomInviteAccepted(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_REMOVENOTIFYCUSTOMINVITEACCEPTED_OFFSET))(this, inId);
		}

		::System::Void RemoveNotifyCustomInviteReceived(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_REMOVENOTIFYCUSTOMINVITERECEIVED_OFFSET))(this, inId);
		}

		::System::Void SendCustomInvite(::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions*, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_SENDCUSTOMINVITE_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::Result SetCustomInvite(::Epic::OnlineServices::CustomInvites::SetCustomInviteOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::SetCustomInviteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_SETCUSTOMINVITE_OFFSET))(this, options);
		}

		static ::System::Void OnCustomInviteAcceptedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ONCUSTOMINVITEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnCustomInviteReceivedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ONCUSTOMINVITERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnSendCustomInviteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ONSENDCUSTOMINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
