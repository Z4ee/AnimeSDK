#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AccountPlatformPlugin.h"

namespace MiHoYo::SDK { class AccountPlatformPlugin_Notification; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_CONFIGSYNCWITHNATIVE_OFFSET UNITYSDK_OFFSET(0x15366F50)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_ENABLENATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x15367040)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15366E50)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_INVOKERETURN_OFFSET UNITYSDK_OFFSET(0x15366FF0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_INVOKE_OFFSET UNITYSDK_OFFSET(0x15366EF0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_REGISTERNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x15366FA0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15366EE0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x15366EB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatformPluginImpl_TypeDefinitionIndex = 44352;

	class AccountPlatformPluginImpl : public ::MiHoYo::SDK::AccountPlatformPlugin
	{
	public:
		static ::MiHoYo::SDK::AccountPlatformPluginImpl** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::AccountPlatformPluginImpl**)Il2CppClass::FromTypeDefinitionIndex(AccountPlatformPluginImpl_TypeDefinitionIndex)->GetStaticField(0xAE50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::AccountPlatformPluginImpl* get_Instance()
		{
			return ((::MiHoYo::SDK::AccountPlatformPluginImpl*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::AccountPlatformPluginImpl* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountPlatformPluginImpl*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConfigSyncWithNative(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_CONFIGSYNCWITHNATIVE_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterNotification(::MiHoYo::SDK::AccountPlatformPlugin_Notification* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountPlatformPlugin_Notification*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_REGISTERNOTIFICATION_OFFSET))(this, a1);
		}

		::System::String* InvokeReturn(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_INVOKERETURN_OFFSET))(this, a1, a2);
		}

		::System::Void EnableNativeHandle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGINIMPL_ENABLENATIVEHANDLE_OFFSET))(this, a1);
		}
	};
}
