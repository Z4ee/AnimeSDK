#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFStreamClientContext.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net { class CFArray; }
namespace Mono::Net { class CFDictionary; }
namespace Mono::Net { class CFNetwork_CFProxyAutoConfigurationResultCallback; }
namespace Mono::Net { class CFNetwork_GetProxyData; }
namespace Mono::Net { class CFProxy; }
namespace Mono::Net { class CFProxySettings; }
namespace Mono::Net { class CFUrl; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Net { class IWebProxy; }
namespace System::Threading { class AutoResetEvent; }

#define MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORAUTOCONFIGURATIONSCRIPTSEQUENTIAL_OFFSET UNITYSDK_OFFSET(0x19BA66B0)
#define MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORAUTOCONFIGURATIONSCRIPTTHREAD_OFFSET UNITYSDK_OFFSET(0x19BA67E0)
#define MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORAUTOCONFIGURATIONSCRIPT_OFFSET UNITYSDK_OFFSET(0x19BA6E10)
#define MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORURL_OFFSET UNITYSDK_OFFSET(0x19BA7D50)
#define MONO_NET_CFNETWORK_CFNETWORKCOPYSYSTEMPROXYSETTINGS_OFFSET UNITYSDK_OFFSET(0x19BA8500)
#define MONO_NET_CFNETWORK_CFNETWORKEXECUTEPROXYAUTOCONFIGURATIONURL_OFFSET UNITYSDK_OFFSET(0x19BA6740)
#define MONO_NET_CFNETWORK_COPYPROXIESFORAUTOCONFIGURATIONSCRIPT_OFFSET UNITYSDK_OFFSET(0x19BA7320)
#define MONO_NET_CFNETWORK_COPYPROXIESFORURL_OFFSET UNITYSDK_OFFSET(0x19BA7DE0)
#define MONO_NET_CFNETWORK_EXECUTEPROXYAUTOCONFIGURATIONURL_OFFSET UNITYSDK_OFFSET(0x19BA7930)
#define MONO_NET_CFNETWORK_GETDEFAULTPROXY_OFFSET UNITYSDK_OFFSET(0x19BA8580)
#define MONO_NET_CFNETWORK_GETPROXIESFORAUTOCONFIGURATIONSCRIPT_1_OFFSET UNITYSDK_OFFSET(0x19BA7810)
#define MONO_NET_CFNETWORK_GETPROXIESFORAUTOCONFIGURATIONSCRIPT_OFFSET UNITYSDK_OFFSET(0x19BA73B0)
#define MONO_NET_CFNETWORK_GETPROXIESFORURI_OFFSET UNITYSDK_OFFSET(0x19BA8420)
#define MONO_NET_CFNETWORK_GETPROXIESFORURL_OFFSET UNITYSDK_OFFSET(0x19BA7F10)
#define MONO_NET_CFNETWORK_GETSYSTEMPROXYSETTINGS_OFFSET UNITYSDK_OFFSET(0x19BA8310)
#define MONO_NET_CFNETWORK__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BA85C0)

namespace Mono::Net
{
	inline static constexpr unsigned int CFNetwork_TypeDefinitionIndex = 2599;

	class CFNetwork : public ::System::Object
	{
	public:
		static ::System::Threading::AutoResetEvent** StaticGet_proxy_event()
		{
			return (::System::Threading::AutoResetEvent**)Il2CppClass::FromTypeDefinitionIndex(CFNetwork_TypeDefinitionIndex)->GetStaticField(0x37E0);
		}
		static ::System::Object** StaticGet_lock_obj()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CFNetwork_TypeDefinitionIndex)->GetStaticField(0x37E8);
		}
		static ::System::Collections::Generic::Queue_1<::Mono::Net::CFNetwork_GetProxyData*>** StaticGet_get_proxy_queue()
		{
			return (::System::Collections::Generic::Queue_1<::Mono::Net::CFNetwork_GetProxyData*>**)Il2CppClass::FromTypeDefinitionIndex(CFNetwork_TypeDefinitionIndex)->GetStaticField(0x37F0);
		}
		// static const ::System::String* CFNetworkLibrary; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK__CCTOR_OFFSET))();
		}

		static ::System::IntPtr CFNetworkCopyProxiesForAutoConfigurationScriptSequential(::System::IntPtr proxyAutoConfigurationScript, ::System::IntPtr targetURL, ::System::IntPtr& error)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORAUTOCONFIGURATIONSCRIPTSEQUENTIAL_OFFSET))(proxyAutoConfigurationScript, targetURL, error);
		}

		static ::System::IntPtr CFNetworkExecuteProxyAutoConfigurationURL(::System::IntPtr proxyAutoConfigURL, ::System::IntPtr targetURL, ::Mono::Net::CFNetwork_CFProxyAutoConfigurationResultCallback* cb, ::Mono::Net::CFStreamClientContext& clientContext)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Mono::Net::CFNetwork_CFProxyAutoConfigurationResultCallback*, ::Mono::Net::CFStreamClientContext&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFNETWORKEXECUTEPROXYAUTOCONFIGURATIONURL_OFFSET))(proxyAutoConfigURL, targetURL, cb, clientContext);
		}

		static ::System::Void CFNetworkCopyProxiesForAutoConfigurationScriptThread()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORAUTOCONFIGURATIONSCRIPTTHREAD_OFFSET))();
		}

		static ::System::IntPtr CFNetworkCopyProxiesForAutoConfigurationScript(::System::IntPtr proxyAutoConfigurationScript, ::System::IntPtr targetURL, ::System::IntPtr& error)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORAUTOCONFIGURATIONSCRIPT_OFFSET))(proxyAutoConfigurationScript, targetURL, error);
		}

		static ::Mono::Net::CFArray* CopyProxiesForAutoConfigurationScript(::System::IntPtr proxyAutoConfigurationScript, ::Mono::Net::CFUrl* targetURL)
		{
			return ((::Mono::Net::CFArray*(*)(::System::IntPtr, ::Mono::Net::CFUrl*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_COPYPROXIESFORAUTOCONFIGURATIONSCRIPT_OFFSET))(proxyAutoConfigurationScript, targetURL);
		}

		static ::Il2CppArray<::Mono::Net::CFProxy*>* GetProxiesForAutoConfigurationScript(::System::IntPtr proxyAutoConfigurationScript, ::Mono::Net::CFUrl* targetURL)
		{
			return ((::Il2CppArray<::Mono::Net::CFProxy*>*(*)(::System::IntPtr, ::Mono::Net::CFUrl*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_GETPROXIESFORAUTOCONFIGURATIONSCRIPT_OFFSET))(proxyAutoConfigurationScript, targetURL);
		}

		static ::Il2CppArray<::Mono::Net::CFProxy*>* GetProxiesForAutoConfigurationScript_1(::System::IntPtr proxyAutoConfigurationScript, ::System::Uri* targetUri)
		{
			return ((::Il2CppArray<::Mono::Net::CFProxy*>*(*)(::System::IntPtr, ::System::Uri*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_GETPROXIESFORAUTOCONFIGURATIONSCRIPT_1_OFFSET))(proxyAutoConfigurationScript, targetUri);
		}

		static ::Il2CppArray<::Mono::Net::CFProxy*>* ExecuteProxyAutoConfigurationURL(::System::IntPtr proxyAutoConfigURL, ::System::Uri* targetURL)
		{
			return ((::Il2CppArray<::Mono::Net::CFProxy*>*(*)(::System::IntPtr, ::System::Uri*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_EXECUTEPROXYAUTOCONFIGURATIONURL_OFFSET))(proxyAutoConfigURL, targetURL);
		}

		static ::System::IntPtr CFNetworkCopyProxiesForURL(::System::IntPtr url, ::System::IntPtr proxySettings)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORURL_OFFSET))(url, proxySettings);
		}

		static ::Mono::Net::CFArray* CopyProxiesForURL(::Mono::Net::CFUrl* url, ::Mono::Net::CFDictionary* proxySettings)
		{
			return ((::Mono::Net::CFArray*(*)(::Mono::Net::CFUrl*, ::Mono::Net::CFDictionary*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_COPYPROXIESFORURL_OFFSET))(url, proxySettings);
		}

		static ::Il2CppArray<::Mono::Net::CFProxy*>* GetProxiesForURL(::Mono::Net::CFUrl* url, ::Mono::Net::CFProxySettings* proxySettings)
		{
			return ((::Il2CppArray<::Mono::Net::CFProxy*>*(*)(::Mono::Net::CFUrl*, ::Mono::Net::CFProxySettings*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_GETPROXIESFORURL_OFFSET))(url, proxySettings);
		}

		static ::Il2CppArray<::Mono::Net::CFProxy*>* GetProxiesForUri(::System::Uri* uri, ::Mono::Net::CFProxySettings* proxySettings)
		{
			return ((::Il2CppArray<::Mono::Net::CFProxy*>*(*)(::System::Uri*, ::Mono::Net::CFProxySettings*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_GETPROXIESFORURI_OFFSET))(uri, proxySettings);
		}

		static ::System::IntPtr CFNetworkCopySystemProxySettings()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFNETWORKCOPYSYSTEMPROXYSETTINGS_OFFSET))();
		}

		static ::Mono::Net::CFProxySettings* GetSystemProxySettings()
		{
			return ((::Mono::Net::CFProxySettings*(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_GETSYSTEMPROXYSETTINGS_OFFSET))();
		}

		static ::System::Net::IWebProxy* GetDefaultProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_GETDEFAULTPROXY_OFFSET))();
		}
	};
}
