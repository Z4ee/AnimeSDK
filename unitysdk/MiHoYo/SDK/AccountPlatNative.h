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

#define MIHOYO_SDK_ACCOUNTPLATNATIVE_ACCOUNTPLATINVOKERETURN_OFFSET UNITYSDK_OFFSET(0x16A7EE10)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_ACCOUNTPLATINVOKE_OFFSET UNITYSDK_OFFSET(0x16A7E960)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_ACTIONEXISTS_OFFSET UNITYSDK_OFFSET(0x16A7F1D0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_CACHEACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x16A7F0E0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_CLOSEALLUI_OFFSET UNITYSDK_OFFSET(0x16A7E430)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_CONFIGSYNCWITHNATIVE_OFFSET UNITYSDK_OFFSET(0x16A7E710)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_ENABLENATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x16A7CED0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKINTERNALCALLBACK_OFFSET UNITYSDK_OFFSET(0x16A7C230)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKINTERNALNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x16A7C6F0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKINTERNALPLUGINUICALLBACK_OFFSET UNITYSDK_OFFSET(0x16A7C360)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_CONFIGSYNC_OFFSET UNITYSDK_OFFSET(0x16A7E8A0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_INITGLOBALENV_OFFSET UNITYSDK_OFFSET(0x16A7F8D0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x16A7F6C0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_INVOKE_OFFSET UNITYSDK_OFFSET(0x16A7F800)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_REGISTERNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x16A7D090)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_REGISTERPLUGINUI_OFFSET UNITYSDK_OFFSET(0x16A7E680)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_RELEASERESULT_OFFSET UNITYSDK_OFFSET(0x16A7F780)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_STOP_OFFSET UNITYSDK_OFFSET(0x16A7D2A0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_INITNATIVEENV_OFFSET UNITYSDK_OFFSET(0x16A7C960)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16A7CC30)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x16A7EE60)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16A7EA50)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_NEEDHALFDELEGATE_OFFSET UNITYSDK_OFFSET(0x16A7F630)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_ONGETINVOKERESPONSE_OFFSET UNITYSDK_OFFSET(0x16A7F9E0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_ONGETNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x16A7FAA0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_PREHANDLEACTIONS_OFFSET UNITYSDK_OFFSET(0x16A7FBA0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_REGISTERINTERNALNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x16A7F0D0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_REGISTERNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x16A7CF00)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_REGISTERPLUGINUI_OFFSET UNITYSDK_OFFSET(0x16A7D320)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_REMOVEACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x16A7F170)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_RUNONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x16A7CE90)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_STOP_OFFSET UNITYSDK_OFFSET(0x16A7D120)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A7FFD0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7C800)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative_TypeDefinitionIndex = 46535;

	class AccountPlatNative : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_m_setHalfDelegate()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative_TypeDefinitionIndex)->GetStaticField(0x42D50);
		}
		static ::MiHoYo::SDK::AccountPlatNative** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::AccountPlatNative**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative_TypeDefinitionIndex)->GetStaticField(0x42D58);
		}
		static ::System::Boolean* StaticGet_sm_bIsOpenAccountPlat()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative_TypeDefinitionIndex)->GetStaticField(0xFFF0);
		}
		static ::System::Boolean* StaticGet_sm_bEnableNativeHandle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AccountPlatNative_TypeDefinitionIndex)->GetStaticField(0xFFF1);
		}
		// static const ::System::String* NATIVE_COMMON_ALERT; // 0x0
		// static const ::System::String* NATIVE_MODULE_NAME; // 0x0
		::MiHoYo::SDK::AccountPlatformPlugin_Notification* m_internalNotification; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* m_mapUIName2ActionIndexSet; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::System::String*>*>* m_dicInvokeCallbacks; // 0x20
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountPlatNative_PluginUITask*>* m_lstPluginUITask; // 0x28
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

		::System::Void EnableNativeHandle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_ENABLENATIVEHANDLE_OFFSET))(this, a1);
		}

		::System::Void RegisterNotification(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_REGISTERNOTIFICATION_OFFSET))(this, a1);
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

		::System::Void ConfigSyncWithNative(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_CONFIGSYNCWITHNATIVE_OFFSET))(this, a1, a2);
		}

		::System::Void AccountPlatInvoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_ACCOUNTPLATINVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* AccountPlatInvokeReturn(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_ACCOUNTPLATINVOKERETURN_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterInternalNotification(::MiHoYo::SDK::AccountPlatformPlugin_Notification* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountPlatformPlugin_Notification*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_REGISTERINTERNALNOTIFICATION_OFFSET))(this, a1);
		}

		::System::Void CacheActionIndex(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_CACHEACTIONINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveActionIndex(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_REMOVEACTIONINDEX_OFFSET))(this, a1);
		}

		static ::System::Boolean ActionExists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_ACTIONEXISTS_OFFSET))(a1);
		}

		static ::System::Boolean NeedHalfDelegate(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_NEEDHALFDELEGATE_OFFSET))(a1);
		}

		::System::String* InvokeReturn(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_INVOKERETURN_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitNativeEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_INITNATIVEENV_OFFSET))(this);
		}

		::System::Void OnGetInvokeResponse(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_ONGETINVOKERESPONSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetNotification(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_ONGETNOTIFICATION_OFFSET))(this, a1);
		}

		::System::Void PreHandleActions(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_PREHANDLEACTIONS_OFFSET))(this, a1, a2);
		}

		static ::System::Void RunOnMainThread(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_RUNONMAINTHREAD_OFFSET))(a1);
		}

		static ::System::Void HoYoSDKInternalCallback(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKINTERNALCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void HoYoSDKInternalPluginUICallback(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKINTERNALPLUGINUICALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void HoYoSDKInternalNotification(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKINTERNALNOTIFICATION_OFFSET))(a1);
		}

		static ::System::Void HoYoSDK_InitGlobalEnv(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_INITGLOBALENV_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::IntPtr HoYoSDK_InvokeReturn(::System::String* a1, ::System::String* a2)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_INVOKERETURN_OFFSET))(a1, a2);
		}

		static ::System::Void HoYoSDK_Invoke(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::AccountPlatNative_HoYoSDKNativeCallback* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::AccountPlatNative_HoYoSDKNativeCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_INVOKE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void HoYoSDK_RegisterPluginUI(::MiHoYo::SDK::AccountPlatNative_HoYoSDKPluginUICallback* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountPlatNative_HoYoSDKPluginUICallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_REGISTERPLUGINUI_OFFSET))(a1);
		}

		static ::System::Void HoYoSDK_RegisterNotification(::MiHoYo::SDK::AccountPlatNative_HoYoSDKNotification* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountPlatNative_HoYoSDKNotification*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_REGISTERNOTIFICATION_OFFSET))(a1);
		}

		static ::System::Void HoYoSDK_ReleaseResult(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_RELEASERESULT_OFFSET))(a1);
		}

		static ::System::Void HoYoSDK_ConfigSync(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_CONFIGSYNC_OFFSET))(a1, a2);
		}

		static ::System::Void HoYoSDK_Stop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDK_STOP_OFFSET))();
		}
	};
}
