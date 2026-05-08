#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ChannelType.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x197FA2A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x197FFD40)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x197FF770)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x197FBCA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x197FBBA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x197FF9A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x197FC110)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x197F9730)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET UNITYSDK_OFFSET(0x19803100)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKBLACKINVOKELIST_OFFSET UNITYSDK_OFFSET(0x197FA380)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x197FC660)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ENABLENATIVEDELEGATE_OFFSET UNITYSDK_OFFSET(0x19803460)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GETDEFERREDDEEPLINK_OFFSET UNITYSDK_OFFSET(0x197F9880)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_DISK_TYPE_OFFSET UNITYSDK_OFFSET(0x19802F10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_MEMORY_SIZE_OFFSET UNITYSDK_OFFSET(0x19802C00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_THREAD_COUNT_OFFSET UNITYSDK_OFFSET(0x19802B00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_CLEAR_DEFERRED_DEEPLINK_OFFSET UNITYSDK_OFFSET(0x198032A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x197FFEE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CLIENT_TYPE_OFFSET UNITYSDK_OFFSET(0x19804DC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET UNITYSDK_OFFSET(0x19802550)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEFERRED_DEEPLINK_OFFSET UNITYSDK_OFFSET(0x19803240)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_FINGERPRINT_OFFSET UNITYSDK_OFFSET(0x197FF880)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x197FF800)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x197FFF70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x198020E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_UAPC_OFFSET UNITYSDK_OFFSET(0x19802630)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_CHANNEL_CONFIG_OFFSET UNITYSDK_OFFSET(0x197FD370)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_COMBO_CONFIG_OFFSET UNITYSDK_OFFSET(0x197FCC20)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_DOMAIN_PREFIX_OFFSET UNITYSDK_OFFSET(0x198028E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x198010C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET UNITYSDK_OFFSET(0x19801F60)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VOLUME_OFFSET UNITYSDK_OFFSET(0x197FC160)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_STEAM_ID_OFFSET UNITYSDK_OFFSET(0x197FDC70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_ANIMATION_ENABLE_OFFSET UNITYSDK_OFFSET(0x19802F80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_JOYPAD_CLOSE_ENABLE_OFFSET UNITYSDK_OFFSET(0x19803040)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INITAUTHPARAMETER_OFFSET UNITYSDK_OFFSET(0x197F97C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x197FADC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_ENV_OFFSET UNITYSDK_OFFSET(0x198048E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x198046A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_LANG_OFFSET UNITYSDK_OFFSET(0x19804480)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_REGION_OFFSET UNITYSDK_OFFSET(0x19804790)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_USER_ID_OFFSET UNITYSDK_OFFSET(0x19804550)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_REPORT_EVENT_OFFSET UNITYSDK_OFFSET(0x19803DF0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET UNITYSDK_OFFSET(0x19803300)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x198028F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_UI_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x198029B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET UNITYSDK_OFFSET(0x19802240)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET UNITYSDK_OFFSET(0x19801C90)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x19802710)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_COMPLIANCE_OFFSET UNITYSDK_OFFSET(0x19802850)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x198027A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_EMAIL_OFFSET UNITYSDK_OFFSET(0x198016D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x19801750)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_OFFSET UNITYSDK_OFFSET(0x197FDD30)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x198017D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CHECK_DEVICE_LIMIT_OFFSET UNITYSDK_OFFSET(0x198049A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_OFFSET UNITYSDK_OFFSET(0x19801960)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_PAY_OFFSET UNITYSDK_OFFSET(0x19800190)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x197FF4D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET UNITYSDK_OFFSET(0x197FEEB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x197FDDC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_EXIT_OFFSET UNITYSDK_OFFSET(0x197FCB90)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET UNITYSDK_OFFSET(0x197FF960)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET UNITYSDK_OFFSET(0x19801A70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET UNITYSDK_OFFSET(0x19801410)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET UNITYSDK_OFFSET(0x19800A20)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET UNITYSDK_OFFSET(0x19800AB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET UNITYSDK_OFFSET(0x197FF710)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET UNITYSDK_OFFSET(0x197FEF50)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET UNITYSDK_OFFSET(0x19800470)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x197FF010)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x19801200)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x19801300)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET UNITYSDK_OFFSET(0x197FEEC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET UNITYSDK_OFFSET(0x19801030)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET UNITYSDK_OFFSET(0x197FC460)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET UNITYSDK_OFFSET(0x197FC8A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET UNITYSDK_OFFSET(0x197FC9D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET UNITYSDK_OFFSET(0x197FEFB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET UNITYSDK_OFFSET(0x19801C00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x197FF2B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_PAY_OFFSET UNITYSDK_OFFSET(0x197FFFF0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x198018D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_AUTO_TEST_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x198019E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_GUEST_FUNC_OFFSET UNITYSDK_OFFSET(0x197FFDC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET UNITYSDK_OFFSET(0x197FD960)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SHOW_CLOSE_BTN_OFFSET UNITYSDK_OFFSET(0x197FFE50)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET UNITYSDK_OFFSET(0x197FCB00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_VERIFY_EMAIL_OFFSET UNITYSDK_OFFSET(0x19801850)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x197FE810)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NET_GET_HTTPDNS_CONFIG_OFFSET UNITYSDK_OFFSET(0x19802E30)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CHECK_CUSTOM_POP_NOTICE_AND_RED_POINT_OFFSET UNITYSDK_OFFSET(0x19800990)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_CUSTOM_NOTICE_OFFSET UNITYSDK_OFFSET(0x198007C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_NOTICE_OFFSET UNITYSDK_OFFSET(0x19800560)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET UNITYSDK_OFFSET(0x19801ED0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_NOTICE_OFFSET UNITYSDK_OFFSET(0x19800730)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x19800840)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET UNITYSDK_OFFSET(0x198004D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET UNITYSDK_OFFSET(0x19801DC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x198005E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x197F9C60)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x197F9ED0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x197FA1E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDOWNLOADNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x197FA280)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x197FA260)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x19802020)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x197FA440)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_SETHTTPSERVERENABLE_OFFSET UNITYSDK_OFFSET(0x197FA2C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_START_OFFSET UNITYSDK_OFFSET(0x197FA160)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x198033A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x198038D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_UGC_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x19803B60)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_DO_ACTION_OFFSET UNITYSDK_OFFSET(0x197FC720)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_MANUALLY_SHOW_OFFSET UNITYSDK_OFFSET(0x197FC820)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_REGISTER_OFFSET UNITYSDK_OFFSET(0x197FC7A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x19802DA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x19802D10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_GET_APP_AVAILABLE_MEM_OFFSET UNITYSDK_OFFSET(0x198031E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x19803220)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_RELEASE_OFFSET UNITYSDK_OFFSET(0x19803230)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_GET_RUNTIME_MEM_OFFSET UNITYSDK_OFFSET(0x198031A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_LOAD_URL_OFFSET UNITYSDK_OFFSET(0x19802180)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_CLOSE_BUTTON_TYPE_OFFSET UNITYSDK_OFFSET(0x198024C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_ENABLE_OFFSET UNITYSDK_OFFSET(0x198022C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x19802420)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_TYPE_OFFSET UNITYSDK_OFFSET(0x19802380)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_LINEAR_OFFSET UNITYSDK_OFFSET(0x19802270)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_USERAGENT_OFFSET UNITYSDK_OFFSET(0x19802210)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19804EF0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x19804EA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 20011;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_thirdpartyType()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x9F90);
		}
		static ::System::String** StaticGet_traceId()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x9F98);
		}
		static ::System::Type** StaticGet_miHoYoDll()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x9FA0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x9FA8);
		}
		static ::System::String** StaticGet_deferredDeepLink()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x9FB0);
		}
		static ::System::String** StaticGet_authTicket()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x9FB8);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x9FC0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x9FC8);
		}
		static ::System::Boolean* StaticGet_isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x44C0);
		}
		static ::System::Boolean* StaticGet_couldLogin()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x44C1);
		}
		static ::System::Boolean* StaticGet_sm_bNeedUpdateNativeConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x44C2);
		}
		static ::MiHoYo::SDK::SubChannelType* StaticGet_subChannel()
		{
			return (::MiHoYo::SDK::SubChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x44C4);
		}
		static ::System::Boolean* StaticGet_isSetEnv()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x44C8);
		}
		static ::System::Boolean* StaticGet_sm_bNeedSyncConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x44C9);
		}
		static ::MiHoYo::SDK::ChannelType* StaticGet_channel()
		{
			return (::MiHoYo::SDK::ChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x44CC);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_AWAKE_OFFSET))(this);
		}

		static ::System::Void InitAuthParameter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INITAUTHPARAMETER_OFFSET))();
		}

		static ::System::String* GetDeferredDeeplink()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_GETDEFERREDDEEPLINK_OFFSET))();
		}

		::System::Void OnApplicationFocus(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONFOCUS_OFFSET))(this, focus);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnNotificationCallback(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET))(this, message);
		}

		::System::Void OnDownloadNotification(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDOWNLOADNOTIFICATION_OFFSET))(this, message);
		}

		::System::Void AddInputField(::UnityEngine::UI::InputField* inputField)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET))(this, inputField);
		}

		static ::System::Void SetHttpServerEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_SETHTTPSERVERENABLE_OFFSET))(enable);
		}

		static ::System::Boolean CheckBlackInvokeList(::System::String* funcName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKBLACKINVOKELIST_OFFSET))(funcName);
		}

		static ::System::String* SDKInvoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_SDKINVOKE_OFFSET))(funcName, args, callback);
		}

		static ::System::Void Init(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INIT_OFFSET))(callback);
		}

		static ::System::String* all_set_env(::System::String* env)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET))(env);
		}

		static ::System::String* all_set_env_and_gamebiz(::System::String* dataString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET))(dataString);
		}

		static ::System::String* all_set_volume(::System::String* volume)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_VOLUME_OFFSET))(volume);
		}

		static ::System::String* info_set_game_volume(::System::String* volumeInfoStr)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VOLUME_OFFSET))(volumeInfoStr);
		}

		static ::System::String* login_login(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET))(callback);
		}

		static ::System::Void ui_plugin_do_action(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_DO_ACTION_OFFSET))(strArgs, callback);
		}

		static ::System::Void ui_plugin_register(::System::String* strArgs)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_REGISTER_OFFSET))(strArgs);
		}

		static ::System::Void ui_plugin_manually_show(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_MANUALLY_SHOW_OFFSET))(strArgs, callback);
		}

		static ::System::String* login_logout(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET))(callback);
		}

		static ::System::String* login_logout_without_confirm(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET))(callback);
		}

		static ::System::String* login_switch_role(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET))(callback);
		}

		static ::System::String* login_exit(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_EXIT_OFFSET))(callback);
		}

		static ::System::String* info_set_combo_config(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_COMBO_CONFIG_OFFSET))(jsonString);
		}

		static ::System::String* info_set_channel_config(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_CHANNEL_CONFIG_OFFSET))(jsonString);
		}

		static ::System::String* login_set_server_id(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET))(value);
		}

		static ::System::String* info_set_steam_id(::System::String* steamID)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_STEAM_ID_OFFSET))(steamID);
		}

		static ::System::String* login_bind(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_OFFSET))(callback);
		}

		static ::System::String* login_enter_game(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET))(jsonString);
		}

		static ::System::String* login_will_enter_game(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET))(jsonString, callback);
		}

		static ::System::String* login_create_role(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET))(jsonString);
		}

		static ::System::String* login_level_up(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET))(jsonString);
		}

		static ::System::String* login_has_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET))();
		}

		static ::System::String* login_open_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET))();
		}

		static ::System::String* login_has_user_center()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET))();
		}

		static ::System::String* login_open_user_center(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET))(callback);
		}

		static ::System::String* login_close_user_center()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_USER_CENTER_OFFSET))();
		}

		static ::System::String* login_has_customer_service()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET))();
		}

		static ::System::String* all_set_device_id(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET))(value);
		}

		static ::System::String* info_get_device_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET))();
		}

		static ::System::String* info_get_device_fingerprint()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_FINGERPRINT_OFFSET))();
		}

		static ::System::String* login_get_account_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET))();
		}

		static ::System::String* all_set_language(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET))(value);
		}

		static ::System::String* all_get_language()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_GET_LANGUAGE_OFFSET))();
		}

		static ::System::String* login_set_guest_func(::System::String* flag)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_GUEST_FUNC_OFFSET))(flag);
		}

		static ::System::String* login_set_show_close_btn(::System::String* content)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SHOW_CLOSE_BTN_OFFSET))(content);
		}

		static ::System::String* info_get_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* info_get_region_multiple_language(::System::String* code)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET))(code);
		}

		static ::System::String* login_pay(::System::String* jsonString, ::System::Action_1<::System::String*>* externalCallback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_PAY_OFFSET))(jsonString, externalCallback);
		}

		static ::System::String* login_close_pay()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_PAY_OFFSET))();
		}

		static ::System::String* login_has_scan_func()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET))();
		}

		static ::System::String* notice_show_notice(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET))(jsonString, callback);
		}

		static ::System::String* notice_close_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_NOTICE_OFFSET))();
		}

		static ::System::String* notice_show_pop_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET))();
		}

		static ::System::String* notice_show_custom_notice(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_NOTICE_OFFSET))(jsonString, callback);
		}

		static ::System::String* notice_close_custom_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_CUSTOM_NOTICE_OFFSET))();
		}

		static ::System::String* notice_show_custom_pop_notice(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_POP_NOTICE_OFFSET))(jsonString, callback);
		}

		static ::System::String* notice_check_custom_pop_notice_and_red_point(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CHECK_CUSTOM_POP_NOTICE_AND_RED_POINT_OFFSET))(jsonString, callback);
		}

		static ::System::String* login_get_price_tier(::System::String* currency, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET))(currency, callback);
		}

		static ::System::String* login_get_product_list(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET))(jsonString, callback);
		}

		static ::System::String* login_list_goods(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET))(jsonString, callback);
		}

		static ::System::String* info_set_game_parameters(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET))(jsonString);
		}

		static ::System::String* login_is_account_bind_mobile()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET))();
		}

		static ::System::String* login_is_account_real_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET))();
		}

		static ::System::String* login_get_bind_state()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET))();
		}

		static ::System::Void login_bind_email(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_EMAIL_OFFSET))(callback);
		}

		static ::System::Void login_bind_mobile(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_MOBILE_OFFSET))(callback);
		}

		static ::System::Void login_bind_real_name(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_REAL_NAME_OFFSET))(callback);
		}

		static ::System::Void login_verify_email(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_VERIFY_EMAIL_OFFSET))(callback);
		}

		static ::System::String* login_set_account(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET))(jsonString);
		}

		static ::System::String* login_close()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_OFFSET))();
		}

		static ::System::String* login_set_auto_test_account(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_AUTO_TEST_ACCOUNT_OFFSET))(jsonString);
		}

		static ::System::String* login_get_asterisk_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET))();
		}

		static ::System::String* login_open_protocol_webview(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET))(jsonString);
		}

		static ::System::String* launch_open_url(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET))(url);
		}

		static ::System::String* notice_show_pop_image(::System::String* animation)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET))(animation);
		}

		static ::System::String* notice_set_notice_url(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET))(url);
		}

		static ::System::String* info_set_game_version(::System::String* version)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET))(version);
		}

		static ::System::String* report_set_info(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET))(jsonString);
		}

		static ::System::String* info_get_sub_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* web_load_url(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_LOAD_URL_OFFSET))(url);
		}

		static ::System::String* web_set_useragent(::System::String* content)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_USERAGENT_OFFSET))(content);
		}

		static ::System::String* launch_get_disk_free_space()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET))();
		}

		static ::System::String* web_set_linear(::System::String* linear)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_LINEAR_OFFSET))(linear);
		}

		static ::System::String* web_set_joypad_enable(::System::String* enable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_ENABLE_OFFSET))(enable);
		}

		static ::System::String* web_set_joypad_type(::System::String* joyPadType)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_TYPE_OFFSET))(joyPadType);
		}

		static ::System::String* web_set_joypad_exchange(::System::String* joyPadExchange)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_EXCHANGE_OFFSET))(joyPadExchange);
		}

		static ::System::String* web_set_joypad_close_button_type(::System::String* closeButton)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_CLOSE_BUTTON_TYPE_OFFSET))(closeButton);
		}

		static ::System::String* info_get_cps()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET))();
		}

		static ::System::String* info_get_uapc()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_UAPC_OFFSET))();
		}

		static ::System::String* launch_show_user_agreement(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_OFFSET))(callback);
		}

		static ::System::String* launch_show_user_agreement_with_parameters(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_OFFSET))(jsonString, callback);
		}

		static ::System::String* launch_show_user_agreement_with_parameters_compliance(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_COMPLIANCE_OFFSET))(jsonString, callback);
		}

		static ::System::String* info_set_domain_prefix(::System::String* domain_prefix)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_DOMAIN_PREFIX_OFFSET))(domain_prefix);
		}

		static ::System::String* launch_enable_auto_test(::System::String* enable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET))(enable);
		}

		static ::System::String* launch_enable_ui_auto_test(::System::String* enable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_UI_AUTO_TEST_OFFSET))(enable);
		}

		static ::System::Boolean CheckInit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKINIT_OFFSET))();
		}

		static ::System::String* get_thread_count(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_THREAD_COUNT_OFFSET))(callback);
		}

		static ::System::String* get_memory_size(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_MEMORY_SIZE_OFFSET))(callback);
		}

		static ::System::String* watermark_set_enable(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET))(args);
		}

		static ::System::String* watermark_set_config(::System::String* jsonStrings)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET))(jsonStrings);
		}

		static ::System::String* net_get_httpdns_config(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NET_GET_HTTPDNS_CONFIG_OFFSET))(args);
		}

		static ::System::String* get_disk_type(::System::String* drive)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_DISK_TYPE_OFFSET))(drive);
		}

		static ::System::Void info_web_view_animation_enable(::System::String* enable)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_ANIMATION_ENABLE_OFFSET))(enable);
		}

		static ::System::Void info_web_view_joypad_close_enable(::System::String* enable)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_JOYPAD_CLOSE_ENABLE_OFFSET))(enable);
		}

		static ::System::String* camera_set_ui_camera(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET))(jsonString);
		}

		static ::System::String* web_get_runtime_mem(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_GET_RUNTIME_MEM_OFFSET))(jsonString);
		}

		static ::System::String* webview_get_app_available_mem(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_GET_APP_AVAILABLE_MEM_OFFSET))(jsonString);
		}

		static ::System::Void webview_mem_alloc(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_ALLOC_OFFSET))(jsonString);
		}

		static ::System::Void webview_mem_release(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_RELEASE_OFFSET))(jsonString);
		}

		static ::System::String* info_get_deferred_deeplink()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEFERRED_DEEPLINK_OFFSET))();
		}

		static ::System::Void info_clear_deferred_deeplink()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_CLEAR_DEFERRED_DEEPLINK_OFFSET))();
		}

		static ::System::String* launch_close_all_ui(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET))(args, callback);
		}

		static ::System::String* ugc_set_token(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET))(args, callback);
		}

		static ::System::String* ugc_show_bbs_agreement(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET))(args, callback);
		}

		static ::System::String* ugc_show_ugc_protocol(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_UGC_PROTOCOL_OFFSET))(args, callback);
		}

		static ::System::Void inner_sdk_inner_report_event(::System::String* args)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_REPORT_EVENT_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_lang(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_LANG_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_user_id(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_USER_ID_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_gamebiz(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_GAMEBIZ_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_region(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_REGION_OFFSET))(args);
		}

		static ::System::String* inner_sdk_inner_get_env(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_ENV_OFFSET))(args);
		}

		static ::System::String* login_check_device_limit(::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CHECK_DEVICE_LIMIT_OFFSET))(args, callback);
		}

		static ::System::String* info_get_client_type()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CLIENT_TYPE_OFFSET))();
		}

		static ::System::Boolean EnableNativeDelegate(::System::Boolean bForceEnterGame)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ENABLENATIVEDELEGATE_OFFSET))(bForceEnterGame);
		}
	};
}
