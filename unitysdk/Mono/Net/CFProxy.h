#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFProxyType.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net { class CFDictionary; }
namespace System { class String; }

#define MONO_NET_CFPROXY_CFPROXYTYPETOENUM_OFFSET UNITYSDK_OFFSET(0x1A841220)
#define MONO_NET_CFPROXY_GET_AUTOCONFIGURATIONJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x1A83FCA0)
#define MONO_NET_CFPROXY_GET_AUTOCONFIGURATIONURL_OFFSET UNITYSDK_OFFSET(0x1A83FE40)
#define MONO_NET_CFPROXY_GET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x1A83F470)
#define MONO_NET_CFPROXY_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1A83F2D0)
#define MONO_NET_CFPROXY_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1A83F610)
#define MONO_NET_CFPROXY_GET_PROXYTYPE_OFFSET UNITYSDK_OFFSET(0x1A83EF90)
#define MONO_NET_CFPROXY_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1A83F130)
#define MONO_NET_CFPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8406D0)
#define MONO_NET_CFPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A83D290)

namespace Mono::Net
{
	inline static constexpr unsigned int CFProxy_TypeDefinitionIndex = 2408;

	class CFProxy : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_kCFProxyTypeFTP()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7810);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeAutoConfigurationJavaScript()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7818);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeHTTPS()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7820);
		}
		static ::System::IntPtr* StaticGet_kCFProxyAutoConfigurationURLKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7828);
		}
		static ::System::IntPtr* StaticGet_kCFProxyUsernameKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7830);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeSOCKS()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7838);
		}
		static ::System::IntPtr* StaticGet_kCFProxyPasswordKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7840);
		}
		static ::System::IntPtr* StaticGet_kCFProxyPortNumberKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7848);
		}
		static ::System::IntPtr* StaticGet_kCFProxyAutoConfigurationJavaScriptKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7850);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeHTTP()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7858);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7860);
		}
		static ::System::IntPtr* StaticGet_kCFProxyHostNameKey()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7868);
		}
		static ::System::IntPtr* StaticGet_kCFProxyTypeAutoConfigurationURL()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CFProxy_TypeDefinitionIndex)->GetStaticField(0x7870);
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
