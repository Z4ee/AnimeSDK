#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatNative_HoYoSDKNativeCallback; }
namespace MiHoYo::SDK { class AccountPlatNative_HoYoSDKNotification; }
namespace MiHoYo::SDK { class AccountPlatNative_HoYoSDKPluginUICallback; }
namespace MiHoYo::SDK { class AccountPlatNative_PluginUITask; }
namespace MiHoYo::SDK { class AccountPlatformPlugin_Notification; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE_ACCOUNTPLATINVOKERETURN_OFFSET UNITYSDK_OFFSET(0x1CC67D70)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_ACCOUNTPLATINVOKE_OFFSET UNITYSDK_OFFSET(0x1CC67900)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_ACTIONEXISTS_OFFSET UNITYSDK_OFFSET(0x1CC68170)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_CACHEACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1CC68080)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_CLOSEALLUI_OFFSET UNITYSDK_OFFSET(0x1CC67400)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_CONFIGSYNCWITHNATIVE_OFFSET UNITYSDK_OFFSET(0x1CC67690)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_ENABLENATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1CC66580)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKINTERNALCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CC65960)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKINTERNALNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1CC65D90)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKINTERNALPLUGINUICALLBACK_OFFSET UNITYSDK_OFFSET(0x1CC65A70)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_CONFIGSYNC_OFFSET UNITYSDK_OFFSET(0x1CC67840)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_INITGLOBALENV_OFFSET UNITYSDK_OFFSET(0x1CC687E0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x1CC685D0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC68710)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_REGISTERNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1CC66770)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_REGISTERPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CC67600)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_RELEASERESULT_OFFSET UNITYSDK_OFFSET(0x1CC68690)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_STOP_OFFSET UNITYSDK_OFFSET(0x1CC66990)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_INITNATIVEENV_OFFSET UNITYSDK_OFFSET(0x1CC66030)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CC662C0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x1CC67DF0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC67A10)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_NEEDHALFDELEGATE_OFFSET UNITYSDK_OFFSET(0x1CC68510)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_ONGETINVOKERESPONSE_OFFSET UNITYSDK_OFFSET(0x1CC688F0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_ONGETNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1CC689F0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_PREHANDLEACTIONS_OFFSET UNITYSDK_OFFSET(0x1CC68AF0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_REGISTERINTERNALNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1CC68070)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_REGISTERNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1CC665E0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_REGISTERPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CC66A10)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_REMOVEACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1CC68110)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_RUNONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1CC66540)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_STOP_OFFSET UNITYSDK_OFFSET(0x1CC66800)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC68F20)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC65E90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative_TypeDefinitionIndex = 36471;

	class AccountPlatNative : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_m_setHalfDelegate()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative_TypeDefinitionIndex)->GetStaticField(0x27C00);
		}
		static ::MiHoYo::SDK::AccountPlatNative** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::AccountPlatNative**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative_TypeDefinitionIndex)->GetStaticField(0x27C08);
		}
		static ::System::Boolean* StaticGet_sm_bIsOpenAccountPlat()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative_TypeDefinitionIndex)->GetStaticField(0x86A0);
		}
		static ::System::Boolean* StaticGet_sm_bEnableNativeHandle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative_TypeDefinitionIndex)->GetStaticField(0x86A1);
		}
		// static const ::System::String* NATIVE_COMMON_ALERT; // 0x0
		// static const ::System::String* NATIVE_MODULE_NAME; // 0x0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountPlatNative_PluginUITask*>* m_lstPluginUITask; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* m_mapUIName2ActionIndexSet; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>* m_dicInvokeCallbacks; // 0x20
		::MiHoYo::SDK::AccountPlatformPlugin_Notification* m_internalNotification; // 0x28
		::System::Action_1<::System::String*>* m_notification; // 0x30
		::System::Int32 m_callbackIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::AccountPlatNative* Instance()
		{
			return ((::MiHoYo::SDK::AccountPlatNative*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_INSTANCE_OFFSET))();
		}

		::System::Void EnableNativeHandle(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_ENABLENATIVEHANDLE_OFFSET))(this, enable);
		}

		::System::Void RegisterNotification(::System::Action_1<::System::String*>* notification)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_REGISTERNOTIFICATION_OFFSET))(this, notification);
		}

		static ::System::Void Stop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_STOP_OFFSET))();
		}

		::System::Void RegisterPluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_REGISTERPLUGINUI_OFFSET))(this);
		}

		::System::Void CloseAllUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_CLOSEALLUI_OFFSET))(this);
		}

		::System::Void ConfigSyncWithNative(::System::String* type, ::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_CONFIGSYNCWITHNATIVE_OFFSET))(this, type, content);
		}

		::System::Void AccountPlatInvoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_ACCOUNTPLATINVOKE_OFFSET))(this, funcName, args, callback);
		}

		::System::String* AccountPlatInvokeReturn(::System::String* funcName, ::System::String* args)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_ACCOUNTPLATINVOKERETURN_OFFSET))(this, funcName, args);
		}

		::System::Void RegisterInternalNotification(::MiHoYo::SDK::AccountPlatformPlugin_Notification* notification)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountPlatformPlugin_Notification*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_REGISTERINTERNALNOTIFICATION_OFFSET))(this, notification);
		}

		::System::Void CacheActionIndex(::System::String* strUIName, ::System::Collections::Generic::HashSet_1<::System::Int32>* setActionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_CACHEACTIONINDEX_OFFSET))(this, strUIName, setActionIndex);
		}

		::System::Void RemoveActionIndex(::System::String* strUIName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_REMOVEACTIONINDEX_OFFSET))(this, strUIName);
		}

		static ::System::Boolean ActionExists(::System::String* args)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_ACTIONEXISTS_OFFSET))(args);
		}

		static ::System::Boolean NeedHalfDelegate(::System::String* strFuncName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_NEEDHALFDELEGATE_OFFSET))(strFuncName);
		}

		::System::String* InvokeReturn(::System::String* strFuncName, ::System::String* strArgs)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_INVOKERETURN_OFFSET))(this, strFuncName, strArgs);
		}

		::System::Void Invoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_INVOKE_OFFSET))(this, funcName, args, callback);
		}

		::System::Void InitNativeEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_INITNATIVEENV_OFFSET))(this);
		}

		::System::Void OnGetInvokeResponse(::System::Int32 nCallbackIndex, ::System::String* strArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_ONGETINVOKERESPONSE_OFFSET))(this, nCallbackIndex, strArgs);
		}

		::System::Void OnGetNotification(::System::String* strNotification)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_ONGETNOTIFICATION_OFFSET))(this, strNotification);
		}

		::System::Void PreHandleActions(::System::String* strMsgName, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_PREHANDLEACTIONS_OFFSET))(this, strMsgName, strParams);
		}

		static ::System::Void RunOnMainThread(::System::Action* acion)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_RUNONMAINTHREAD_OFFSET))(acion);
		}

		static ::System::Void HoYoSDKInternalCallback(::System::Int32 nCallbackIndex, ::System::String* strArgs)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKINTERNALCALLBACK_OFFSET))(nCallbackIndex, strArgs);
		}

		static ::System::Void HoYoSDKInternalPluginUICallback(::System::String* strMsgName, ::System::String* strParams)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKINTERNALPLUGINUICALLBACK_OFFSET))(strMsgName, strParams);
		}

		static ::System::Void HoYoSDKInternalNotification(::System::String* strArgs)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKINTERNALNOTIFICATION_OFFSET))(strArgs);
		}

		static ::System::Void HoYoSDK_InitGlobalEnv(::System::String* strCurDir, ::System::String* strProductName, ::System::String* strCompanyName, ::System::String* strDataDir, ::System::Int32 nClientType)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_INITGLOBALENV_OFFSET))(strCurDir, strProductName, strCompanyName, strDataDir, nClientType);
		}

		static ::System::IntPtr HoYoSDK_InvokeReturn(::System::String* strFuncName, ::System::String* strArgs)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_INVOKERETURN_OFFSET))(strFuncName, strArgs);
		}

		static ::System::Void HoYoSDK_Invoke(::System::String* strFuncName, ::System::String* strArgs, ::MiHoYo::SDK::AccountPlatNative_HoYoSDKNativeCallback* callback, ::System::Int32 nCallbackIndex)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::AccountPlatNative_HoYoSDKNativeCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_INVOKE_OFFSET))(strFuncName, strArgs, callback, nCallbackIndex);
		}

		static ::System::Void HoYoSDK_RegisterPluginUI(::MiHoYo::SDK::AccountPlatNative_HoYoSDKPluginUICallback* callback)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountPlatNative_HoYoSDKPluginUICallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_REGISTERPLUGINUI_OFFSET))(callback);
		}

		static ::System::Void HoYoSDK_RegisterNotification(::MiHoYo::SDK::AccountPlatNative_HoYoSDKNotification* notification)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountPlatNative_HoYoSDKNotification*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_REGISTERNOTIFICATION_OFFSET))(notification);
		}

		static ::System::Void HoYoSDK_ReleaseResult(::System::IntPtr lpBuffer)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_RELEASERESULT_OFFSET))(lpBuffer);
		}

		static ::System::Void HoYoSDK_ConfigSync(::System::String* strType, ::System::String* strContents)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_CONFIGSYNC_OFFSET))(strType, strContents);
		}

		static ::System::Void HoYoSDK_Stop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_STOP_OFFSET))();
		}
	};
}
