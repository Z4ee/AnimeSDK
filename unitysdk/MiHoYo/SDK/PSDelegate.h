#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PSDelegate_ActivityChangeAvailabilityDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityChangeAvailabilityListDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityEndDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityManagerDestoryDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityManagerInitDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityResumeDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityStartDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ActivityTerminateDelegate; }
namespace MiHoYo::SDK { class PSDelegate_CheckPremiumDelegate; }
namespace MiHoYo::SDK { class PSDelegate_CheckPsStoreIsEmptyDelegate; }
namespace MiHoYo::SDK { class PSDelegate_CreateTrophyContextDelegate; }
namespace MiHoYo::SDK { class PSDelegate_DestroyTrophyContextDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GameIntentDestoryDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GameIntentInitDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetAccountCountryDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetAccountIdByOnlineIdDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetAccountIdDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetCommunicationRestrictionStatusDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetOnlineIdDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetOnlineIdListWithAccountIdListDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetPsStoreProductsDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetSystemEnterButtonAssignDelegate; }
namespace MiHoYo::SDK { class PSDelegate_GetUserIdDelegate; }
namespace MiHoYo::SDK { class PSDelegate_HidePsStoreIconDelegate; }
namespace MiHoYo::SDK { class PSDelegate_NotifyPremiumFeatureDelegate; }
namespace MiHoYo::SDK { class PSDelegate_OpenCommerceCheckoutDialogDelegate; }
namespace MiHoYo::SDK { class PSDelegate_OpenImeDialogDelegate; }
namespace MiHoYo::SDK { class PSDelegate_OpenPremiumCheckoutDialogDelegate; }
namespace MiHoYo::SDK { class PSDelegate_OpenURLDelegate; }
namespace MiHoYo::SDK { class PSDelegate_PS5FriendCallback; }
namespace MiHoYo::SDK { class PSDelegate_PS5FriendDelegate; }
namespace MiHoYo::SDK { class PSDelegate_PS5GameIntentCallback; }
namespace MiHoYo::SDK { class PSDelegate_PS5GameIntentDelegate; }
namespace MiHoYo::SDK { class PSDelegate_RegisterNPStateCallbackDelegate; }
namespace MiHoYo::SDK { class PSDelegate_RunningDialogCloseDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ShowEmptyStoreDialogDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ShowPsStoreIconDelegate; }
namespace MiHoYo::SDK { class PSDelegate_ShowSysMessageDialogDelegate; }
namespace MiHoYo::SDK { class PSDelegate_TryGetAuthCodeDelegate; }
namespace MiHoYo::SDK { class PSDelegate_UnlockTrophyDelegate; }
namespace MiHoYo::SDK { class PSDelegate_UnregisterNPStateCallbackDelegate; }

#define MIHOYO_SDK_PSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x175F9240)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_TypeDefinitionIndex = 6767;

	class PSDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PSDelegate_PS5FriendDelegate** StaticGet_UnregisterBlockListUpdateCallback()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5FriendDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A00);
		}
		static ::MiHoYo::SDK::PSDelegate_RunningDialogCloseDelegate** StaticGet_RunningDialogClose()
		{
			return (::MiHoYo::SDK::PSDelegate_RunningDialogCloseDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A08);
		}
		static ::MiHoYo::SDK::PSDelegate_ShowPsStoreIconDelegate** StaticGet_ShowPsStoreIcon()
		{
			return (::MiHoYo::SDK::PSDelegate_ShowPsStoreIconDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A10);
		}
		static ::MiHoYo::SDK::PSDelegate_CreateTrophyContextDelegate** StaticGet_CreateTrophyContext()
		{
			return (::MiHoYo::SDK::PSDelegate_CreateTrophyContextDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A18);
		}
		static ::MiHoYo::SDK::PSDelegate_ActivityResumeDelegate** StaticGet_ActivityResume()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityResumeDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A20);
		}
		static ::MiHoYo::SDK::PSDelegate_GetOnlineIdDelegate** StaticGet_GetOnlineId()
		{
			return (::MiHoYo::SDK::PSDelegate_GetOnlineIdDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A28);
		}
		static ::MiHoYo::SDK::PSDelegate_PS5FriendCallback** StaticGet_RegisterFriendListUpdateCallback()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5FriendCallback**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A30);
		}
		static ::MiHoYo::SDK::PSDelegate_ActivityChangeAvailabilityDelegate** StaticGet_ActivityChangeAvailability()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityChangeAvailabilityDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A38);
		}
		static ::MiHoYo::SDK::PSDelegate_RegisterNPStateCallbackDelegate** StaticGet_RegisterNPStateCallback()
		{
			return (::MiHoYo::SDK::PSDelegate_RegisterNPStateCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A40);
		}
		static ::MiHoYo::SDK::PSDelegate_PS5FriendCallback** StaticGet_GetFriendList()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5FriendCallback**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A48);
		}
		static ::MiHoYo::SDK::PSDelegate_ActivityChangeAvailabilityListDelegate** StaticGet_ActivityChangeAvailabilityList()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityChangeAvailabilityListDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A50);
		}
		static ::MiHoYo::SDK::PSDelegate_GameIntentDestoryDelegate** StaticGet_GameIntentDestory()
		{
			return (::MiHoYo::SDK::PSDelegate_GameIntentDestoryDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A58);
		}
		static ::MiHoYo::SDK::PSDelegate_GetOnlineIdListWithAccountIdListDelegate** StaticGet_GetOnlineIdListWithAccountIdList()
		{
			return (::MiHoYo::SDK::PSDelegate_GetOnlineIdListWithAccountIdListDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A60);
		}
		static ::MiHoYo::SDK::PSDelegate_HidePsStoreIconDelegate** StaticGet_HidePsStoreIcon()
		{
			return (::MiHoYo::SDK::PSDelegate_HidePsStoreIconDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A68);
		}
		static ::MiHoYo::SDK::PSDelegate_PS5FriendCallback** StaticGet_RegisterBlockListUpdateCallback()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5FriendCallback**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A70);
		}
		static ::MiHoYo::SDK::PSDelegate_ShowSysMessageDialogDelegate** StaticGet_ShowSysMessageDialog()
		{
			return (::MiHoYo::SDK::PSDelegate_ShowSysMessageDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A78);
		}
		static ::MiHoYo::SDK::PSDelegate_PS5GameIntentDelegate** StaticGet_UnregisterGameIntentJoinSessionId()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5GameIntentDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A80);
		}
		static ::MiHoYo::SDK::PSDelegate_DestroyTrophyContextDelegate** StaticGet_DestroyTrophyContext()
		{
			return (::MiHoYo::SDK::PSDelegate_DestroyTrophyContextDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A88);
		}
		static ::MiHoYo::SDK::PSDelegate_OpenCommerceCheckoutDialogDelegate** StaticGet_OpenCommerceCheckoutDialog()
		{
			return (::MiHoYo::SDK::PSDelegate_OpenCommerceCheckoutDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A90);
		}
		static ::MiHoYo::SDK::PSDelegate_ActivityManagerInitDelegate** StaticGet_ActivityManagerInit()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityManagerInitDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16A98);
		}
		static ::MiHoYo::SDK::PSDelegate_PS5GameIntentDelegate** StaticGet_UnregisterGameIntentLaunchActivityId()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5GameIntentDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16AA0);
		}
		static ::MiHoYo::SDK::PSDelegate_GetAccountCountryDelegate** StaticGet_GetAccountCountry()
		{
			return (::MiHoYo::SDK::PSDelegate_GetAccountCountryDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16AA8);
		}
		static ::MiHoYo::SDK::PSDelegate_CheckPsStoreIsEmptyDelegate** StaticGet_CheckPsStoreIsEmpty()
		{
			return (::MiHoYo::SDK::PSDelegate_CheckPsStoreIsEmptyDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16AB0);
		}
		static ::MiHoYo::SDK::PSDelegate_GetAccountIdByOnlineIdDelegate** StaticGet_GetAccountIdByOnlineId()
		{
			return (::MiHoYo::SDK::PSDelegate_GetAccountIdByOnlineIdDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16AB8);
		}
		static ::MiHoYo::SDK::PSDelegate_PS5GameIntentCallback** StaticGet_RegisterGameIntentJoinSessionId()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5GameIntentCallback**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16AC0);
		}
		static ::MiHoYo::SDK::PSDelegate_PS5FriendCallback** StaticGet_GetBlockList()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5FriendCallback**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16AC8);
		}
		static ::MiHoYo::SDK::PSDelegate_ShowEmptyStoreDialogDelegate** StaticGet_ShowEmptyStoreDialog()
		{
			return (::MiHoYo::SDK::PSDelegate_ShowEmptyStoreDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16AD0);
		}
		static ::MiHoYo::SDK::PSDelegate_UnregisterNPStateCallbackDelegate** StaticGet_UnregisterNPStateCallback()
		{
			return (::MiHoYo::SDK::PSDelegate_UnregisterNPStateCallbackDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16AD8);
		}
		static ::MiHoYo::SDK::PSDelegate_GetCommunicationRestrictionStatusDelegate** StaticGet_GetCommunicationRestrictionStatus()
		{
			return (::MiHoYo::SDK::PSDelegate_GetCommunicationRestrictionStatusDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16AE0);
		}
		static ::MiHoYo::SDK::PSDelegate_NotifyPremiumFeatureDelegate** StaticGet_NotifyPremiumFeature()
		{
			return (::MiHoYo::SDK::PSDelegate_NotifyPremiumFeatureDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16AE8);
		}
		static ::MiHoYo::SDK::PSDelegate_ActivityManagerDestoryDelegate** StaticGet_ActivityManagerDestory()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityManagerDestoryDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16AF0);
		}
		static ::MiHoYo::SDK::PSDelegate_ActivityEndDelegate** StaticGet_ActivityEnd()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityEndDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16AF8);
		}
		static ::MiHoYo::SDK::PSDelegate_PS5GameIntentCallback** StaticGet_RegisterGameIntentLaunchActivityId()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5GameIntentCallback**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B00);
		}
		static ::MiHoYo::SDK::PSDelegate_OpenURLDelegate** StaticGet_OpenURL()
		{
			return (::MiHoYo::SDK::PSDelegate_OpenURLDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B08);
		}
		static ::MiHoYo::SDK::PSDelegate_GetAccountIdDelegate** StaticGet_GetAccountId()
		{
			return (::MiHoYo::SDK::PSDelegate_GetAccountIdDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B10);
		}
		static ::MiHoYo::SDK::PSDelegate_GetSystemEnterButtonAssignDelegate** StaticGet_GetSystemEnterButtonAssign()
		{
			return (::MiHoYo::SDK::PSDelegate_GetSystemEnterButtonAssignDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B18);
		}
		static ::MiHoYo::SDK::PSDelegate_CheckPremiumDelegate** StaticGet_CheckPremium()
		{
			return (::MiHoYo::SDK::PSDelegate_CheckPremiumDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B20);
		}
		static ::MiHoYo::SDK::PSDelegate_UnlockTrophyDelegate** StaticGet_UnlockTrophy()
		{
			return (::MiHoYo::SDK::PSDelegate_UnlockTrophyDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B28);
		}
		static ::MiHoYo::SDK::PSDelegate_GetUserIdDelegate** StaticGet_GetUserId()
		{
			return (::MiHoYo::SDK::PSDelegate_GetUserIdDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B30);
		}
		static ::MiHoYo::SDK::PSDelegate_GameIntentInitDelegate** StaticGet_GameIntentInit()
		{
			return (::MiHoYo::SDK::PSDelegate_GameIntentInitDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B38);
		}
		static ::MiHoYo::SDK::PSDelegate_ActivityStartDelegate** StaticGet_ActivityStart()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityStartDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B40);
		}
		static ::MiHoYo::SDK::PSDelegate_GetPsStoreProductsDelegate** StaticGet_GetPsStoreProducts()
		{
			return (::MiHoYo::SDK::PSDelegate_GetPsStoreProductsDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B48);
		}
		static ::MiHoYo::SDK::PSDelegate_ActivityTerminateDelegate** StaticGet_ActivityTerminate()
		{
			return (::MiHoYo::SDK::PSDelegate_ActivityTerminateDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B50);
		}
		static ::MiHoYo::SDK::PSDelegate_TryGetAuthCodeDelegate** StaticGet_TryGetAuthCode()
		{
			return (::MiHoYo::SDK::PSDelegate_TryGetAuthCodeDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B58);
		}
		static ::MiHoYo::SDK::PSDelegate_OpenPremiumCheckoutDialogDelegate** StaticGet_OpenPremiumCheckoutDialog()
		{
			return (::MiHoYo::SDK::PSDelegate_OpenPremiumCheckoutDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B60);
		}
		static ::MiHoYo::SDK::PSDelegate_PS5FriendDelegate** StaticGet_UnregisterFriendListUpdateCallback()
		{
			return (::MiHoYo::SDK::PSDelegate_PS5FriendDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B68);
		}
		static ::MiHoYo::SDK::PSDelegate_OpenImeDialogDelegate** StaticGet_OpenImeDialog()
		{
			return (::MiHoYo::SDK::PSDelegate_OpenImeDialogDelegate**)Il2CppClass::FromTypeDefinitionIndex(PSDelegate_TypeDefinitionIndex)->GetStaticField(0x16B70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
