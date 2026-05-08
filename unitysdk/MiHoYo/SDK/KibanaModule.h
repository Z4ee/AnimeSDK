#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_KIBANAMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A348D60)
#define MIHOYO_SDK_KIBANAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A348D50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaModule_TypeDefinitionIndex = 18441;

	class KibanaModule : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CXBinding()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x94F0);
		}
		static ::System::String** StaticGet_Exception()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x94F8);
		}
		static ::System::String** StaticGet_BiliBili()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9500);
		}
		static ::System::String** StaticGet_Default()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9508);
		}
		static ::System::String** StaticGet_SecurityServerTCP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9510);
		}
		static ::System::String** StaticGet_LAUNCH_PROTOCOL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9518);
		}
		static ::System::String** StaticGet_RegionTranslation()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9520);
		}
		static ::System::String** StaticGet_Cloud()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9528);
		}
		static ::System::String** StaticGet_CX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9530);
		}
		static ::System::String** StaticGet_Network()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9538);
		}
		static ::System::String** StaticGet_VOX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9540);
		}
		static ::System::String** StaticGet_Login()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9548);
		}
		static ::System::String** StaticGet_Notice()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9550);
		}
		static ::System::String** StaticGet_Windows()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9558);
		}
		static ::System::String** StaticGet_Watermark()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9560);
		}
		static ::System::String** StaticGet_Webview()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9568);
		}
		static ::System::String** StaticGet_DeviceFp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9570);
		}
		static ::System::String** StaticGet_Test()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9578);
		}
		static ::System::String** StaticGet_Notify()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9580);
		}
		static ::System::String** StaticGet_Function()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9588);
		}
		static ::System::String** StaticGet_Download()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9590);
		}
		static ::System::String** StaticGet_NATIVE_TASK()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x9598);
		}
		static ::System::String** StaticGet_PS()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x95A0);
		}
		static ::System::String** StaticGet_AGEGATE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x95A8);
		}
		static ::System::String** StaticGet_Pay()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x95B0);
		}
		static ::System::String** StaticGet_APM()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x95B8);
		}
		static ::System::String** StaticGet_SecurityServer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x95C0);
		}
		static ::System::String** StaticGet_Epic()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x95C8);
		}
		static ::System::String** StaticGet_CXLogin()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x95D0);
		}
		static ::System::String** StaticGet_PSBinding()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x95D8);
		}
		static ::System::String** StaticGet_UGC()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x95E0);
		}
		static ::System::String** StaticGet_SecurityServerKCP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x95E8);
		}
		static ::System::String** StaticGet_HttpDns()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KibanaModule_TypeDefinitionIndex)->GetStaticField(0x95F0);
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
