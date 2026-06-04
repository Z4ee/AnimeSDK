#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountPlatformPlugin_MessageHandler; }
namespace MiHoYo::SDK { class AccountPlatformPlugin_Notification; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_CONFIGSYNCWITHNATIVE_OFFSET UNITYSDK_OFFSET(0x181DE5A0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ENABLENATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x181DE5D0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x181DE2F0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x181DE5C0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_INVOKE_OFFSET UNITYSDK_OFFSET(0x181DE590)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ISPLUGINREGISTERED_OFFSET UNITYSDK_OFFSET(0x181DE550)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ISTASKSREGISTERED_OFFSET UNITYSDK_OFFSET(0x181DE6E0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ONRECEIVEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x181DE8E0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_REGISTERMESSAGE_OFFSET UNITYSDK_OFFSET(0x181DE5E0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_REGISTERNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x181DE5B0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x181DE510)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x181DEC80)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x181DE450)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatformPlugin_TypeDefinitionIndex = 7915;

	class AccountPlatformPlugin : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::AccountPlatformPlugin** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::AccountPlatformPlugin**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatformPlugin_TypeDefinitionIndex)->GetStaticField(0xBD80);
		}
		static ::System::Boolean* StaticGet_sm_bIsRegistered()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AccountPlatformPlugin_TypeDefinitionIndex)->GetStaticField(0x46D0);
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

		static ::System::Void set_Instance(::MiHoYo::SDK::AccountPlatformPlugin* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountPlatformPlugin*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_SET_INSTANCE_OFFSET))(a1);
		}

		static ::System::Boolean IsPluginRegistered()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ISPLUGINREGISTERED_OFFSET))();
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConfigSyncWithNative(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_CONFIGSYNCWITHNATIVE_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterNotification(::MiHoYo::SDK::AccountPlatformPlugin_Notification* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountPlatformPlugin_Notification*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_REGISTERNOTIFICATION_OFFSET))(this, a1);
		}

		::System::String* InvokeReturn(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_INVOKERETURN_OFFSET))(this, a1, a2);
		}

		::System::Void EnableNativeHandle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ENABLENATIVEHANDLE_OFFSET))(this, a1);
		}

		::System::Void RegisterMessage(::System::String* a1, ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_REGISTERMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTasksRegistered(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ISTASKSREGISTERED_OFFSET))(this, a1);
		}

		::System::Boolean OnReceivedMessage(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_ONRECEIVEDMESSAGE_OFFSET))(this, a1);
		}
	};
}
