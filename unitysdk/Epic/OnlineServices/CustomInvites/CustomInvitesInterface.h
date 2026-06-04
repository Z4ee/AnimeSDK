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

#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ADDNOTIFYCUSTOMINVITEACCEPTED_OFFSET UNITYSDK_OFFSET(0xA2A9510)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ADDNOTIFYCUSTOMINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0xA2A97C0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_FINALIZEINVITE_OFFSET UNITYSDK_OFFSET(0xA2A9A70)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ONCUSTOMINVITEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2A9310)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ONCUSTOMINVITERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2A93B0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ONSENDCUSTOMINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2A9450)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_REMOVENOTIFYCUSTOMINVITEACCEPTED_OFFSET UNITYSDK_OFFSET(0xA2A9BD0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_REMOVENOTIFYCUSTOMINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0xA2A9CB0)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_SENDCUSTOMINVITE_OFFSET UNITYSDK_OFFSET(0xA2A9D90)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_SETCUSTOMINVITE_OFFSET UNITYSDK_OFFSET(0xA2A9F70)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA2A9500)
#define EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A94F0)

namespace Epic::OnlineServices::CustomInvites
{
	inline static constexpr unsigned int CustomInvitesInterface_TypeDefinitionIndex = 43039;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyCustomInviteAccepted(::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteAcceptedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteAcceptedOptions*, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ADDNOTIFYCUSTOMINVITEACCEPTED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyCustomInviteReceived(::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteReceivedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::AddNotifyCustomInviteReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ADDNOTIFYCUSTOMINVITERECEIVED_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result FinalizeInvite(::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::FinalizeInviteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_FINALIZEINVITE_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyCustomInviteAccepted(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_REMOVENOTIFYCUSTOMINVITEACCEPTED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyCustomInviteReceived(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_REMOVENOTIFYCUSTOMINVITERECEIVED_OFFSET))(this, a1);
		}

		::System::Void SendCustomInvite(::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::SendCustomInviteOptions*, ::System::Object*, ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_SENDCUSTOMINVITE_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result SetCustomInvite(::Epic::OnlineServices::CustomInvites::SetCustomInviteOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::CustomInvites::SetCustomInviteOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_SETCUSTOMINVITE_OFFSET))(this, a1);
		}

		static ::System::Void OnCustomInviteAcceptedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ONCUSTOMINVITEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnCustomInviteReceivedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ONCUSTOMINVITERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnSendCustomInviteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CUSTOMINVITES_CUSTOMINVITESINTERFACE_ONSENDCUSTOMINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
