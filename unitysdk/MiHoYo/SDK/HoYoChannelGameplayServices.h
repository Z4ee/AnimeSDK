#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelAchievementsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAchievementsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelActivityParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelActivityResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteReceivedResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLeaderboardParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLeaderboardResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsParams; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0xB1D74A0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ACTIVITY_OFFSET UNITYSDK_OFFSET(0xB1D99D0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET UNITYSDK_OFFSET(0xB1DC220)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CLEARINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1DC1E0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_INVITE_OFFSET UNITYSDK_OFFSET(0xB1DA630)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_LEADERBOARD_OFFSET UNITYSDK_OFFSET(0xB1D8D70)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONACHIEVEMENTSCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1D5920)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONACTIVITYCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1D6640)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONINVITECALLBACK_OFFSET UNITYSDK_OFFSET(0xB1D6AA0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1D7360)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONLEADERBOARDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1D61E0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONRECENTPLAYERSCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1D6F00)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONSTATISTICSCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1D5D80)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_RECENTPLAYERS_OFFSET UNITYSDK_OFFSET(0xB1DB290)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_REGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1DBEF0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_STATISTICS_OFFSET UNITYSDK_OFFSET(0xB1D8100)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1DED90)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES__CTOR_OFFSET UNITYSDK_OFFSET(0xB1DED80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices_TypeDefinitionIndex = 46967;

	class HoYoChannelGameplayServices : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_achievementsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x44870);
		}
		static ::System::Object** StaticGet_s_statisticsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x44878);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>*>** StaticGet_s_inviteCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x44880);
		}
		static ::System::Object** StaticGet_s_achievementsLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x44888);
		}
		static ::System::Object** StaticGet_s_activityLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x44890);
		}
		static ::System::Object** StaticGet_s_recentPlayersLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x44898);
		}
		static ::System::Object** StaticGet_s_leaderboardLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x448A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_inviteTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x448A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>*>** StaticGet_s_recentPlayersCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x448B0);
		}
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>** StaticGet_s_inviteReceivedCallback()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x448B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_recentPlayersTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x448C0);
		}
		static ::System::Object** StaticGet_s_inviteLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x448C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>*>** StaticGet_s_statisticsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x448D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>*>** StaticGet_s_activityCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x448D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_statisticsTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x448E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_leaderboardTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x448E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>** StaticGet_s_activityTimeouts()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x448F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>*>** StaticGet_s_leaderboardCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x448F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>*>** StaticGet_s_achievementsCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x44900);
		}
		static ::System::Boolean* StaticGet_s_inviteReceivedRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelGameplayServices_TypeDefinitionIndex)->GetStaticField(0x10280);
		}
		// static const ::System::Double ACHIEVEMENTS_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double STATISTICS_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double LEADERBOARD_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double ACTIVITY_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double INVITE_TIMEOUT_SECONDS; // 0x0
		// static const ::System::Double RECENT_PLAYERS_TIMEOUT_SECONDS; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES__CCTOR_OFFSET))();
		}

		::System::Void Achievements(::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ACHIEVEMENTS_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnAchievementsCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONACHIEVEMENTSCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Statistics(::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_STATISTICS_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnStatisticsCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONSTATISTICSCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Leaderboard(::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_LEADERBOARD_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnLeaderboardCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONLEADERBOARDCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Activity(::MiHoYo::SDK::PC::OS::HoYoChannelActivityParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelActivityParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ACTIVITY_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnActivityCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONACTIVITYCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Invite(::MiHoYo::SDK::PC::OS::HoYoChannelInviteParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelInviteParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_INVITE_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnInviteCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONINVITECALLBACK_OFFSET))(a1, a2);
		}

		::System::Void RecentPlayers(::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams* a1, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersParams*, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_RECENTPLAYERS_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnRecentPlayersCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONRECENTPLAYERSCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void RegisterInviteReceivedCallback(::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelInviteReceivedResult*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_REGISTERINVITERECEIVEDCALLBACK_OFFSET))(this, a1);
		}

		static ::System::Void ClearInviteReceivedCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CLEARINVITERECEIVEDCALLBACK_OFFSET))();
		}

		static ::System::Void OnInviteReceivedCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_ONINVITERECEIVEDCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void CleanupTimedOutCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES_CLEANUPTIMEDOUTCALLBACKS_OFFSET))();
		}
	};
}
