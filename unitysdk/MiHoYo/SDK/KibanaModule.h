#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_KIBANAMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17565EC0)
#define MIHOYO_SDK_KIBANAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x17565EB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaModule_TypeDefinitionIndex = 6619;

	class KibanaModule : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Function()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x620);
		}
		static ::System::String** StaticGet_Test()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x628);
		}
		static ::System::String** StaticGet_LAUNCH_PROTOCOL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x630);
		}
		static ::System::String** StaticGet_NATIVE_TASK()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x638);
		}
		static ::System::String** StaticGet_SecurityServer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x640);
		}
		static ::System::String** StaticGet_Webview()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x648);
		}
		static ::System::String** StaticGet_RegionTranslation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x650);
		}
		static ::System::String** StaticGet_Pay()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x658);
		}
		static ::System::String** StaticGet_BiliBili()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x660);
		}
		static ::System::String** StaticGet_PSBinding()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x668);
		}
		static ::System::String** StaticGet_SecurityServerTCP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x670);
		}
		static ::System::String** StaticGet_HttpDns()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x678);
		}
		static ::System::String** StaticGet_Download()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x680);
		}
		static ::System::String** StaticGet_CXLogin()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x688);
		}
		static ::System::String** StaticGet_APM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x690);
		}
		static ::System::String** StaticGet_Exception()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x698);
		}
		static ::System::String** StaticGet_AGEGATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x6A0);
		}
		static ::System::String** StaticGet_Default()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x6A8);
		}
		static ::System::String** StaticGet_Windows()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x6B0);
		}
		static ::System::String** StaticGet_Notice()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x6B8);
		}
		static ::System::String** StaticGet_CXBinding()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x6C0);
		}
		static ::System::String** StaticGet_Watermark()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x6C8);
		}
		static ::System::String** StaticGet_Login()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x6D0);
		}
		static ::System::String** StaticGet_Notify()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x6D8);
		}
		static ::System::String** StaticGet_DeviceFp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x6E0);
		}
		static ::System::String** StaticGet_CX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x6E8);
		}
		static ::System::String** StaticGet_UGC()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x6F0);
		}
		static ::System::String** StaticGet_Cloud()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x6F8);
		}
		static ::System::String** StaticGet_SecurityServerKCP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x700);
		}
		static ::System::String** StaticGet_VOX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x708);
		}
		static ::System::String** StaticGet_Epic()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x710);
		}
		static ::System::String** StaticGet_PS()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x718);
		}
		static ::System::String** StaticGet_Network()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x720);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAMODULE__CCTOR_OFFSET))();
		}
	};
}
