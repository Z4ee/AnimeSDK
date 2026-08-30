#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Achievements { class AchievementsInterface; }
namespace Epic::OnlineServices::AntiCheatClient { class AntiCheatClientInterface; }
namespace Epic::OnlineServices::AntiCheatServer { class AntiCheatServerInterface; }
namespace Epic::OnlineServices::Auth { class AuthInterface; }
namespace Epic::OnlineServices::Connect { class ConnectInterface; }
namespace Epic::OnlineServices::CustomInvites { class CustomInvitesInterface; }
namespace Epic::OnlineServices::Ecom { class EcomInterface; }
namespace Epic::OnlineServices::Friends { class FriendsInterface; }
namespace Epic::OnlineServices::KWS { class KWSInterface; }
namespace Epic::OnlineServices::Leaderboards { class LeaderboardsInterface; }
namespace Epic::OnlineServices::Lobby { class LobbyInterface; }
namespace Epic::OnlineServices::Metrics { class MetricsInterface; }
namespace Epic::OnlineServices::Mods { class ModsInterface; }
namespace Epic::OnlineServices::P2P { class P2PInterface; }
namespace Epic::OnlineServices::Platform { class AndroidInitializeOptions; }
namespace Epic::OnlineServices::Platform { class InitializeOptions; }
namespace Epic::OnlineServices::Platform { class Options; }
namespace Epic::OnlineServices::Platform { class WindowsOptions; }
namespace Epic::OnlineServices::PlayerDataStorage { class PlayerDataStorageInterface; }
namespace Epic::OnlineServices::Presence { class PresenceInterface; }
namespace Epic::OnlineServices::ProgressionSnapshot { class ProgressionSnapshotInterface; }
namespace Epic::OnlineServices::RTC { class RTCInterface; }
namespace Epic::OnlineServices::RTCAdmin { class RTCAdminInterface; }
namespace Epic::OnlineServices::Reports { class ReportsInterface; }
namespace Epic::OnlineServices::Sanctions { class SanctionsInterface; }
namespace Epic::OnlineServices::Sessions { class SessionsInterface; }
namespace Epic::OnlineServices::Stats { class StatsInterface; }
namespace Epic::OnlineServices::TitleStorage { class TitleStorageInterface; }
namespace Epic::OnlineServices::UI { class UIInterface; }
namespace Epic::OnlineServices::UserInfo { class UserInfoInterface; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_CHECKFORLAUNCHERANDRESTART_OFFSET UNITYSDK_OFFSET(0xB3BC600)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_CREATE_1_OFFSET UNITYSDK_OFFSET(0xB3BEE80)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_CREATE_OFFSET UNITYSDK_OFFSET(0xB3BC680)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETACHIEVEMENTSINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BC7D0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETACTIVECOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xB3BC8B0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETACTIVELOCALECODE_OFFSET UNITYSDK_OFFSET(0xB3BCB60)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETANTICHEATCLIENTINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BCE10)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETANTICHEATSERVERINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BCEF0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETAUTHINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BCFD0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETCONNECTINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BD0B0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETCUSTOMINVITESINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BD190)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETECOMINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BD270)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETFRIENDSINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BD350)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETKWSINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BD430)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETLEADERBOARDSINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BD510)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETLOBBYINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BD5F0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETMETRICSINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BD6D0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETMODSINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BD7B0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETOVERRIDECOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xB3BD890)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETOVERRIDELOCALECODE_OFFSET UNITYSDK_OFFSET(0xB3BDAB0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETP2PINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BDCD0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETPLAYERDATASTORAGEINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BDDB0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETPRESENCEINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BDE90)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETPROGRESSIONSNAPSHOTINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BDF70)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETREPORTSINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BE210)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETRTCADMININTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BE050)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETRTCINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BE130)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETSANCTIONSINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BE2F0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETSESSIONSINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BE3D0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETSTATSINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BE4B0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETTITLESTORAGEINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BE590)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETUIINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BE670)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETUSERINFOINTERFACE_OFFSET UNITYSDK_OFFSET(0xB3BE750)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0xB3BE830)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB3BC490)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_RELEASE_OFFSET UNITYSDK_OFFSET(0xB3BE980)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_SETOVERRIDECOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xB3BEA00)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_SETOVERRIDELOCALECODE_OFFSET UNITYSDK_OFFSET(0xB3BEBC0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0xB3BED80)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_TICK_OFFSET UNITYSDK_OFFSET(0xB3BEE00)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB3BC5F0)
#define EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3BC5E0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int PlatformInterface_TypeDefinitionIndex = 46407;

	class PlatformInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AndroidinitializeoptionssysteminitializeoptionsApiLatest = 0x2; // 0x0
		// static const ::System::Int32 CountrycodeMaxBufferLen = 0x5; // 0x0
		// static const ::System::Int32 CountrycodeMaxLength = 0x4; // 0x0
		// static const ::System::Int32 InitializeApiLatest = 0x4; // 0x0
		// static const ::System::Int32 InitializeThreadaffinityApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LocalecodeMaxBufferLen = 0xA; // 0x0
		// static const ::System::Int32 LocalecodeMaxLength = 0x9; // 0x0
		// static const ::System::Int32 OptionsApiLatest = 0xB; // 0x0
		// static const ::System::Int32 RtcoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 PlatformWindowsrtcoptionsplatformspecificoptionsApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		static ::Epic::OnlineServices::Result Initialize(::Epic::OnlineServices::Platform::AndroidInitializeOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::Epic::OnlineServices::Platform::AndroidInitializeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_INITIALIZE_OFFSET))(a1);
		}

		::Epic::OnlineServices::Result CheckForLauncherAndRestart()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_CHECKFORLAUNCHERANDRESTART_OFFSET))(this);
		}

		static ::Epic::OnlineServices::Platform::PlatformInterface* Create(::Epic::OnlineServices::Platform::Options* a1)
		{
			return ((::Epic::OnlineServices::Platform::PlatformInterface*(*)(::Epic::OnlineServices::Platform::Options*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_CREATE_OFFSET))(a1);
		}

		::Epic::OnlineServices::Achievements::AchievementsInterface* GetAchievementsInterface()
		{
			return ((::Epic::OnlineServices::Achievements::AchievementsInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETACHIEVEMENTSINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Result GetActiveCountryCode(::Epic::OnlineServices::EpicAccountId* a1, ::System::String*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETACTIVECOUNTRYCODE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result GetActiveLocaleCode(::Epic::OnlineServices::EpicAccountId* a1, ::System::String*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETACTIVELOCALECODE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface* GetAntiCheatClientInterface()
		{
			return ((::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETANTICHEATCLIENTINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface* GetAntiCheatServerInterface()
		{
			return ((::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETANTICHEATSERVERINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Auth::AuthInterface* GetAuthInterface()
		{
			return ((::Epic::OnlineServices::Auth::AuthInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETAUTHINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Connect::ConnectInterface* GetConnectInterface()
		{
			return ((::Epic::OnlineServices::Connect::ConnectInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETCONNECTINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::CustomInvites::CustomInvitesInterface* GetCustomInvitesInterface()
		{
			return ((::Epic::OnlineServices::CustomInvites::CustomInvitesInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETCUSTOMINVITESINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Ecom::EcomInterface* GetEcomInterface()
		{
			return ((::Epic::OnlineServices::Ecom::EcomInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETECOMINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Friends::FriendsInterface* GetFriendsInterface()
		{
			return ((::Epic::OnlineServices::Friends::FriendsInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETFRIENDSINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::KWS::KWSInterface* GetKWSInterface()
		{
			return ((::Epic::OnlineServices::KWS::KWSInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETKWSINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* GetLeaderboardsInterface()
		{
			return ((::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETLEADERBOARDSINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Lobby::LobbyInterface* GetLobbyInterface()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETLOBBYINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Metrics::MetricsInterface* GetMetricsInterface()
		{
			return ((::Epic::OnlineServices::Metrics::MetricsInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETMETRICSINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Mods::ModsInterface* GetModsInterface()
		{
			return ((::Epic::OnlineServices::Mods::ModsInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETMODSINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Result GetOverrideCountryCode(::System::String*& a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETOVERRIDECOUNTRYCODE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result GetOverrideLocaleCode(::System::String*& a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETOVERRIDELOCALECODE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::P2P::P2PInterface* GetP2PInterface()
		{
			return ((::Epic::OnlineServices::P2P::P2PInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETP2PINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface* GetPlayerDataStorageInterface()
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::PlayerDataStorageInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETPLAYERDATASTORAGEINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Presence::PresenceInterface* GetPresenceInterface()
		{
			return ((::Epic::OnlineServices::Presence::PresenceInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETPRESENCEINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface* GetProgressionSnapshotInterface()
		{
			return ((::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETPROGRESSIONSNAPSHOTINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::RTCAdmin::RTCAdminInterface* GetRTCAdminInterface()
		{
			return ((::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETRTCADMININTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::RTC::RTCInterface* GetRTCInterface()
		{
			return ((::Epic::OnlineServices::RTC::RTCInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETRTCINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Reports::ReportsInterface* GetReportsInterface()
		{
			return ((::Epic::OnlineServices::Reports::ReportsInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETREPORTSINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Sanctions::SanctionsInterface* GetSanctionsInterface()
		{
			return ((::Epic::OnlineServices::Sanctions::SanctionsInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETSANCTIONSINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Sessions::SessionsInterface* GetSessionsInterface()
		{
			return ((::Epic::OnlineServices::Sessions::SessionsInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETSESSIONSINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::Stats::StatsInterface* GetStatsInterface()
		{
			return ((::Epic::OnlineServices::Stats::StatsInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETSTATSINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::TitleStorage::TitleStorageInterface* GetTitleStorageInterface()
		{
			return ((::Epic::OnlineServices::TitleStorage::TitleStorageInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETTITLESTORAGEINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::UI::UIInterface* GetUIInterface()
		{
			return ((::Epic::OnlineServices::UI::UIInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETUIINTERFACE_OFFSET))(this);
		}

		::Epic::OnlineServices::UserInfo::UserInfoInterface* GetUserInfoInterface()
		{
			return ((::Epic::OnlineServices::UserInfo::UserInfoInterface*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_GETUSERINFOINTERFACE_OFFSET))(this);
		}

		static ::Epic::OnlineServices::Result Initialize_1(::Epic::OnlineServices::Platform::InitializeOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::Epic::OnlineServices::Platform::InitializeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_INITIALIZE_1_OFFSET))(a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_RELEASE_OFFSET))(this);
		}

		::Epic::OnlineServices::Result SetOverrideCountryCode(::System::String* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_SETOVERRIDECOUNTRYCODE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetOverrideLocaleCode(::System::String* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_SETOVERRIDELOCALECODE_OFFSET))(this, a1);
		}

		static ::Epic::OnlineServices::Result Shutdown()
		{
			return ((::Epic::OnlineServices::Result(*)())((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_SHUTDOWN_OFFSET))();
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_TICK_OFFSET))(this);
		}

		static ::Epic::OnlineServices::Platform::PlatformInterface* Create_1(::Epic::OnlineServices::Platform::WindowsOptions* a1)
		{
			return ((::Epic::OnlineServices::Platform::PlatformInterface*(*)(::Epic::OnlineServices::Platform::WindowsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_PLATFORMINTERFACE_CREATE_1_OFFSET))(a1);
		}
	};
}
