#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AccountPlatformPlugin.h"

namespace MiHoYo::SDK { class AccountPlatformPlugin_Notification; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_CONFIGSYNCWITHNATIVE_OFFSET UNITYSDK_OFFSET(0x1C549750)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_ENABLENATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1C5498C0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C549590)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x1C549840)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5496C0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_REGISTERNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1C5497D0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C5496B0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C549650)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatformPluginImpl_TypeDefinitionIndex = 36470;

	class AccountPlatformPluginImpl : public ::MiHoYo::SDK::AccountPlatformPlugin
	{
	public:
		static ::MiHoYo::SDK::AccountPlatformPluginImpl** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::AccountPlatformPluginImpl**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatformPluginImpl_TypeDefinitionIndex)->GetStaticField(0x28130);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::AccountPlatformPluginImpl* get_Instance()
		{
			return ((::MiHoYo::SDK::AccountPlatformPluginImpl*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::AccountPlatformPluginImpl* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountPlatformPluginImpl*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void Invoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_INVOKE_OFFSET))(this, funcName, args, callback);
		}

		::System::Void ConfigSyncWithNative(::System::String* type, ::System::String* config)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_CONFIGSYNCWITHNATIVE_OFFSET))(this, type, config);
		}

		::System::Void RegisterNotification(::MiHoYo::SDK::AccountPlatformPlugin_Notification* notification)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountPlatformPlugin_Notification*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_REGISTERNOTIFICATION_OFFSET))(this, notification);
		}

		::System::String* InvokeReturn(::System::String* funcName, ::System::String* args)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_INVOKERETURN_OFFSET))(this, funcName, args);
		}

		::System::Void EnableNativeHandle(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_ENABLENATIVEHANDLE_OFFSET))(this, enable);
		}
	};
}
