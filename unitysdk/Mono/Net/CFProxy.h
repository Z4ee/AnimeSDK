#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFProxyType.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net { class CFDictionary; }
namespace System { class String; }

#define MONO_NET_CFPROXY_CFPROXYTYPETOENUM_OFFSET UNITYSDK_OFFSET(0x1C473800)
#define MONO_NET_CFPROXY_GET_AUTOCONFIGURATIONJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x1C472280)
#define MONO_NET_CFPROXY_GET_AUTOCONFIGURATIONURL_OFFSET UNITYSDK_OFFSET(0x1C472420)
#define MONO_NET_CFPROXY_GET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x1C471A50)
#define MONO_NET_CFPROXY_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1C4718B0)
#define MONO_NET_CFPROXY_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1C471BF0)
#define MONO_NET_CFPROXY_GET_PROXYTYPE_OFFSET UNITYSDK_OFFSET(0x1C471570)
#define MONO_NET_CFPROXY_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1C471710)
#define MONO_NET_CFPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C472CB0)
#define MONO_NET_CFPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C46F860)

namespace Mono::Net
{
	inline static constexpr unsigned int CFProxy_TypeDefinitionIndex = 2415;

	class CFProxy : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_kCFProxyUsernameKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCE60);
		}
		static ::System::IntPtr* StaticGet_kCFProxyPasswordKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCE68);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCE70);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeHTTPS()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCE78);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeFTP()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCE80);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeHTTP()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCE88);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeAutoConfigurationJavaScript()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCE90);
		}
		static ::System::IntPtr* StaticGet_kCFProxyHostNameKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCE98);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeSOCKS()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCEA0);
		}
		static ::System::IntPtr* StaticGet_kCFProxyAutoConfigurationJavaScriptKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCEA8);
		}
		static ::System::IntPtr* StaticGet_kCFProxyAutoConfigurationURLKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCEB0);
		}
		static ::System::IntPtr* StaticGet_kCFProxyPortNumberKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCEB8);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeAutoConfigurationURL()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0xCEC0);
		}
		::Mono::Net::CFDictionary* settings; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Mono::Net::CFDictionary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::CFDictionary*))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY__CTOR_OFFSET))(this, a1);
		}

		static ::Mono::Net::CFProxyType CFProxyTypeToEnum(::System::IntPtr a1)
		{
			return ((::Mono::Net::CFProxyType(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_CFPROXYTYPETOENUM_OFFSET))(a1);
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
