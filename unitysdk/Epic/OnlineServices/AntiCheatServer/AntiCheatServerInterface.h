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

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ADDNOTIFYCLIENTACTIONREQUIRED_OFFSET UNITYSDK_OFFSET(0xA0CFA40)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ADDNOTIFYCLIENTAUTHSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0xA0CFCF0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ADDNOTIFYMESSAGETOCLIENT_OFFSET UNITYSDK_OFFSET(0xA0CFFA0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_BEGINSESSION_OFFSET UNITYSDK_OFFSET(0xA0D0250)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ENDSESSION_OFFSET UNITYSDK_OFFSET(0xA0D03B0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_GETPROTECTMESSAGEOUTPUTLENGTH_OFFSET UNITYSDK_OFFSET(0xA0D05F0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGEVENT_OFFSET UNITYSDK_OFFSET(0xA0D0760)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGGAMEROUNDEND_OFFSET UNITYSDK_OFFSET(0xA0D0990)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGGAMEROUNDSTART_OFFSET UNITYSDK_OFFSET(0xA0D0AF0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERDESPAWN_OFFSET UNITYSDK_OFFSET(0xA0D0C50)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERREVIVE_OFFSET UNITYSDK_OFFSET(0xA0D0DB0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERSPAWN_OFFSET UNITYSDK_OFFSET(0xA0D0F10)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERTAKEDAMAGE_OFFSET UNITYSDK_OFFSET(0xA0D1070)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERTICK_OFFSET UNITYSDK_OFFSET(0xA0D11D0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERUSEABILITY_OFFSET UNITYSDK_OFFSET(0xA0D1330)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERUSEWEAPON_OFFSET UNITYSDK_OFFSET(0xA0D1490)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ONCLIENTACTIONREQUIREDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA0CF840)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA0CF8E0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ONMESSAGETOCLIENTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA0CF980)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_PROTECTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA0D1690)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_RECEIVEMESSAGEFROMCLIENT_OFFSET UNITYSDK_OFFSET(0xA0D1A30)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REGISTERCLIENT_OFFSET UNITYSDK_OFFSET(0xA0D1C60)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0xA0D1DC0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REMOVENOTIFYCLIENTACTIONREQUIRED_OFFSET UNITYSDK_OFFSET(0xA0D1F20)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REMOVENOTIFYCLIENTAUTHSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0xA0D2000)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REMOVENOTIFYMESSAGETOCLIENT_OFFSET UNITYSDK_OFFSET(0xA0D20E0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_SETCLIENTDETAILS_OFFSET UNITYSDK_OFFSET(0xA0D21C0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_SETCLIENTNETWORKSTATE_OFFSET UNITYSDK_OFFSET(0xA0D2320)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_SETGAMESESSIONID_OFFSET UNITYSDK_OFFSET(0xA0D2530)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_UNPROTECTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA0D2730)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_UNREGISTERCLIENT_OFFSET UNITYSDK_OFFSET(0xA0D2AD0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0CFA30)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0CFA20)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int AntiCheatServerInterface_TypeDefinitionIndex = 43234;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyClientActionRequired(::Epic::OnlineServices::AntiCheatServer::AddNotifyClientActionRequiredOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::AddNotifyClientActionRequiredOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ADDNOTIFYCLIENTACTIONREQUIRED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyClientAuthStatusChanged(::Epic::OnlineServices::AntiCheatServer::AddNotifyClientAuthStatusChangedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::AddNotifyClientAuthStatusChangedOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ADDNOTIFYCLIENTAUTHSTATUSCHANGED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyMessageToClient(::Epic::OnlineServices::AntiCheatServer::AddNotifyMessageToClientOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::AddNotifyMessageToClientOptions*, ::System::Object*, ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ADDNOTIFYMESSAGETOCLIENT_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result BeginSession(::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_BEGINSESSION_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result EndSession(::Epic::OnlineServices::AntiCheatServer::EndSessionOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::EndSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ENDSESSION_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result GetProtectMessageOutputLength(::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions* a1, ::System::UInt32& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions*, ::System::UInt32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_GETPROTECTMESSAGEOUTPUTLENGTH_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result LogEvent(::Epic::OnlineServices::AntiCheatCommon::LogEventOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogEventOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGEVENT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result LogGameRoundEnd(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGGAMEROUNDEND_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result LogGameRoundStart(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGGAMEROUNDSTART_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result LogPlayerDespawn(::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERDESPAWN_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result LogPlayerRevive(::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERREVIVE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result LogPlayerSpawn(::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERSPAWN_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result LogPlayerTakeDamage(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERTAKEDAMAGE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result LogPlayerTick(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERTICK_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result LogPlayerUseAbility(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERUSEABILITY_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result LogPlayerUseWeapon(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_LOGPLAYERUSEWEAPON_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result ProtectMessage(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions* a1, ::Il2CppArray<::System::Byte>*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_PROTECTMESSAGE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result ReceiveMessageFromClient(::Epic::OnlineServices::AntiCheatServer::ReceiveMessageFromClientOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::ReceiveMessageFromClientOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_RECEIVEMESSAGEFROMCLIENT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result RegisterClient(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REGISTERCLIENT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result RegisterEvent(::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REGISTEREVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyClientActionRequired(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REMOVENOTIFYCLIENTACTIONREQUIRED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyClientAuthStatusChanged(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REMOVENOTIFYCLIENTAUTHSTATUSCHANGED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyMessageToClient(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_REMOVENOTIFYMESSAGETOCLIENT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetClientDetails(::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_SETCLIENTDETAILS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetClientNetworkState(::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_SETCLIENTNETWORKSTATE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetGameSessionId(::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_SETGAMESESSIONID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result UnprotectMessage(::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions* a1, ::Il2CppArray<::System::Byte>*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_UNPROTECTMESSAGE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result UnregisterClient(::Epic::OnlineServices::AntiCheatServer::UnregisterClientOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::UnregisterClientOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_UNREGISTERCLIENT_OFFSET))(this, a1);
		}

		static ::System::Void OnClientActionRequiredCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ONCLIENTACTIONREQUIREDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnClientAuthStatusChangedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnMessageToClientCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ANTICHEATSERVERINTERFACE_ONMESSAGETOCLIENTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
