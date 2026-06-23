#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_AchievementsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ActivityDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_AuthTokenDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_BlockListDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckEntitlementsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckPermissionDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckPrivilegeDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckoutDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ConsumeDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_FriendListDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_InitDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_InviteDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_LeaderboardDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_LoginDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ProductsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_QueryDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RecentPlayersDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ResolvePrivilegeDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ShowErrorDialogDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ShowMessageDialogDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ShowProfileCardDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ShowTextEntryDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_StatisticsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_UnregisterCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_UserProfileDelegate; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C395180)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_TypeDefinitionIndex = 20287;

	class HoYoChannelDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowMessageDialogDelegate** StaticGet_ShowMessageDialog()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowMessageDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C20);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate** StaticGet_Login()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C28);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate** StaticGet_Products()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C30);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ResolvePrivilegeDelegate** StaticGet_ResolvePrivilege()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ResolvePrivilegeDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C38);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate** StaticGet_RegisterInviteReceivedCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C40);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate** StaticGet_UnregisterCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C48);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InviteDelegate** StaticGet_Invite()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InviteDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C50);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_FriendListDelegate** StaticGet_FriendList()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_FriendListDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C58);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate** StaticGet_RegisterSocialUpdateCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C60);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate** StaticGet_RegisterGameOverlayCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C68);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LeaderboardDelegate** StaticGet_Leaderboard()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LeaderboardDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C70);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate** StaticGet_AuthToken()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C78);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate** StaticGet_RegisterMicroTxnCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C80);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPermissionDelegate** StaticGet_CheckPermission()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPermissionDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C88);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AchievementsDelegate** StaticGet_Achievements()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AchievementsDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C90);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UserProfileDelegate** StaticGet_UserProfile()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UserProfileDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9C98);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowTextEntryDelegate** StaticGet_ShowTextEntry()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowTextEntryDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9CA0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowProfileCardDelegate** StaticGet_ShowProfileCard()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowProfileCardDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9CA8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate** StaticGet_CheckEntitlements()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9CB0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate** StaticGet_Consume()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9CB8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ActivityDelegate** StaticGet_Activity()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ActivityDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9CC0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_BlockListDelegate** StaticGet_BlockList()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_BlockListDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9CC8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate** StaticGet_Checkout()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9CD0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_QueryDelegate** StaticGet_Query()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_QueryDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9CD8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPrivilegeDelegate** StaticGet_CheckPrivilege()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPrivilegeDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9CE0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RecentPlayersDelegate** StaticGet_RecentPlayers()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RecentPlayersDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9CE8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowErrorDialogDelegate** StaticGet_ShowErrorDialog()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowErrorDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9CF0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate** StaticGet_Init()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9CF8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate** StaticGet_RegisterAuthStatusChangedCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9D00);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_StatisticsDelegate** StaticGet_Statistics()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_StatisticsDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x9D08);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
