#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_KIBANAMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F1CED0)
#define MIHOYO_SDK_KIBANAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1CEC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaModule_TypeDefinitionIndex = 6585;

	class KibanaModule : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Windows()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDF80);
		}
		static ::System::String** StaticGet_BiliBili()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDF88);
		}
		static ::System::String** StaticGet_Cloud()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDF90);
		}
		static ::System::String** StaticGet_APM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDF98);
		}
		static ::System::String** StaticGet_RegionTranslation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDFA0);
		}
		static ::System::String** StaticGet_NATIVE_TASK()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDFA8);
		}
		static ::System::String** StaticGet_LAUNCH_PROTOCOL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDFB0);
		}
		static ::System::String** StaticGet_Network()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDFB8);
		}
		static ::System::String** StaticGet_UGC()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDFC0);
		}
		static ::System::String** StaticGet_HttpDns()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDFC8);
		}
		static ::System::String** StaticGet_Notify()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDFD0);
		}
		static ::System::String** StaticGet_Epic()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDFD8);
		}
		static ::System::String** StaticGet_CXBinding()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDFE0);
		}
		static ::System::String** StaticGet_PSBinding()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDFE8);
		}
		static ::System::String** StaticGet_SecurityServerTCP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDFF0);
		}
		static ::System::String** StaticGet_Webview()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xDFF8);
		}
		static ::System::String** StaticGet_PS()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE000);
		}
		static ::System::String** StaticGet_AGEGATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE008);
		}
		static ::System::String** StaticGet_Login()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE010);
		}
		static ::System::String** StaticGet_Notice()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE018);
		}
		static ::System::String** StaticGet_Test()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE020);
		}
		static ::System::String** StaticGet_Pay()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE028);
		}
		static ::System::String** StaticGet_DeviceFp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE030);
		}
		static ::System::String** StaticGet_Default()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE038);
		}
		static ::System::String** StaticGet_CX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE040);
		}
		static ::System::String** StaticGet_Function()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE048);
		}
		static ::System::String** StaticGet_Download()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE050);
		}
		static ::System::String** StaticGet_SecurityServer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE058);
		}
		static ::System::String** StaticGet_Watermark()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE060);
		}
		static ::System::String** StaticGet_CXLogin()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE068);
		}
		static ::System::String** StaticGet_SecurityServerKCP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE070);
		}
		static ::System::String** StaticGet_Exception()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0xE078);
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
