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

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDEXTERNALINTEGRITYCATALOG_OFFSET UNITYSDK_OFFSET(0x19F92530)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYMESSAGETOPEER_OFFSET UNITYSDK_OFFSET(0x19F92730)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYMESSAGETOSERVER_OFFSET UNITYSDK_OFFSET(0x19F92C70)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYPEERACTIONREQUIRED_OFFSET UNITYSDK_OFFSET(0x19F92EF0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYPEERAUTHSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x19F93170)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_BEGINSESSION_OFFSET UNITYSDK_OFFSET(0x19F933F0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ENDSESSION_OFFSET UNITYSDK_OFFSET(0x19F93600)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_GETPROTECTMESSAGEOUTPUTLENGTH_OFFSET UNITYSDK_OFFSET(0x19F93820)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONMESSAGETOPEERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x19F922D0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONMESSAGETOSERVERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x19F92360)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONPEERACTIONREQUIREDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x19F923F0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONPEERAUTHSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x19F92480)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_POLLSTATUS_OFFSET UNITYSDK_OFFSET(0x19F93990)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_PROTECTMESSAGE_OFFSET UNITYSDK_OFFSET(0x19F93D60)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_RECEIVEMESSAGEFROMPEER_OFFSET UNITYSDK_OFFSET(0x19F940D0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_RECEIVEMESSAGEFROMSERVER_OFFSET UNITYSDK_OFFSET(0x19F94300)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REGISTERPEER_OFFSET UNITYSDK_OFFSET(0x19F94460)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYMESSAGETOPEER_OFFSET UNITYSDK_OFFSET(0x19F945C0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYMESSAGETOSERVER_OFFSET UNITYSDK_OFFSET(0x19F94800)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYPEERACTIONREQUIRED_OFFSET UNITYSDK_OFFSET(0x19F948E0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYPEERAUTHSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x19F949C0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_UNPROTECTMESSAGE_OFFSET UNITYSDK_OFFSET(0x19F94AA0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_UNREGISTERPEER_OFFSET UNITYSDK_OFFSET(0x19F94E10)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F92520)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F92510)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AntiCheatClientInterface_TypeDefinitionIndex = 34743;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result AddExternalIntegrityCatalog(::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDEXTERNALINTEGRITYCATALOG_OFFSET))(this, options);
		}

		::System::UInt64 AddNotifyMessageToPeer(::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToPeerOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToPeerOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYMESSAGETOPEER_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyMessageToServer(::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToServerOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToServerOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYMESSAGETOSERVER_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyPeerActionRequired(::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYPEERACTIONREQUIRED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyPeerAuthStatusChanged(::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ADDNOTIFYPEERAUTHSTATUSCHANGED_OFFSET))(this, options, clientData, notificationFn);
		}

		::Epic::OnlineServices::Result BeginSession(::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_BEGINSESSION_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result EndSession(::Epic::OnlineServices::AntiCheatClient::EndSessionOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::EndSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ENDSESSION_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result GetProtectMessageOutputLength(::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions* options, ::System::UInt32& outBufferSizeBytes)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions*, ::System::UInt32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_GETPROTECTMESSAGEOUTPUTLENGTH_OFFSET))(this, options, outBufferSizeBytes);
		}

		::Epic::OnlineServices::Result PollStatus(::Epic::OnlineServices::AntiCheatClient::PollStatusOptions* options, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType& outViolationType, ::System::String*& outMessage)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::PollStatusOptions*, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType&, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_POLLSTATUS_OFFSET))(this, options, outViolationType, outMessage);
		}

		::Epic::OnlineServices::Result ProtectMessage(::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions* options, ::Il2CppArray<::System::Byte>*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_PROTECTMESSAGE_OFFSET))(this, options, outBuffer);
		}

		::Epic::OnlineServices::Result ReceiveMessageFromPeer(::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_RECEIVEMESSAGEFROMPEER_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result ReceiveMessageFromServer(::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_RECEIVEMESSAGEFROMSERVER_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result RegisterPeer(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REGISTERPEER_OFFSET))(this, options);
		}

		::System::Void RemoveNotifyMessageToPeer(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYMESSAGETOPEER_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyMessageToServer(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYMESSAGETOSERVER_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyPeerActionRequired(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYPEERACTIONREQUIRED_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyPeerAuthStatusChanged(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_REMOVENOTIFYPEERAUTHSTATUSCHANGED_OFFSET))(this, notificationId);
		}

		::Epic::OnlineServices::Result UnprotectMessage(::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions* options, ::Il2CppArray<::System::Byte>*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_UNPROTECTMESSAGE_OFFSET))(this, options, outBuffer);
		}

		::Epic::OnlineServices::Result UnregisterPeer(::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_UNREGISTERPEER_OFFSET))(this, options);
		}

		static ::System::Void OnMessageToPeerCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONMESSAGETOPEERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnMessageToServerCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONMESSAGETOSERVERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnPeerActionRequiredCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONPEERACTIONREQUIREDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnPeerAuthStatusChangedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ANTICHEATCLIENTINTERFACE_ONPEERAUTHSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
