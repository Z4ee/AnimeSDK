#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK { class InvokeResponseModel; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ADDACTION_OFFSET UNITYSDK_OFFSET(0x1D3B9C30)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ADDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D3BAAC0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ADDINVORERETURNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D3BC0A0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x1D3BD370)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x1D3BD2C0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D3B9D90)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CHECKFUNCTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D3BC570)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CHECKFUNCTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1D3BB6F0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CHECKPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D3BE4E0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CHECKWATERMARKPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0x1D3BDE20)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_GET_CLIPBOARD_DATA_OFFSET UNITYSDK_OFFSET(0x1D3BDD10)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1D3BD970)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_IME_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D3BE370)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_IME_SHOW_OFFSET UNITYSDK_OFFSET(0x1D3BE2C0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_INVOKE_RETURN_CACHE_ENABLE_OFFSET UNITYSDK_OFFSET(0x1D3BE420)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_SAVE_IMAGE_OFFSET UNITYSDK_OFFSET(0x1D3BDBB0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1D3BDA90)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_SET_GAME_CONTROL_IMU_ENABLE_OFFSET UNITYSDK_OFFSET(0x1D3BDDA0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_SET_LAUNCH_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D3BD960)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_TRANSMIT_DATA_OFFSET UNITYSDK_OFFSET(0x1D3BDC40)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_GETCMDLINEMAP_OFFSET UNITYSDK_OFFSET(0x1D3B9E20)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x1D3BD130)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x1D3BB7C0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET UNITYSDK_OFFSET(0x1D3BDCE0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x1D3BD7C0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET UNITYSDK_OFFSET(0x1D3BE0A0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET UNITYSDK_OFFSET(0x1D3BE100)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x1D3BD890)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_MIDDLEFUNCCHECK_OFFSET UNITYSDK_OFFSET(0x1D3BAB80)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D3BA100)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ONGETINVOKERESPONSE_OFFSET UNITYSDK_OFFSET(0x1D3BC270)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ONINITRESPONSE_OFFSET UNITYSDK_OFFSET(0x1D3BC160)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_SDKINVOKEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D3BB180)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x1D3BB090)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_SHARE_SHARE_OFFSET UNITYSDK_OFFSET(0x1D3BE010)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_START_OFFSET UNITYSDK_OFFSET(0x1D3BA0F0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D3BA110)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1D3BE210)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1D3BE160)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_WHITEFUNCCHECK_OFFSET UNITYSDK_OFFSET(0x1D3BA3F0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3BE5B0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BE560)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 21219;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_actionList()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAEA0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_cachedFuncList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAEA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>** StaticGet_invokeCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAEB0);
		}
		static ::System::Type** StaticGet_miHoYoDll()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAEB8);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAEC0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAEC8);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAED0);
		}
		static ::System::Action_1<::System::String*>** StaticGet_initCallback()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAED8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_whiteFuncList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAEE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_invokeReturnCaches()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAEE8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>** StaticGet_invokeReturnCallbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAEF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_cmdLineMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAEF8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_middleFuncList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xAF00);
		}
		static ::System::Int32* StaticGet_TimeoutCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4710);
		}
		static ::System::Int32* StaticGet_index()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4714);
		}
		static ::System::Int32* StaticGet_loginCallbackIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4718);
		}
		static ::System::Boolean* StaticGet_isCacheEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x471C);
		}
		static ::System::Int32* StaticGet_shareCallbackIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x4720);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL__CCTOR_OFFSET))();
		}

		static ::System::Void AddAction(::System::Action* job)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ADDACTION_OFFSET))(job);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_UPDATE_OFFSET))(this);
		}

		static ::System::Boolean WhiteFuncCheck(::System::String* funcName, ::System::String*& r, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_WHITEFUNCCHECK_OFFSET))(funcName, r, args, callback);
		}

		static ::System::Void MiddleFuncCheck(::System::String* funcName, ::System::String* args)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_MIDDLEFUNCCHECK_OFFSET))(funcName, args);
		}

		static ::System::String* SDKInvoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_SDKINVOKE_OFFSET))(funcName, args, callback);
		}

		static ::System::String* SDKInvokeFunction(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_SDKINVOKEFUNCTION_OFFSET))(funcName, args, callback);
		}

		static ::System::String* InvokeReturn(::System::String* funcName, ::System::String* args)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_INVOKERETURN_OFFSET))(funcName, args);
		}

		static ::System::Void OnInitResponse(::System::String* response)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ONINITRESPONSE_OFFSET))(response);
		}

		static ::System::Void OnGetInvokeResponse(::System::String* response)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ONGETINVOKERESPONSE_OFFSET))(response);
		}

		static ::System::Void AddCallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ADDCALLBACK_OFFSET))(callback);
		}

		static ::System::Void AddInvoreReturnCallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ADDINVORERETURNCALLBACK_OFFSET))(callback);
		}

		static ::System::Void CheckFunctionIndex(::System::String* funcName, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CHECKFUNCTIONINDEX_OFFSET))(funcName, index);
		}

		static ::System::Boolean CheckFunctionCallback(::MiHoYo::SDK::InvokeResponseModel* resp)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::InvokeResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CHECKFUNCTIONCALLBACK_OFFSET))(resp);
		}

		::System::Void GetCmdLineMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_GETCMDLINEMAP_OFFSET))(this);
		}

		static ::System::Void Init(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_INIT_OFFSET))(callback);
		}

		static ::System::String* all_set_env(::System::String* env)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET))(env);
		}

		static ::System::String* all_set_env_and_gamebiz(::System::String* dataString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET))(dataString);
		}

		static ::System::String* login_enter_game(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET))(jsonString);
		}

		static ::System::String* login_will_enter_game(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET))(jsonString);
		}

		static ::System::String* cloud_set_launch_parameters(::System::String* parameters)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_SET_LAUNCH_PARAMETERS_OFFSET))(parameters);
		}

		static ::System::String* cloud_get_data(::System::String* key, ::System::Int32 callbackIndex)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_GET_DATA_OFFSET))(key, callbackIndex);
		}

		static ::System::String* cloud_set_data(::System::String* saveData)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_SET_DATA_OFFSET))(saveData);
		}

		static ::System::String* cloud_save_image(::System::String* jsonString, ::System::Int32 callbackIndex)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_SAVE_IMAGE_OFFSET))(jsonString, callbackIndex);
		}

		static ::System::String* cloud_transmit_data(::System::String* data, ::System::Int32 callbackIndex)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_TRANSMIT_DATA_OFFSET))(data, callbackIndex);
		}

		static ::System::String* launch_get_disk_free_space()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET))();
		}

		static ::System::String* cloud_get_clipboard_data(::System::String* key, ::System::Int32 callbackIndex)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_GET_CLIPBOARD_DATA_OFFSET))(key, callbackIndex);
		}

		static ::System::String* cloud_set_game_control_imu_enable(::System::String* enable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_SET_GAME_CONTROL_IMU_ENABLE_OFFSET))(enable);
		}

		static ::System::Boolean CheckWatermarkPlatformType()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CHECKWATERMARKPLATFORMTYPE_OFFSET))();
		}

		static ::System::String* share_share(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_SHARE_SHARE_OFFSET))(jsonString);
		}

		static ::System::String* login_has_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET))();
		}

		static ::System::String* login_open_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET))();
		}

		static ::System::String* watermark_set_enable(::System::String* args)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET))(args);
		}

		static ::System::String* watermark_set_config(::System::String* jsonStrings)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET))(jsonStrings);
		}

		static ::System::String* cloud_ime_show(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_IME_SHOW_OFFSET))(jsonString);
		}

		static ::System::String* cloud_ime_close(::System::String* jsonString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_IME_CLOSE_OFFSET))(jsonString);
		}

		static ::System::String* cloud_invoke_return_cache_enable(::System::String* enable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CLOUD_INVOKE_RETURN_CACHE_ENABLE_OFFSET))(enable);
		}

		static ::System::Void CheckPlatform()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_CHECKPLATFORM_OFFSET))();
		}
	};
}
