#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFProxyType.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net { class CFDictionary; }
namespace System { class String; }

#define MONO_NET_CFPROXY_CFPROXYTYPETOENUM_OFFSET UNITYSDK_OFFSET(0x1A097790)
#define MONO_NET_CFPROXY_GET_AUTOCONFIGURATIONJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x1A096270)
#define MONO_NET_CFPROXY_GET_AUTOCONFIGURATIONURL_OFFSET UNITYSDK_OFFSET(0x1A096410)
#define MONO_NET_CFPROXY_GET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x1A095990)
#define MONO_NET_CFPROXY_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1A0957F0)
#define MONO_NET_CFPROXY_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1A095B30)
#define MONO_NET_CFPROXY_GET_PROXYTYPE_OFFSET UNITYSDK_OFFSET(0x1A0954B0)
#define MONO_NET_CFPROXY_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1A095650)
#define MONO_NET_CFPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A096C40)
#define MONO_NET_CFPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A093380)

namespace Mono::Net
{
	inline static constexpr unsigned int CFProxy_TypeDefinitionIndex = 2404;

	class CFProxy : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_kCFProxyAutoConfigurationJavaScriptKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x54B0);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeSOCKS()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x54B8);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x54C0);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeHTTPS()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x54C8);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeFTP()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x54D0);
		}
		static ::System::IntPtr* StaticGet_kCFProxyUsernameKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x54D8);
		}
		static ::System::IntPtr* StaticGet_kCFProxyHostNameKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x54E0);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeHTTP()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x54E8);
		}
		static ::System::IntPtr* StaticGet_kCFProxyPortNumberKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x54F0);
		}
		static ::System::IntPtr* StaticGet_kCFProxyPasswordKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x54F8);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeAutoConfigurationURL()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x5500);
		}
		static ::System::IntPtr* StaticGet_kCFProxyAutoConfigurationURLKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x5508);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeAutoConfigurationJavaScript()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x5510);
		}
		::Mono::Net::CFDictionary* settings; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Mono::Net::CFDictionary* settings)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::CFDictionary*))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY__CTOR_OFFSET))(this, settings);
		}

		static ::Mono::Net::CFProxyType CFProxyTypeToEnum(::System::IntPtr type)
		{
			return ((::Mono::Net::CFProxyType(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_CFPROXYTYPETOENUM_OFFSET))(type);
		}

		::System::IntPtr get_AutoConfigurationJavaScript()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_AUTOCONFIGURATIONJAVASCRIPT_OFFSET))(this);
		}

		::System::IntPtr get_AutoConfigurationUrl()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_AUTOCONFIGURATIONURL_OFFSET))(this);
		}

		::System::String* get_HostName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_HOSTNAME_OFFSET))(this);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_PASSWORD_OFFSET))(this);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_PORT_OFFSET))(this);
		}

		::Mono::Net::CFProxyType get_ProxyType()
		{
			return ((::Mono::Net::CFProxyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_PROXYTYPE_OFFSET))(this);
		}

		::System::String* get_Username()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_USERNAME_OFFSET))(this);
		}
	};
}
