#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogEventOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogGameRoundEndOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogGameRoundStartOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerDespawnOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerReviveOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerSpawnOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerTakeDamageOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerTickOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerUseAbilityOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerUseWeaponOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class RegisterEventOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class SetClientDetailsOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class SetGameSessionIdOptions; }
namespace Epic::OnlineServices::AntiCheatServer { class AddNotifyClientActionRequiredOptions; }
namespace Epic::OnlineServices::AntiCheatServer { class AddNotifyClientAuthStatusChangedOptions; }
namespace Epic::OnlineServices::AntiCheatServer { class AddNotifyMessageToClientOptions; }
namespace Epic::OnlineServices::AntiCheatServer { class BeginSessionOptions; }
namespace Epic::OnlineServices::AntiCheatServer { class EndSessionOptions; }
namespace Epic::OnlineServices::AntiCheatServer { class GetProtectMessageOutputLengthOptions; }
namespace Epic::OnlineServices::AntiCheatServer { class OnClientActionRequiredCallback; }
namespace Epic::OnlineServices::AntiCheatServer { class OnClientAuthStatusChangedCallback; }
namespace Epic::OnlineServices::AntiCheatServer { class OnMessageToClientCallback; }
namespace Epic::OnlineServices::AntiCheatServer { class ProtectMessageOptions; }
namespace Epic::OnlineServices::AntiCheatServer { class ReceiveMessageFromClientOptions; }
namespace Epic::OnlineServices::AntiCheatServer { class RegisterClientOptions; }
namespace Epic::OnlineServices::AntiCheatServer { class SetClientNetworkStateOptions; }
namespace Epic::OnlineServices::AntiCheatServer { class UnprotectMessageOptions; }
namespace Epic::OnlineServices::AntiCheatServer { class UnregisterClientOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ADDNOTIFYCLIENTACTIONREQUIRED_OFFSET UNITYSDK_OFFSET(0x838EE20)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ADDNOTIFYCLIENTAUTHSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x838F0C0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ADDNOTIFYMESSAGETOCLIENT_OFFSET UNITYSDK_OFFSET(0x838F360)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_BEGINSESSION_OFFSET UNITYSDK_OFFSET(0x838F600)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ENDSESSION_OFFSET UNITYSDK_OFFSET(0x838F760)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_GETPROTECTMESSAGEOUTPUTLENGTH_OFFSET UNITYSDK_OFFSET(0x838F980)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGEVENT_OFFSET UNITYSDK_OFFSET(0x838FAF0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGGAMEROUNDEND_OFFSET UNITYSDK_OFFSET(0x838FD20)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGGAMEROUNDSTART_OFFSET UNITYSDK_OFFSET(0x838FE80)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERDESPAWN_OFFSET UNITYSDK_OFFSET(0x838FFE0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERREVIVE_OFFSET UNITYSDK_OFFSET(0x8390140)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERSPAWN_OFFSET UNITYSDK_OFFSET(0x83902A0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERTAKEDAMAGE_OFFSET UNITYSDK_OFFSET(0x8390400)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERTICK_OFFSET UNITYSDK_OFFSET(0x8390560)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERUSEABILITY_OFFSET UNITYSDK_OFFSET(0x83906C0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERUSEWEAPON_OFFSET UNITYSDK_OFFSET(0x8390820)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ONCLIENTACTIONREQUIREDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x838EC50)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x838ECE0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ONMESSAGETOCLIENTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x838ED70)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_PROTECTMESSAGE_OFFSET UNITYSDK_OFFSET(0x8390980)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_RECEIVEMESSAGEFROMCLIENT_OFFSET UNITYSDK_OFFSET(0x8390D30)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REGISTERCLIENT_OFFSET UNITYSDK_OFFSET(0x8390F60)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x83910C0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REMOVENOTIFYCLIENTACTIONREQUIRED_OFFSET UNITYSDK_OFFSET(0x8391220)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REMOVENOTIFYCLIENTAUTHSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x8391300)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REMOVENOTIFYMESSAGETOCLIENT_OFFSET UNITYSDK_OFFSET(0x83913E0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_SETCLIENTDETAILS_OFFSET UNITYSDK_OFFSET(0x83914C0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_SETCLIENTNETWORKSTATE_OFFSET UNITYSDK_OFFSET(0x8391620)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_SETGAMESESSIONID_OFFSET UNITYSDK_OFFSET(0x8391830)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_UNPROTECTMESSAGE_OFFSET UNITYSDK_OFFSET(0x8391A30)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_UNREGISTERCLIENT_OFFSET UNITYSDK_OFFSET(0x8391DE0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x838EE10)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x838EE00)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int AntiCheatServerInterface_TypeDefinitionIndex = 36605;

	class AntiCheatServerInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AddnotifyclientactionrequiredApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyclientauthstatuschangedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifymessagetoclientApiLatest = 0x1; // 0x0
		// static const ::System::Int32 BeginsessionApiLatest = 0x3; // 0x0
		// static const ::System::Int32 BeginsessionMaxRegistertimeout = 0x78; // 0x0
		// static const ::System::Int32 BeginsessionMinRegistertimeout = 0xA; // 0x0
		// static const ::System::Int32 EndsessionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetprotectmessageoutputlengthApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ProtectmessageApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ReceivemessagefromclientApiLatest = 0x1; // 0x0
		// static const ::System::Int32 RegisterclientApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetclientnetworkstateApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UnprotectmessageApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UnregisterclientApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::UInt64 AddNotifyClientActionRequired(::Epic::OnlineServices::AntiCheatServer::AddNotifyClientActionRequiredOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::AddNotifyClientActionRequiredOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ADDNOTIFYCLIENTACTIONREQUIRED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyClientAuthStatusChanged(::Epic::OnlineServices::AntiCheatServer::AddNotifyClientAuthStatusChangedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::AddNotifyClientAuthStatusChangedOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ADDNOTIFYCLIENTAUTHSTATUSCHANGED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyMessageToClient(::Epic::OnlineServices::AntiCheatServer::AddNotifyMessageToClientOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::AddNotifyMessageToClientOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ADDNOTIFYMESSAGETOCLIENT_OFFSET))(this, options, clientData, notificationFn);
		}

		::Epic::OnlineServices::Result BeginSession(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_BEGINSESSION_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result EndSession(::Epic::OnlineServices::AntiCheatServer::EndSessionOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::EndSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ENDSESSION_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result GetProtectMessageOutputLength(::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions* options, ::System::UInt32& outBufferSizeBytes)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions*, ::System::UInt32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_GETPROTECTMESSAGEOUTPUTLENGTH_OFFSET))(this, options, outBufferSizeBytes);
		}

		::Epic::OnlineServices::Result LogEvent(::Epic::OnlineServices::AntiCheatCommon::LogEventOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogEventOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGEVENT_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result LogGameRoundEnd(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGGAMEROUNDEND_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result LogGameRoundStart(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGGAMEROUNDSTART_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result LogPlayerDespawn(::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERDESPAWN_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result LogPlayerRevive(::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERREVIVE_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result LogPlayerSpawn(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERSPAWN_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result LogPlayerTakeDamage(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERTAKEDAMAGE_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result LogPlayerTick(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERTICK_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result LogPlayerUseAbility(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERUSEABILITY_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result LogPlayerUseWeapon(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERUSEWEAPON_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result ProtectMessage(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions* options, ::Il2CppArray<::System::Byte>*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_PROTECTMESSAGE_OFFSET))(this, options, outBuffer);
		}

		::Epic::OnlineServices::Result ReceiveMessageFromClient(::Epic::OnlineServices::AntiCheatServer::ReceiveMessageFromClientOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::ReceiveMessageFromClientOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_RECEIVEMESSAGEFROMCLIENT_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result RegisterClient(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REGISTERCLIENT_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result RegisterEvent(::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REGISTEREVENT_OFFSET))(this, options);
		}

		::System::Void RemoveNotifyClientActionRequired(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REMOVENOTIFYCLIENTACTIONREQUIRED_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyClientAuthStatusChanged(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REMOVENOTIFYCLIENTAUTHSTATUSCHANGED_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyMessageToClient(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REMOVENOTIFYMESSAGETOCLIENT_OFFSET))(this, notificationId);
		}

		::Epic::OnlineServices::Result SetClientDetails(::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_SETCLIENTDETAILS_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetClientNetworkState(::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_SETCLIENTNETWORKSTATE_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetGameSessionId(::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_SETGAMESESSIONID_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result UnprotectMessage(::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions* options, ::Il2CppArray<::System::Byte>*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_UNPROTECTMESSAGE_OFFSET))(this, options, outBuffer);
		}

		::Epic::OnlineServices::Result UnregisterClient(::Epic::OnlineServices::AntiCheatServer::UnregisterClientOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::UnregisterClientOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_UNREGISTERCLIENT_OFFSET))(this, options);
		}

		static ::System::Void OnClientActionRequiredCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ONCLIENTACTIONREQUIREDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnClientAuthStatusChangedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnMessageToClientCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ONMESSAGETOCLIENTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
