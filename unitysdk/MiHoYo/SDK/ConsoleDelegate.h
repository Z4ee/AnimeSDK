#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConsoleDelegate_AchievementDestoryDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_AchievementInitDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_CXOpenCommerceCheckoutDialogDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_CXUserSignInDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_CheckPrivilegeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_CheckPsStoreIsEmptyDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_CreateMatchDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_CreateSessionDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_DialogOpenPlayGoDialogDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_FriendListDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_FriendUpdateDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetAccountCountryDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetAccountIdDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetAchievementsDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetActivitiesDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetCheckPermissionDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetCurrentSessionIdDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetLeaderboardsDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetMatchDetailDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetOnlineIdDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetPlayerSessionInfoDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetPsStoreProductsDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetSandboxIdDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetSessionLeaderAccountIdDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetStatisticsDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetUserCollectionsIdDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_GetUserProfileDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_HasJoinSessionDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_JoinMatchDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_JoinSessionDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_LeaveMatchDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_LeaveSessionDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_OpenCommerceCheckoutDialogDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_OpenURLDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_OpenURLWithCookiesDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoFinalizeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoGetChunkInfoDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoGetChunkLocusDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoGetChunkProgressSizeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoGetChunkTotalSizeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoInitializeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_PlayGoSetLanguageMaskDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_RegisterReceiveInviteDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ReportMatchResultsDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ResolvePrivilegeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_SendSessionInviteDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_SessionDestoryDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_SessionInitDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_SetSessionDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ShowMessageDialogDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ShowProfileCardDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ShowSessionInviteDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_ShowTextEntryDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_TryGetAuthCodeDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_TryGetCXTokenDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_UpdateAchievementDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_UpdateMatchDetailDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_UpdateMatchStatusDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_UpdateRecentPlayersDelegate; }
namespace MiHoYo::SDK { class ConsoleDelegate_UpdateStatisticsDelegate; }

#define MIHOYO_SDK_CONSOLEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18306F10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConsoleDelegate_TypeDefinitionIndex = 7565;

	class ConsoleDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkProgressSizeDelegate** StaticGet_PlayGoGetChunkProgressSize()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkProgressSizeDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE950);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_CheckPrivilegeDelegate** StaticGet_CheckPrivilege()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_CheckPrivilegeDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE958);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetUserCollectionsIdDelegate** StaticGet_GetUserCollectionsId()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetUserCollectionsIdDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE960);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_ShowMessageDialogDelegate** StaticGet_ShowMessageDialog()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ShowMessageDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE968);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate** StaticGet_GetFriendList()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE970);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetMatchDetailDelegate** StaticGet_GetMatchDetail()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetMatchDetailDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE978);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_UpdateMatchDetailDelegate** StaticGet_UpdateMatchDetail()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_UpdateMatchDetailDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE980);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetSandboxIdDelegate** StaticGet_GetSandboxId()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetSandboxIdDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE988);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetAchievementsDelegate** StaticGet_GetAchievements()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetAchievementsDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE990);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_CheckPsStoreIsEmptyDelegate** StaticGet_CheckPsStoreIsEmpty()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_CheckPsStoreIsEmptyDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE998);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetAccountCountryDelegate** StaticGet_GetAccountCountry()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetAccountCountryDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE9A0);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_HasJoinSessionDelegate** StaticGet_HasJoinSession()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_HasJoinSessionDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE9A8);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_TryGetCXTokenDelegate** StaticGet_TryGetCXToken()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_TryGetCXTokenDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE9B0);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_FriendUpdateDelegate** StaticGet_UnregisterFriendListUpdateCallback()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_FriendUpdateDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE9B8);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_DialogOpenPlayGoDialogDelegate** StaticGet_DialogOpenPlayGoDialog()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_DialogOpenPlayGoDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE9C0);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_TryGetAuthCodeDelegate** StaticGet_TryGetAuthCode()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_TryGetAuthCodeDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE9C8);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_AchievementInitDelegate** StaticGet_AchievementInit()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_AchievementInitDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE9D0);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetAccountIdDelegate** StaticGet_GetAccountId()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetAccountIdDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE9D8);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoFinalizeDelegate** StaticGet_PlayGoFinalize()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoFinalizeDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE9E0);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_UpdateStatisticsDelegate** StaticGet_UpdateStatistics()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_UpdateStatisticsDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE9E8);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_LeaveSessionDelegate** StaticGet_LeaveSession()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_LeaveSessionDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE9F0);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_ShowMessageDialogDelegate** StaticGet_ShowErrorDialog()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ShowMessageDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xE9F8);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate** StaticGet_GetBlockList()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA00);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetCurrentSessionIdDelegate** StaticGet_GetCurrentSessionId()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetCurrentSessionIdDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA08);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_ShowProfileCardDelegate** StaticGet_ShowProfileCard()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ShowProfileCardDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA10);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_UpdateAchievementDelegate** StaticGet_UpdateAchievement()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_UpdateAchievementDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA18);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_CreateMatchDelegate** StaticGet_CreateMatch()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_CreateMatchDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA20);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_CreateSessionDelegate** StaticGet_CreateSession()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_CreateSessionDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA28);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetSessionLeaderAccountIdDelegate** StaticGet_GetSessionLeaderAccountId()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetSessionLeaderAccountIdDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA30);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetActivitiesDelegate** StaticGet_GetActivities()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetActivitiesDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA38);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_ResolvePrivilegeDelegate** StaticGet_ResolvePrivilege()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ResolvePrivilegeDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA40);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetOnlineIdDelegate** StaticGet_GetOnlineId()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetOnlineIdDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA48);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_SendSessionInviteDelegate** StaticGet_SendSessionInvite()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_SendSessionInviteDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA50);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_OpenURLWithCookiesDelegate** StaticGet_OpenURLWithCookies()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_OpenURLWithCookiesDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA58);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetUserProfileDelegate** StaticGet_GetUserProfile()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetUserProfileDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA60);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_RegisterReceiveInviteDelegate** StaticGet_RegisterReceiveInvite()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_RegisterReceiveInviteDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA68);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkTotalSizeDelegate** StaticGet_PlayGoGetChunkTotalSize()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkTotalSizeDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA70);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_OpenURLDelegate** StaticGet_OpenURL()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_OpenURLDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA78);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_SetSessionDelegate** StaticGet_SetSession()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_SetSessionDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA80);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_JoinMatchDelegate** StaticGet_JoinMatch()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_JoinMatchDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA88);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate** StaticGet_RegisterFriendListUpdateCallback()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA90);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoInitializeDelegate** StaticGet_PlayGoInitialize()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoInitializeDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEA98);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_JoinSessionDelegate** StaticGet_JoinSession()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_JoinSessionDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEAA0);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_FriendUpdateDelegate** StaticGet_UnregisterBlockListUpdateCallback()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_FriendUpdateDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEAA8);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_LeaveMatchDelegate** StaticGet_LeaveMatch()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_LeaveMatchDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEAB0);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_CXOpenCommerceCheckoutDialogDelegate** StaticGet_CXOpenCommerceCheckoutDialog()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_CXOpenCommerceCheckoutDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEAB8);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate** StaticGet_RegisterBlockListUpdateCallback()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_FriendListDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEAC0);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkInfoDelegate** StaticGet_PlayGoGetChunkInfo()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkInfoDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEAC8);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetPsStoreProductsDelegate** StaticGet_GetPsStoreProducts()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetPsStoreProductsDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEAD0);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_UpdateRecentPlayersDelegate** StaticGet_UpdateRecentPlayers()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_UpdateRecentPlayersDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEAD8);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_SessionInitDelegate** StaticGet_SessionInit()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_SessionInitDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEAE0);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_CXUserSignInDelegate** StaticGet_CXUserSignIn()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_CXUserSignInDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEAE8);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_ReportMatchResultsDelegate** StaticGet_ReportMatchResults()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ReportMatchResultsDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEAF0);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_AchievementDestoryDelegate** StaticGet_AchievementDestory()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_AchievementDestoryDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEAF8);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetPlayerSessionInfoDelegate** StaticGet_GetPlayerSessionInfo()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetPlayerSessionInfoDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEB00);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_ShowSessionInviteDelegate** StaticGet_ShowSessionInvite()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ShowSessionInviteDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEB08);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetStatisticsDelegate** StaticGet_GetStatistics()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetStatisticsDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEB10);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetLeaderboardsDelegate** StaticGet_GetLeaderboards()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetLeaderboardsDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEB18);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_SessionDestoryDelegate** StaticGet_SessionDestory()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_SessionDestoryDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEB20);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_GetCheckPermissionDelegate** StaticGet_GetCheckPermission()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_GetCheckPermissionDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEB28);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_OpenCommerceCheckoutDialogDelegate** StaticGet_OpenCommerceCheckoutDialog()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_OpenCommerceCheckoutDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEB30);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoSetLanguageMaskDelegate** StaticGet_PlayGoSetLanguageMask()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoSetLanguageMaskDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEB38);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_ShowTextEntryDelegate** StaticGet_ShowTextEntry()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_ShowTextEntryDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEB40);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkLocusDelegate** StaticGet_PlayGoGetChunkLocus()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_PlayGoGetChunkLocusDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEB48);
		}
		static ::MiHoYo::SDK::ConsoleDelegate_UpdateMatchStatusDelegate** StaticGet_UpdateMatchStatus()
		{
			return (::MiHoYo::SDK::ConsoleDelegate_UpdateMatchStatusDelegate**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDelegate_TypeDefinitionIndex)->GetStaticField(0xEB50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
