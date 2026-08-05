#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net { class CFDictionary; }
namespace System { class String; }

#define MONO_NET_CFPROXYSETTINGS_GET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x1D87A9A0)
#define MONO_NET_CFPROXYSETTINGS_GET_HTTPENABLE_OFFSET UNITYSDK_OFFSET(0x1D87A9B0)
#define MONO_NET_CFPROXYSETTINGS_GET_HTTPPORT_OFFSET UNITYSDK_OFFSET(0x1D87ABD0)
#define MONO_NET_CFPROXYSETTINGS_GET_HTTPPROXY_OFFSET UNITYSDK_OFFSET(0x1D87ADF0)
#define MONO_NET_CFPROXYSETTINGS_GET_PROXYAUTOCONFIGENABLE_OFFSET UNITYSDK_OFFSET(0x1D87AF90)
#define MONO_NET_CFPROXYSETTINGS_GET_PROXYAUTOCONFIGJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x1D87B1B0)
#define MONO_NET_CFPROXYSETTINGS_GET_PROXYAUTOCONFIGURLSTRING_OFFSET UNITYSDK_OFFSET(0x1D87B350)
#define MONO_NET_CFPROXYSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D87A2C0)
#define MONO_NET_CFPROXYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87A990)

namespace Mono::Net
{
	inline static constexpr unsigned int CFProxySettings_TypeDefinitionIndex = 2597;

	class CFProxySettings : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesHTTPPort()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0x1070);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesProxyAutoConfigJavaScript()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0x1078);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesProxyAutoConfigURLString()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0x1080);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesProxyAutoConfigEnable()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0x1088);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesHTTPEnable()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0x1090);
		}
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesHTTPProxy()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxySettings_TypeDefinitionIndex)->GetStaticField(0x1098);
		}
		::Mono::Net::CFDictionary* settings; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Mono::Net::CFDictionary* settings)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::CFDictionary*))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS__CTOR_OFFSET))(this, settings);
		}

		::Mono::Net::CFDictionary* get_Dictionary()
		{
			return ((::Mono::Net::CFDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS_GET_DICTIONARY_OFFSET))(this);
		}

		::System::Boolean get_HTTPEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS_GET_HTTPENABLE_OFFSET))(this);
		}

		::System::Int32 get_HTTPPort()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS_GET_HTTPPORT_OFFSET))(this);
		}

		::System::String* get_HTTPProxy()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS_GET_HTTPPROXY_OFFSET))(this);
		}

		::System::Boolean get_ProxyAutoConfigEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS_GET_PROXYAUTOCONFIGENABLE_OFFSET))(this);
		}

		::System::String* get_ProxyAutoConfigJavaScript()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS_GET_PROXYAUTOCONFIGJAVASCRIPT_OFFSET))(this);
		}

		::System::String* get_ProxyAutoConfigURLString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS_GET_PROXYAUTOCONFIGURLSTRING_OFFSET))(this);
		}
	};
}
