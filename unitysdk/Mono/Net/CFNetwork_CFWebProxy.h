#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net { class CFProxy; }
namespace System { class Uri; }
namespace System::Net { class ICredentials; }
namespace System::Net { class NetworkCredential; }

#define MONO_NET_CFNETWORK_CFWEBPROXY_EXECUTEPROXYAUTOCONFIGURATIONURL_OFFSET UNITYSDK_OFFSET(0x1AF06FE0)
#define MONO_NET_CFNETWORK_CFWEBPROXY_GETPROXYURIFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0x1AF06EE0)
#define MONO_NET_CFNETWORK_CFWEBPROXY_GETPROXYURI_OFFSET UNITYSDK_OFFSET(0x1AF06430)
#define MONO_NET_CFNETWORK_CFWEBPROXY_GETPROXY_OFFSET UNITYSDK_OFFSET(0x1AF07030)
#define MONO_NET_CFNETWORK_CFWEBPROXY_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1AF06420)
#define MONO_NET_CFNETWORK_CFWEBPROXY_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x1AF07690)
#define MONO_NET_CFNETWORK_CFWEBPROXY_SELECTPROXY_OFFSET UNITYSDK_OFFSET(0x1AF06F30)
#define MONO_NET_CFNETWORK_CFWEBPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF05D40)

namespace Mono::Net
{
	inline static constexpr unsigned int CFNetwork_CFWebProxy_TypeDefinitionIndex = 2409;

	class CFNetwork_CFWebProxy : public ::System::Object
	{
	public:
		::System::Net::ICredentials* credentials; // 0x10
		::System::Boolean userSpecified; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY__CTOR_OFFSET))(this);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_GET_CREDENTIALS_OFFSET))(this);
		}

		static ::System::Uri* GetProxyUri(::Mono::Net::CFProxy* a1, ::System::Net::NetworkCredential*& a2)
		{
			return ((::System::Uri*(*)(::Mono::Net::CFProxy*, ::System::Net::NetworkCredential*&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_GETPROXYURI_OFFSET))(a1, a2);
		}

		static ::System::Uri* GetProxyUriFromScript(::System::IntPtr a1, ::System::Uri* a2, ::System::Net::NetworkCredential*& a3)
		{
			return ((::System::Uri*(*)(::System::IntPtr, ::System::Uri*, ::System::Net::NetworkCredential*&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_GETPROXYURIFROMSCRIPT_OFFSET))(a1, a2, a3);
		}

		static ::System::Uri* ExecuteProxyAutoConfigurationURL(::System::IntPtr a1, ::System::Uri* a2, ::System::Net::NetworkCredential*& a3)
		{
			return ((::System::Uri*(*)(::System::IntPtr, ::System::Uri*, ::System::Net::NetworkCredential*&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_EXECUTEPROXYAUTOCONFIGURATIONURL_OFFSET))(a1, a2, a3);
		}

		static ::System::Uri* SelectProxy(::Il2CppArray<::Mono::Net::CFProxy*>* a1, ::System::Uri* a2, ::System::Net::NetworkCredential*& a3)
		{
			return ((::System::Uri*(*)(::Il2CppArray<::Mono::Net::CFProxy*>*, ::System::Uri*, ::System::Net::NetworkCredential*&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_SELECTPROXY_OFFSET))(a1, a2, a3);
		}

		::System::Uri* GetProxy(::System::Uri* a1)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_GETPROXY_OFFSET))(this, a1);
		}

		::System::Boolean IsBypassed(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_ISBYPASSED_OFFSET))(this, a1);
		}
	};
}
