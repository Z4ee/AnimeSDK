#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_KIBANAMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C56B040)
#define MIHOYO_SDK_KIBANAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56B030)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaModule_TypeDefinitionIndex = 19324;

	class KibanaModule : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Epic()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x92F0);
		}
		static ::System::String** StaticGet_Webview()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x92F8);
		}
		static ::System::String** StaticGet_Function()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9300);
		}
		static ::System::String** StaticGet_BiliBili()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9308);
		}
		static ::System::String** StaticGet_Default()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9310);
		}
		static ::System::String** StaticGet_CX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9318);
		}
		static ::System::String** StaticGet_VOX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9320);
		}
		static ::System::String** StaticGet_RegionTranslation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9328);
		}
		static ::System::String** StaticGet_Cloud()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9330);
		}
		static ::System::String** StaticGet_PS()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9338);
		}
		static ::System::String** StaticGet_Notify()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9340);
		}
		static ::System::String** StaticGet_Kid()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9348);
		}
		static ::System::String** StaticGet_Network()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9350);
		}
		static ::System::String** StaticGet_CXBinding()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9358);
		}
		static ::System::String** StaticGet_LAUNCH_PROTOCOL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9360);
		}
		static ::System::String** StaticGet_APM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9368);
		}
		static ::System::String** StaticGet_Notice()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9370);
		}
		static ::System::String** StaticGet_UGC()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9378);
		}
		static ::System::String** StaticGet_NATIVE_TASK()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9380);
		}
		static ::System::String** StaticGet_Watermark()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9388);
		}
		static ::System::String** StaticGet_Test()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9390);
		}
		static ::System::String** StaticGet_HttpDns()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9398);
		}
		static ::System::String** StaticGet_SecurityServerKCP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x93A0);
		}
		static ::System::String** StaticGet_Exception()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x93A8);
		}
		static ::System::String** StaticGet_DeviceFp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x93B0);
		}
		static ::System::String** StaticGet_Pay()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x93B8);
		}
		static ::System::String** StaticGet_Download()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x93C0);
		}
		static ::System::String** StaticGet_AGEGATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x93C8);
		}
		static ::System::String** StaticGet_SecurityServer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x93D0);
		}
		static ::System::String** StaticGet_SecurityServerTCP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x93D8);
		}
		static ::System::String** StaticGet_Login()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x93E0);
		}
		static ::System::String** StaticGet_Windows()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x93E8);
		}
		static ::System::String** StaticGet_PSBinding()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x93F0);
		}
		static ::System::String** StaticGet_CXLogin()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x93F8);
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
