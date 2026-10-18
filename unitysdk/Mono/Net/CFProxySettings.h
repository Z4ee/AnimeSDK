#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net { class CFDictionary; }

#define MONO_NET_CFPROXYSETTINGS_GET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x1EF93AF0)
#define MONO_NET_CFPROXYSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF93510)
#define MONO_NET_CFPROXYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF905F0)

namespace Mono::Net
{
	inline static constexpr unsigned int CFProxySettings_TypeDefinitionIndex = 2416;

	class CFProxySettings : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesProxyAutoConfigEnable()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0x8450);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesHTTPProxy()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0x8458);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesHTTPEnable()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0x8460);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesProxyAutoConfigJavaScript()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0x8468);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesProxyAutoConfigURLString()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0x8470);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesHTTPPort()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0x8478);
		}
		::Mono::Net::CFDictionary* settings; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Mono::Net::CFDictionary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::CFDictionary*))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS__CTOR_OFFSET))(this, a1);
		}

		::Mono::Net::CFDictionary* get_Dictionary()
		{
			return ((::Mono::Net::CFDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS_GET_DICTIONARY_OFFSET))(this);
		}
	};
}
