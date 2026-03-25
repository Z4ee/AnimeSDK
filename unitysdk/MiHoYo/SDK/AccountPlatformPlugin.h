#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatformPlugin_MessageHandler; }
namespace MiHoYo::SDK { class AccountPlatformPlugin_Notification; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_CONFIGSYNCWITHNATIVE_OFFSET UNITYSDK_OFFSET(0x15DD7350)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ENABLENATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x15DD7380)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15DD70A0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x15DD7370)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_INVOKE_OFFSET UNITYSDK_OFFSET(0x15DD7340)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ISPLUGINREGISTERED_OFFSET UNITYSDK_OFFSET(0x15DD7300)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ISTASKSREGISTERED_OFFSET UNITYSDK_OFFSET(0x15DD7490)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ONRECEIVEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x15DD7670)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_REGISTERMESSAGE_OFFSET UNITYSDK_OFFSET(0x15DD7390)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_REGISTERNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x15DD7360)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15DD72C0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DD7F50)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x15DD7200)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatformPlugin_TypeDefinitionIndex = 6966;

	class AccountPlatformPlugin : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountPlatformPlugin** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::AccountPlatformPlugin**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatformPlugin_TypeDefinitionIndex)->GetStaticField(0xF970);
		}
		static ::System::Boolean* StaticGet_sm_bIsRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AccountPlatformPlugin_TypeDefinitionIndex)->GetStaticField(0x5190);
		}
		// static const ::System::String* CHECK_REGISTER_TASK; // 0x0
		// static const ::System::String* NOTIFICATION_EVENT; // 0x0
		// static const ::System::String* NOTIFICATION_PARAM; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler*>* m_dicMessageName2Handler; // 0x10
		::System::Boolean m_bIsRegisteredNotification; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::AccountPlatformPlugin* get_Instance()
		{
			return ((::MiHoYo::SDK::AccountPlatformPlugin*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::AccountPlatformPlugin* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountPlatformPlugin*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_SET_INSTANCE_OFFSET))(value);
		}

		static ::System::Boolean IsPluginRegistered()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ISPLUGINREGISTERED_OFFSET))();
		}

		::System::Void Invoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_INVOKE_OFFSET))(this, funcName, args, callback);
		}

		::System::Void ConfigSyncWithNative(::System::String* type, ::System::String* config)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_CONFIGSYNCWITHNATIVE_OFFSET))(this, type, config);
		}

		::System::Void RegisterNotification(::MiHoYo::SDK::AccountPlatformPlugin_Notification* notification)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountPlatformPlugin_Notification*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_REGISTERNOTIFICATION_OFFSET))(this, notification);
		}

		::System::String* InvokeReturn(::System::String* funcName, ::System::String* args)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_INVOKERETURN_OFFSET))(this, funcName, args);
		}

		::System::Void EnableNativeHandle(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ENABLENATIVEHANDLE_OFFSET))(this, enable);
		}

		::System::Void RegisterMessage(::System::String* strMessageName, ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_REGISTERMESSAGE_OFFSET))(this, strMessageName, handler);
		}

		::System::Boolean IsTasksRegistered(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* dicTaskNames)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ISTASKSREGISTERED_OFFSET))(this, dicTaskNames);
		}

		::System::Boolean OnReceivedMessage(::System::String* strMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ONRECEIVEDMESSAGE_OFFSET))(this, strMessage);
		}
	};
}
