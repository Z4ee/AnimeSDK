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

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x17750A10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x177563D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x17755E70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x177524E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x17752420)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x17756010)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x17752920)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1774FE90)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET UNITYSDK_OFFSET(0x177595D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKBLACKINVOKELIST_OFFSET UNITYSDK_OFFSET(0x17750AA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x17753060)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ENABLENATIVEDELEGATE_OFFSET UNITYSDK_OFFSET(0x17759880)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GETDEFERREDDEEPLINK_OFFSET UNITYSDK_OFFSET(0x1774FF90)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_DISK_TYPE_OFFSET UNITYSDK_OFFSET(0x17759480)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_MEMORY_SIZE_OFFSET UNITYSDK_OFFSET(0x177591C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_THREAD_COUNT_OFFSET UNITYSDK_OFFSET(0x17759080)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_CLEAR_DEFERRED_DEEPLINK_OFFSET UNITYSDK_OFFSET(0x177596E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x17756600)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET UNITYSDK_OFFSET(0x17758BE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEFERRED_DEEPLINK_OFFSET UNITYSDK_OFFSET(0x177596B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_FINGERPRINT_OFFSET UNITYSDK_OFFSET(0x17755F70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x17755F20)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x17756660)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x17758840)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_UAPC_OFFSET UNITYSDK_OFFSET(0x17758CA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_CHANNEL_CONFIG_OFFSET UNITYSDK_OFFSET(0x17753CD0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_COMBO_CONFIG_OFFSET UNITYSDK_OFFSET(0x177535E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_DOMAIN_PREFIX_OFFSET UNITYSDK_OFFSET(0x17758EB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x17757990)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET UNITYSDK_OFFSET(0x177586E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VOLUME_OFFSET UNITYSDK_OFFSET(0x17752970)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_STEAM_ID_OFFSET UNITYSDK_OFFSET(0x177543B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_ANIMATION_ENABLE_OFFSET UNITYSDK_OFFSET(0x177594B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_JOYPAD_CLOSE_ENABLE_OFFSET UNITYSDK_OFFSET(0x17759540)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INITAUTHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1774FF00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x17751500)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_ENV_OFFSET UNITYSDK_OFFSET(0x1775A810)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x1775A700)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_LANG_OFFSET UNITYSDK_OFFSET(0x1775A610)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_REGION_OFFSET UNITYSDK_OFFSET(0x1775A7C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_USER_ID_OFFSET UNITYSDK_OFFSET(0x1775A6B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_REPORT_EVENT_OFFSET UNITYSDK_OFFSET(0x17759F10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET UNITYSDK_OFFSET(0x17759720)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x17758EC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_UI_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x17758F40)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET UNITYSDK_OFFSET(0x17758960)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET UNITYSDK_OFFSET(0x177583E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x17758D60)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_COMPLIANCE_OFFSET UNITYSDK_OFFSET(0x17758E40)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x17758DC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_EMAIL_OFFSET UNITYSDK_OFFSET(0x17757EA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x17757F20)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_OFFSET UNITYSDK_OFFSET(0x17754460)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x17757FA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_OFFSET UNITYSDK_OFFSET(0x17758100)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_PAY_OFFSET UNITYSDK_OFFSET(0x17756940)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x17755BB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET UNITYSDK_OFFSET(0x17755560)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x177544C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_EXIT_OFFSET UNITYSDK_OFFSET(0x17753580)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET UNITYSDK_OFFSET(0x17756000)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET UNITYSDK_OFFSET(0x17758210)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET UNITYSDK_OFFSET(0x17757BB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET UNITYSDK_OFFSET(0x177573A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET UNITYSDK_OFFSET(0x17757430)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET UNITYSDK_OFFSET(0x17755E50)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET UNITYSDK_OFFSET(0x17755660)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET UNITYSDK_OFFSET(0x17756E70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x177556A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x17757AD0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x17757B40)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET UNITYSDK_OFFSET(0x17755570)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET UNITYSDK_OFFSET(0x17757920)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET UNITYSDK_OFFSET(0x17752DA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET UNITYSDK_OFFSET(0x177532C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET UNITYSDK_OFFSET(0x177533F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET UNITYSDK_OFFSET(0x17755680)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET UNITYSDK_OFFSET(0x17758380)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x17755940)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_PAY_OFFSET UNITYSDK_OFFSET(0x177566C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x177580A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_AUTO_TEST_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x17758180)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_GUEST_FUNC_OFFSET UNITYSDK_OFFSET(0x17756420)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET UNITYSDK_OFFSET(0x17754210)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SHOW_CLOSE_BTN_OFFSET UNITYSDK_OFFSET(0x17756510)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET UNITYSDK_OFFSET(0x17753520)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_VERIFY_EMAIL_OFFSET UNITYSDK_OFFSET(0x17758020)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x17754EE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NET_GET_HTTPDNS_CONFIG_OFFSET UNITYSDK_OFFSET(0x177593D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CHECK_CUSTOM_POP_NOTICE_AND_RED_POINT_OFFSET UNITYSDK_OFFSET(0x17757340)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_CUSTOM_NOTICE_OFFSET UNITYSDK_OFFSET(0x17757150)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_NOTICE_OFFSET UNITYSDK_OFFSET(0x17756F00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET UNITYSDK_OFFSET(0x17758630)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_NOTICE_OFFSET UNITYSDK_OFFSET(0x177570E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x177571B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET UNITYSDK_OFFSET(0x17756E90)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET UNITYSDK_OFFSET(0x17758550)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x17756F60)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x17750380)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x177505C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17750980)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDOWNLOADNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x177509F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x177509D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x177587C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x17750B40)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_SETHTTPSERVERENABLE_OFFSET UNITYSDK_OFFSET(0x17750A30)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_START_OFFSET UNITYSDK_OFFSET(0x17750930)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x177597C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x17759B50)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_UGC_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x17759D30)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_DO_ACTION_OFFSET UNITYSDK_OFFSET(0x17753140)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_MANUALLY_SHOW_OFFSET UNITYSDK_OFFSET(0x17753240)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_REGISTER_OFFSET UNITYSDK_OFFSET(0x177531C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x17759370)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x17759310)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_GET_APP_AVAILABLE_MEM_OFFSET UNITYSDK_OFFSET(0x17759680)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x17759690)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_RELEASE_OFFSET UNITYSDK_OFFSET(0x177596A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_GET_RUNTIME_MEM_OFFSET UNITYSDK_OFFSET(0x17759670)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_LOAD_URL_OFFSET UNITYSDK_OFFSET(0x177588B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_CLOSE_BUTTON_TYPE_OFFSET UNITYSDK_OFFSET(0x17758B80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_ENABLE_OFFSET UNITYSDK_OFFSET(0x177589E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x17758B00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_TYPE_OFFSET UNITYSDK_OFFSET(0x17758A80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_LINEAR_OFFSET UNITYSDK_OFFSET(0x17758990)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_USERAGENT_OFFSET UNITYSDK_OFFSET(0x17758930)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1775A8C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1775A8B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 8184;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_traceId()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x19C90);
		}
		static ::System::Type** StaticGet_miHoYoDll()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x19C98);
		}
		static ::System::String** StaticGet_authTicket()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x19CA0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x19CA8);
		}
		static ::System::String** StaticGet_thirdpartyType()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x19CB0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x19CB8);
		}
		static ::System::String** StaticGet_deferredDeepLink()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x19CC0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x19CC8);
		}
		static ::System::Boolean* StaticGet_sm_bNeedUpdateNativeConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x6DD0);
		}
		static ::MiHoYo::SDK::SubChannelType* StaticGet_subChannel()
		{
			return (::MiHoYo::SDK::SubChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x6DD4);
		}
		static ::MiHoYo::SDK::ChannelType* StaticGet_channel()
		{
			return (::MiHoYo::SDK::ChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x6DD8);
		}
		static ::System::Boolean* StaticGet_isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x6DDC);
		}
		static ::System::Boolean* StaticGet_isSetEnv()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x6DDD);
		}
		static ::System::Boolean* StaticGet_sm_bNeedSyncConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x6DDE);
		}
		static ::System::Boolean* StaticGet_couldLogin()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x6DDF);
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

		static ::System::Boolean EnableNativeDelegate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ENABLENATIVEDELEGATE_OFFSET))();
		}
	};
}
