#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net { class CFProxy; }
namespace System { class Uri; }
namespace System::Net { class ICredentials; }
namespace System::Net { class NetworkCredential; }

#define MONO_NET_CFNETWORK_CFWEBPROXY_EXECUTEPROXYAUTOCONFIGURATIONURL_OFFSET UNITYSDK_OFFSET(0x1D69D2F0)
#define MONO_NET_CFNETWORK_CFWEBPROXY_GETPROXYURIFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0x1D69D1B0)
#define MONO_NET_CFNETWORK_CFWEBPROXY_GETPROXYURI_OFFSET UNITYSDK_OFFSET(0x1D69C740)
#define MONO_NET_CFNETWORK_CFWEBPROXY_GETPROXY_OFFSET UNITYSDK_OFFSET(0x1D69D370)
#define MONO_NET_CFNETWORK_CFWEBPROXY_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D69C720)
#define MONO_NET_CFNETWORK_CFWEBPROXY_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x1D69DAA0)
#define MONO_NET_CFNETWORK_CFWEBPROXY_SELECTPROXY_OFFSET UNITYSDK_OFFSET(0x1D69D230)
#define MONO_NET_CFNETWORK_CFWEBPROXY_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D69C730)
#define MONO_NET_CFNETWORK_CFWEBPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69C710)

namespace Mono::Net
{
	inline static constexpr unsigned int CFNetwork_CFWebProxy_TypeDefinitionIndex = 2601;

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

		::System::Void set_Credentials(::System::Net::ICredentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_SET_CREDENTIALS_OFFSET))(this, value);
		}

		static ::System::Uri* GetProxyUri(::Mono::Net::CFProxy* proxy, ::System::Net::NetworkCredential*& credentials)
		{
			return ((::System::Uri*(*)(::Mono::Net::CFProxy*, ::System::Net::NetworkCredential*&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_GETPROXYURI_OFFSET))(proxy, credentials);
		}

		static ::System::Uri* GetProxyUriFromScript(::System::IntPtr script, ::System::Uri* targetUri, ::System::Net::NetworkCredential*& credentials)
		{
			return ((::System::Uri*(*)(::System::IntPtr, ::System::Uri*, ::System::Net::NetworkCredential*&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_GETPROXYURIFROMSCRIPT_OFFSET))(script, targetUri, credentials);
		}

		static ::System::Uri* ExecuteProxyAutoConfigurationURL(::System::IntPtr proxyAutoConfigURL, ::System::Uri* targetUri, ::System::Net::NetworkCredential*& credentials)
		{
			return ((::System::Uri*(*)(::System::IntPtr, ::System::Uri*, ::System::Net::NetworkCredential*&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_EXECUTEPROXYAUTOCONFIGURATIONURL_OFFSET))(proxyAutoConfigURL, targetUri, credentials);
		}

		static ::System::Uri* SelectProxy(::Il2CppArray<::Mono::Net::CFProxy*>* proxies, ::System::Uri* targetUri, ::System::Net::NetworkCredential*& credentials)
		{
			return ((::System::Uri*(*)(::Il2CppArray<::Mono::Net::CFProxy*>*, ::System::Uri*, ::System::Net::NetworkCredential*&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_SELECTPROXY_OFFSET))(proxies, targetUri, credentials);
		}

		::System::Uri* GetProxy(::System::Uri* targetUri)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_GETPROXY_OFFSET))(this, targetUri);
		}

		::System::Boolean IsBypassed(::System::Uri* targetUri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFWEBPROXY_ISBYPASSED_OFFSET))(this, targetUri);
		}
	};
}
