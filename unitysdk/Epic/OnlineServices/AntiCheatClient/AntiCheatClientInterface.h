#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatClient/AntiCheatClientViolationType.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::AntiCheatClient { class AddExternalIntegrityCatalogOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class AddNotifyMessageToPeerOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class AddNotifyMessageToServerOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class AddNotifyPeerActionRequiredOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class AddNotifyPeerAuthStatusChangedOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class BeginSessionOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class EndSessionOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class GetProtectMessageOutputLengthOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class OnMessageToPeerCallback; }
namespace Epic::OnlineServices::AntiCheatClient { class OnMessageToServerCallback; }
namespace Epic::OnlineServices::AntiCheatClient { class OnPeerActionRequiredCallback; }
namespace Epic::OnlineServices::AntiCheatClient { class OnPeerAuthStatusChangedCallback; }
namespace Epic::OnlineServices::AntiCheatClient { class PollStatusOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class ProtectMessageOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class ReceiveMessageFromPeerOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class ReceiveMessageFromServerOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class RegisterPeerOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class UnprotectMessageOptions; }
namespace Epic::OnlineServices::AntiCheatClient { class UnregisterPeerOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDEXTERNALINTEGRITYCATALOG_OFFSET UNITYSDK_OFFSET(0x1BDB9EB0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYMESSAGETOPEER_OFFSET UNITYSDK_OFFSET(0x1BDBA0B0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYMESSAGETOSERVER_OFFSET UNITYSDK_OFFSET(0x1BDBA360)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYPEERACTIONREQUIRED_OFFSET UNITYSDK_OFFSET(0x1BDBA610)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYPEERAUTHSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1BDBA8C0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_BEGINSESSION_OFFSET UNITYSDK_OFFSET(0x1BDBAB70)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ENDSESSION_OFFSET UNITYSDK_OFFSET(0x1BDBAD80)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_GETPROTECTMESSAGEOUTPUTLENGTH_OFFSET UNITYSDK_OFFSET(0x1BDBAFC0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONMESSAGETOPEERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BDB9C10)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONMESSAGETOSERVERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BDB9CB0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONPEERACTIONREQUIREDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BDB9D50)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONPEERAUTHSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BDB9DF0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_POLLSTATUS_OFFSET UNITYSDK_OFFSET(0x1BDBB130)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_PROTECTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BDBB440)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_RECEIVEMESSAGEFROMPEER_OFFSET UNITYSDK_OFFSET(0x1BDBB7B0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_RECEIVEMESSAGEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x1BDBB9E0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REGISTERPEER_OFFSET UNITYSDK_OFFSET(0x1BDBBBE0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYMESSAGETOPEER_OFFSET UNITYSDK_OFFSET(0x1BDBBD40)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYMESSAGETOSERVER_OFFSET UNITYSDK_OFFSET(0x1BDBBE20)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYPEERACTIONREQUIRED_OFFSET UNITYSDK_OFFSET(0x1BDBBF00)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYPEERAUTHSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1BDBBFE0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_UNPROTECTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BDBC0C0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_UNREGISTERPEER_OFFSET UNITYSDK_OFFSET(0x1BDBC430)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BDB9EA0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDB9E90)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AntiCheatClientInterface_TypeDefinitionIndex = 44188;

	class AntiCheatClientInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AddexternalintegritycatalogApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifymessagetopeerApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifymessagetoserverApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifypeeractionrequiredApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifypeerauthstatuschangedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 BeginsessionApiLatest = 0x3; // 0x0
		// static const ::System::Int32 EndsessionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetprotectmessageoutputlengthApiLatest = 0x1; // 0x0
		// static const ::System::Int32 PollstatusApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ProtectmessageApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ReceivemessagefrompeerApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ReceivemessagefromserverApiLatest = 0x1; // 0x0
		// static const ::System::Int32 RegisterpeerApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UnprotectmessageApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UnregisterpeerApiLatest = 0x1; // 0x0
		::System::IntPtr PeerSelf; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result AddExternalIntegrityCatalog(::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDEXTERNALINTEGRITYCATALOG_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyMessageToPeer(::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToPeerOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToPeerOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYMESSAGETOPEER_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyMessageToServer(::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToServerOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToServerOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYMESSAGETOSERVER_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyPeerActionRequired(::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYPEERACTIONREQUIRED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyPeerAuthStatusChanged(::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYPEERAUTHSTATUSCHANGED_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result BeginSession(::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_BEGINSESSION_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result EndSession(::Epic::OnlineServices::AntiCheatClient::EndSessionOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::EndSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ENDSESSION_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result GetProtectMessageOutputLength(::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions* a1, ::System::UInt32& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions*, ::System::UInt32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_GETPROTECTMESSAGEOUTPUTLENGTH_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result PollStatus(::Epic::OnlineServices::AntiCheatClient::PollStatusOptions* a1, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType& a2, ::System::String*& a3)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::PollStatusOptions*, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType&, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_POLLSTATUS_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result ProtectMessage(::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions* a1, ::Il2CppArray<::System::Byte>*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_PROTECTMESSAGE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result ReceiveMessageFromPeer(::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_RECEIVEMESSAGEFROMPEER_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result ReceiveMessageFromServer(::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_RECEIVEMESSAGEFROMSERVER_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result RegisterPeer(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REGISTERPEER_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyMessageToPeer(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYMESSAGETOPEER_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyMessageToServer(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYMESSAGETOSERVER_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyPeerActionRequired(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYPEERACTIONREQUIRED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyPeerAuthStatusChanged(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYPEERAUTHSTATUSCHANGED_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result UnprotectMessage(::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions* a1, ::Il2CppArray<::System::Byte>*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_UNPROTECTMESSAGE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result UnregisterPeer(::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_UNREGISTERPEER_OFFSET))(this, a1);
		}

		static ::System::Void OnMessageToPeerCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONMESSAGETOPEERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnMessageToServerCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONMESSAGETOSERVERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnPeerActionRequiredCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONPEERACTIONREQUIREDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnPeerAuthStatusChangedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONPEERAUTHSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
