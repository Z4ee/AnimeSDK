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

#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_GET_REGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA17C80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_GET_REGISTERSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA128A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SET_REGISTERINVITERECEIVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA1E090)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SET_REGISTERSOCIALUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BA1E040)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1E0E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelDelegate_TypeDefinitionIndex = 8481;

	class HoYoChannelDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate** StaticGet_Init()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D120);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AchievementsDelegate** StaticGet_Achievements()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AchievementsDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D128);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_QueryDelegate** StaticGet_Query()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_QueryDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D130);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_FriendListDelegate** StaticGet_FriendList()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_FriendListDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D138);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ResolvePrivilegeDelegate** StaticGet_ResolvePrivilege()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ResolvePrivilegeDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D140);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UserProfileDelegate** StaticGet_UserProfile()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UserProfileDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D148);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowMessageDialogDelegate** StaticGet_ShowMessageDialog()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowMessageDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D150);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate** StaticGet_RegisterGameOverlayCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D158);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate** StaticGet_Products()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D160);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPermissionDelegate** StaticGet_CheckPermission()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPermissionDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D168);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_StatisticsDelegate** StaticGet_Statistics()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_StatisticsDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D170);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate** StaticGet__registerInviteReceivedCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D178);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_BlockListDelegate** StaticGet_BlockList()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_BlockListDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D180);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowErrorDialogDelegate** StaticGet_ShowErrorDialog()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowErrorDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D188);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate** StaticGet_Consume()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D190);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate** StaticGet_UnregisterCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D198);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate** StaticGet_AuthToken()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D1A0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LeaderboardDelegate** StaticGet_Leaderboard()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LeaderboardDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D1A8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate** StaticGet_CheckEntitlements()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D1B0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate** StaticGet_Checkout()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D1B8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate** StaticGet_Login()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D1C0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate** StaticGet__registerSocialUpdateCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D1C8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ActivityDelegate** StaticGet_Activity()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ActivityDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D1D0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowProfileCardDelegate** StaticGet_ShowProfileCard()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowProfileCardDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D1D8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate** StaticGet_RegisterAuthStatusChangedCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterAuthStatusChangedCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D1E0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate** StaticGet_RegisterMicroTxnCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D1E8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InviteDelegate** StaticGet_Invite()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InviteDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D1F0);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPrivilegeDelegate** StaticGet_CheckPrivilege()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckPrivilegeDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D1F8);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RecentPlayersDelegate** StaticGet_RecentPlayers()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RecentPlayersDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D200);
		}
		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowTextEntryDelegate** StaticGet_ShowTextEntry()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ShowTextEntryDelegate**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelDelegate_TypeDefinitionIndex)->GetStaticField(0x1D208);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate* get_RegisterSocialUpdateCallback()
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_GET_REGISTERSOCIALUPDATECALLBACK_OFFSET))();
		}

		static ::System::Void set_RegisterSocialUpdateCallback(::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterSocialUpdateCallbackDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SET_REGISTERSOCIALUPDATECALLBACK_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate* get_RegisterInviteReceivedCallback()
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_GET_REGISTERINVITERECEIVEDCALLBACK_OFFSET))();
		}

		static ::System::Void set_RegisterInviteReceivedCallback(::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterInviteReceivedCallbackDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELDELEGATE_SET_REGISTERINVITERECEIVEDCALLBACK_OFFSET))(a1);
		}
	};
}
