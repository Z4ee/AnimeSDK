#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ChannelType.h"
#include "unitysdk/MiHoYo/SDK/ClientType.h"
#include "unitysdk/MiHoYo/SDK/PS_IssuerID.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_PS_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x183B1720)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x183B4A40)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x183B28D0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x183B27D0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x183B4AF0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x183B1200)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET UNITYSDK_OFFSET(0x183B71B0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x183B2E10)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_DESTORYTROPHYCONTEXT_OFFSET UNITYSDK_OFFSET(0x183B7250)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_GETINITSTATUS_OFFSET UNITYSDK_OFFSET(0x183B2770)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_ACCOUNT_ID_BY_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x183B5880)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_ONLINE_ID_LIST_BY_ACCOUNT_ID_LIST_OFFSET UNITYSDK_OFFSET(0x183B58D0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_PS_ACCOUNT_COUNTRY_OFFSET UNITYSDK_OFFSET(0x183B3440)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_PS_ACCOUNT_ID_OFFSET UNITYSDK_OFFSET(0x183B33C0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_PS_BLOCK_LIST_OFFSET UNITYSDK_OFFSET(0x183B5E90)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_PS_FRIEND_LIST_OFFSET UNITYSDK_OFFSET(0x183B5E40)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_PS_ONLINE_ID_OFFSET UNITYSDK_OFFSET(0x183B3410)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_PS_USER_ID_OFFSET UNITYSDK_OFFSET(0x183B3360)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_HIDE_PS_STORE_ICON_OFFSET UNITYSDK_OFFSET(0x183B54C0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x183B3260)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET UNITYSDK_OFFSET(0x183B62D0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x183B3210)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_GET_GAME_BIZ_OFFSET UNITYSDK_OFFSET(0x183B5410)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x183B32C0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x183B53A0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x183B5740)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET UNITYSDK_OFFSET(0x183B61F0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x183B1FB0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_INIT_PS_TROPHY_OFFSET UNITYSDK_OFFSET(0x183B55E0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x183B62E0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET UNITYSDK_OFFSET(0x183B35F0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET UNITYSDK_OFFSET(0x183B48E0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x183B3CD0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET UNITYSDK_OFFSET(0x183B3120)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET UNITYSDK_OFFSET(0x183B3130)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET UNITYSDK_OFFSET(0x183B6110)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET UNITYSDK_OFFSET(0x183B43F0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET UNITYSDK_OFFSET(0x183B46F0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET UNITYSDK_OFFSET(0x183B4A20)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET UNITYSDK_OFFSET(0x183B49E0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET UNITYSDK_OFFSET(0x183B5FC0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x183B5CE0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x183B5FE0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x183B6070)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET UNITYSDK_OFFSET(0x183B48F0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET UNITYSDK_OFFSET(0x183B31A0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET UNITYSDK_OFFSET(0x183B2C90)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET UNITYSDK_OFFSET(0x183B2F20)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET UNITYSDK_OFFSET(0x183B2FA0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET UNITYSDK_OFFSET(0x183B4A00)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET UNITYSDK_OFFSET(0x183B3570)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x183B5DC0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_PAY_OFFSET UNITYSDK_OFFSET(0x183B4B60)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x183B6190)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET UNITYSDK_OFFSET(0x183B3AB0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_SHOW_PRIVACY_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x183B34F0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_SHOW_USER_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x183B3470)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET UNITYSDK_OFFSET(0x183B3020)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x183B3B40)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET UNITYSDK_OFFSET(0x183B5C30)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET UNITYSDK_OFFSET(0x183B3630)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET UNITYSDK_OFFSET(0x183B5920)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x183B3930)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x183B7310)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x183B16F0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_LIST_OFFSET UNITYSDK_OFFSET(0x183B6580)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_OFFSET UNITYSDK_OFFSET(0x183B6520)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_END_OFFSET UNITYSDK_OFFSET(0x183B6460)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_DESTORY_OFFSET UNITYSDK_OFFSET(0x183B63C0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x183B6360)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_RESUME_OFFSET UNITYSDK_OFFSET(0x183B65E0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_START_OFFSET UNITYSDK_OFFSET(0x183B6400)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_TERMINATE_OFFSET UNITYSDK_OFFSET(0x183B64C0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_DLC_PAY_OFFSET UNITYSDK_OFFSET(0x183B6A00)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_GAMEINTENT_DESTORY_OFFSET UNITYSDK_OFFSET(0x183B66A0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_GAMEINTENT_INIT_OFFSET UNITYSDK_OFFSET(0x183B6640)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_GET_COMMUNICATION_RESTRICTION_STATUS_OFFSET UNITYSDK_OFFSET(0x183B70D0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_HAS_PREMIUM_OFFSET UNITYSDK_OFFSET(0x183B67E0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_NOTIFY_PREMIUM_FEATURE_OFFSET UNITYSDK_OFFSET(0x183B7080)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_PREMIUM_PAY_OFFSET UNITYSDK_OFFSET(0x183B6840)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET UNITYSDK_OFFSET(0x183B66E0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x183B6730)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_REGISTER_NP_STATE_OFFSET UNITYSDK_OFFSET(0x183B7120)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET UNITYSDK_OFFSET(0x183B6770)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET UNITYSDK_OFFSET(0x183B67B0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_UNREGISTER_NP_STATE_OFFSET UNITYSDK_OFFSET(0x183B7170)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_REGISTER_PS_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x183B5F10)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_REGISTER_PS_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x183B5ED0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x183B5320)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x183B1750)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_SET_PS_CLIENT_ID_OFFSET UNITYSDK_OFFSET(0x183B3320)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_SET_PS_TROPHY_OFFSET UNITYSDK_OFFSET(0x183B5500)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_SHOW_EMPTY_STORE_DIALOG_OFFSET UNITYSDK_OFFSET(0x183B56A0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_SHOW_PS_STORE_ICON_OFFSET UNITYSDK_OFFSET(0x183B5470)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_SHOW_SYSTEM_MESSAGE_DIALOG_OFFSET UNITYSDK_OFFSET(0x183B56F0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_UNREGISTER_PS_BLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x183B5F90)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_UNREGISTER_PS_FRIEND_UPDATE_OFFSET UNITYSDK_OFFSET(0x183B5F50)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x183B12B0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x183B73D0)
#define MIHOYO_SDK_PS_MIHOYOSDKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x183B73C0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 8553;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x178F0);
		}
		static ::System::Type** StaticGet_miHoYoDll()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x178F8);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x17900);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x17908);
		}
		static ::MiHoYo::SDK::ClientType* StaticGet_clientType()
		{
			return (::MiHoYo::SDK::ClientType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x81C0);
		}
		static ::MiHoYo::SDK::ChannelType* StaticGet_channel()
		{
			return (::MiHoYo::SDK::ChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x81C4);
		}
		static ::MiHoYo::SDK::PS_IssuerID* StaticGet_issuerId()
		{
			return (::MiHoYo::SDK::PS_IssuerID*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x81C8);
		}
		static ::System::Boolean* StaticGet_isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x81CC);
		}
		static ::System::Boolean* StaticGet_isBackground()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x81CD);
		}
		static ::System::Boolean* StaticGet_isSetEnv()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x81CE);
		}
		static ::System::Int32* StaticGet_trophyContext()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x81D0);
		}
		static ::MiHoYo::SDK::SubChannelType* StaticGet_subChannel()
		{
			return (::MiHoYo::SDK::SubChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x81D4);
		}
		::System::Boolean isPSBackground; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_UPDATE_OFFSET))(this);
		}

		::System::Void OnNotificationCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AddInputField(::UnityEngine::UI::InputField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET))(this, a1);
		}

		static ::System::String* SDKInvoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_SDKINVOKE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Init(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_INIT_OFFSET))(a1);
		}

		static ::System::Boolean GetInitStatus()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_GETINITSTATUS_OFFSET))();
		}

		static ::System::String* all_set_env(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET))(a1);
		}

		static ::System::String* all_set_env_and_gamebiz(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET))(a1);
		}

		static ::System::String* login_login(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET))(a1);
		}

		static ::System::String* login_logout(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET))(a1);
		}

		static ::System::String* login_logout_without_confirm(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET))(a1);
		}

		static ::System::String* login_switch_role(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET))(a1);
		}

		static ::System::String* login_get_account_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET))();
		}

		static ::System::String* login_get_asterisk_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET))();
		}

		static ::System::String* login_list_goods(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET))(a1, a2);
		}

		static ::System::String* info_get_device_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET))();
		}

		static ::System::String* info_get_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* info_get_region_multiple_language(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET))(a1);
		}

		static ::System::String* set_ps_client_id(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_SET_PS_CLIENT_ID_OFFSET))(a1);
		}

		static ::System::String* get_ps_user_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_PS_USER_ID_OFFSET))();
		}

		static ::System::String* get_ps_account_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_PS_ACCOUNT_ID_OFFSET))();
		}

		static ::System::String* get_ps_online_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_PS_ONLINE_ID_OFFSET))();
		}

		static ::System::String* get_ps_account_country()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_PS_ACCOUNT_COUNTRY_OFFSET))();
		}

		static ::System::String* login_show_user_agreement()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_SHOW_USER_AGREEMENT_OFFSET))();
		}

		static ::System::String* login_show_privacy_protocol()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_SHOW_PRIVACY_PROTOCOL_OFFSET))();
		}

		static ::System::String* login_open_protocol_webview(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET))(a1);
		}

		static ::System::String* launch_open_url(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET))(a1);
		}

		static ::System::String* notice_show_notice(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET))(a1);
		}

		static ::System::String* notice_show_pop_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET))();
		}

		static ::System::String* login_set_server_id(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET))(a1);
		}

		static ::System::String* login_will_enter_game(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET))(a1, a2);
		}

		static ::System::String* login_enter_game(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET))(a1);
		}

		static ::System::String* login_get_price_tier(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET))(a1, a2);
		}

		static ::System::String* login_get_product_list(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET))(a1, a2);
		}

		static ::System::String* login_create_role(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET))(a1);
		}

		static ::System::String* login_level_up(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET))(a1);
		}

		static ::System::String* login_has_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET))();
		}

		static ::System::String* login_open_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET))();
		}

		static ::System::String* login_has_customer_service()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET))();
		}

		static ::System::String* all_set_device_id(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET))(a1);
		}

		static ::System::String* all_set_language(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET))(a1);
		}

		static ::System::String* login_pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_PAY_OFFSET))(a1, a2);
		}

		static ::System::String* report_set_info(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET))(a1);
		}

		static ::System::String* info_get_sub_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* info_get_game_biz()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_GET_GAME_BIZ_OFFSET))();
		}

		static ::System::String* show_ps_store_icon(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_SHOW_PS_STORE_ICON_OFFSET))(a1);
		}

		static ::System::String* hide_ps_store_icon()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_HIDE_PS_STORE_ICON_OFFSET))();
		}

		static ::System::String* set_ps_trophy(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_SET_PS_TROPHY_OFFSET))(a1);
		}

		static ::System::String* init_ps_trophy()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_INIT_PS_TROPHY_OFFSET))();
		}

		static ::System::String* show_empty_store_dialog(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_SHOW_EMPTY_STORE_DIALOG_OFFSET))(a1);
		}

		static ::System::String* show_system_message_dialog(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_SHOW_SYSTEM_MESSAGE_DIALOG_OFFSET))(a1, a2);
		}

		static ::System::String* info_set_game_parameters(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET))(a1);
		}

		static ::System::String* get_account_id_by_online_id(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_ACCOUNT_ID_BY_ONLINE_ID_OFFSET))(a1, a2);
		}

		static ::System::String* get_online_id_list_by_account_id_list(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_ONLINE_ID_LIST_BY_ACCOUNT_ID_LIST_OFFSET))(a1, a2);
		}

		static ::System::String* notice_show_pop_image(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET))(a1);
		}

		static ::System::String* notice_set_notice_url(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET))(a1);
		}

		static ::System::String* login_has_user_center()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET))();
		}

		static ::System::String* login_open_user_center()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET))();
		}

		static ::System::String* get_ps_friend_list(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_PS_FRIEND_LIST_OFFSET))(a1);
		}

		static ::System::String* get_ps_block_list(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_GET_PS_BLOCK_LIST_OFFSET))(a1);
		}

		static ::System::String* register_ps_friend_update(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_REGISTER_PS_FRIEND_UPDATE_OFFSET))(a1);
		}

		static ::System::String* register_ps_block_update(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_REGISTER_PS_BLOCK_UPDATE_OFFSET))(a1);
		}

		static ::System::String* unregister_ps_friend_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_UNREGISTER_PS_FRIEND_UPDATE_OFFSET))();
		}

		static ::System::String* unregister_ps_block_update()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_UNREGISTER_PS_BLOCK_UPDATE_OFFSET))();
		}

		static ::System::String* login_has_scan_func()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET))();
		}

		static ::System::String* login_is_account_bind_mobile()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET))();
		}

		static ::System::String* login_is_account_real_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET))();
		}

		static ::System::String* login_get_bind_state()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET))();
		}

		static ::System::String* login_set_account(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET))(a1);
		}

		static ::System::String* info_set_game_version(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET))(a1);
		}

		static ::System::String* info_get_cps()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET))();
		}

		static ::System::String* launch_enable_auto_test(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET))(a1);
		}

		static ::System::String* ps_activity_manager_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_INIT_OFFSET))();
		}

		static ::System::String* ps_activity_manager_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_MANAGER_DESTORY_OFFSET))();
		}

		static ::System::String* ps_activity_start(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_START_OFFSET))(a1);
		}

		static ::System::String* ps_activity_end(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_END_OFFSET))(a1);
		}

		static ::System::String* ps_activity_terminate()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_TERMINATE_OFFSET))();
		}

		static ::System::String* ps_activity_change_availability(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_OFFSET))(a1);
		}

		static ::System::String* ps_activity_change_availability_list(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_CHANGE_AVAILABILITY_LIST_OFFSET))(a1);
		}

		static ::System::String* ps_activity_resume(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_ACTIVITY_RESUME_OFFSET))(a1);
		}

		static ::System::String* ps_gameintent_init()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_GAMEINTENT_INIT_OFFSET))();
		}

		static ::System::String* ps_gameintent_destory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_GAMEINTENT_DESTORY_OFFSET))();
		}

		static ::System::String* ps_register_gameintent_get_activity_id(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET))(a1);
		}

		static ::System::String* ps_register_gameintent_get_session_id(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_REGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET))(a1);
		}

		static ::System::String* ps_unregister_gameintent_get_activity_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_ACTIVITY_ID_OFFSET))();
		}

		static ::System::String* ps_unregister_gameintent_get_session_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_UNREGISTER_GAMEINTENT_GET_SESSION_ID_OFFSET))();
		}

		static ::System::String* ps_has_premium()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_HAS_PREMIUM_OFFSET))();
		}

		static ::System::String* ps_premium_pay(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_PREMIUM_PAY_OFFSET))(a1);
		}

		static ::System::String* ps_dlc_pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_DLC_PAY_OFFSET))(a1, a2);
		}

		static ::System::String* ps_notify_premium_feature(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_NOTIFY_PREMIUM_FEATURE_OFFSET))(a1);
		}

		static ::System::String* ps_get_communication_restriction_status(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_GET_COMMUNICATION_RESTRICTION_STATUS_OFFSET))(a1);
		}

		static ::System::String* ps_register_np_state(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_REGISTER_NP_STATE_OFFSET))(a1);
		}

		static ::System::String* ps_unregister_np_state()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_PS_UNREGISTER_NP_STATE_OFFSET))();
		}

		static ::System::Boolean CheckInit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_CHECKINIT_OFFSET))();
		}

		static ::System::String* camera_set_ui_camera(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET))(a1);
		}

		::System::Void DestoryTrophyContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_DESTORYTROPHYCONTEXT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_MIHOYOSDKDLL_ONDESTROY_OFFSET))(this);
		}
	};
}
