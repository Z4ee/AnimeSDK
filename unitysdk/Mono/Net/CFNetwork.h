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
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Net { class IWebProxy; }
namespace System::Threading { class AutoResetEvent; }

#define MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORAUTOCONFIGURATIONSCRIPTSEQUENTIAL_OFFSET UNITYSDK_OFFSET(0x1EFBBBE0)
#define MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORAUTOCONFIGURATIONSCRIPTTHREAD_OFFSET UNITYSDK_OFFSET(0x1EFBBD10)
#define MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORAUTOCONFIGURATIONSCRIPT_OFFSET UNITYSDK_OFFSET(0x1EFBC430)
#define MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORURL_OFFSET UNITYSDK_OFFSET(0x1EFBDA50)
#define MONO_NET_CFNETWORK_CFNETWORKCOPYSYSTEMPROXYSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EFBE1F0)
#define MONO_NET_CFNETWORK_CFNETWORKEXECUTEPROXYAUTOCONFIGURATIONURL_OFFSET UNITYSDK_OFFSET(0x1EFBBC70)
#define MONO_NET_CFNETWORK_COPYPROXIESFORAUTOCONFIGURATIONSCRIPT_OFFSET UNITYSDK_OFFSET(0x1EFBC960)
#define MONO_NET_CFNETWORK_COPYPROXIESFORURL_OFFSET UNITYSDK_OFFSET(0x1EFBDAE0)
#define MONO_NET_CFNETWORK_EXECUTEPROXYAUTOCONFIGURATIONURL_OFFSET UNITYSDK_OFFSET(0x1EFBD200)
#define MONO_NET_CFNETWORK_GETDEFAULTPROXY_OFFSET UNITYSDK_OFFSET(0x1EFBE280)
#define MONO_NET_CFNETWORK_GETPROXIESFORAUTOCONFIGURATIONSCRIPT_1_OFFSET UNITYSDK_OFFSET(0x1EFBCF30)
#define MONO_NET_CFNETWORK_GETPROXIESFORAUTOCONFIGURATIONSCRIPT_OFFSET UNITYSDK_OFFSET(0x1EFBC9F0)
#define MONO_NET_CFNETWORK_GETPROXIESFORURI_OFFSET UNITYSDK_OFFSET(0x1EFBE110)
#define MONO_NET_CFNETWORK_GETPROXIESFORURL_OFFSET UNITYSDK_OFFSET(0x1EFBDC10)
#define MONO_NET_CFNETWORK_GETSYSTEMPROXYSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EFBE000)
#define MONO_NET_CFNETWORK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFBE2D0)

namespace Mono::Net
{
	inline static constexpr unsigned int CFNetwork_TypeDefinitionIndex = 2417;

	class CFNetwork : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_lock_obj()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CFNetwork_TypeDefinitionIndex)->GetStaticField(0x36A00);
		}
		static ::System::Threading::AutoResetEvent** StaticGet_proxy_event()
		{
			return (::System::Threading::AutoResetEvent**)Il2CppClass::FromTypeDefinitionIndex(CFNetwork_TypeDefinitionIndex)->GetStaticField(0x36A08);
		}
		static ::System::Collections::Generic::Queue_1<::Mono::Net::CFNetwork_GetProxyData*>** StaticGet_get_proxy_queue()
		{
			return (::System::Collections::Generic::Queue_1<::Mono::Net::CFNetwork_GetProxyData*>**)Il2CppClass::FromTypeDefinitionIndex(CFNetwork_TypeDefinitionIndex)->GetStaticField(0x36A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK__CCTOR_OFFSET))();
		}

		static ::System::IntPtr CFNetworkCopyProxiesForAutoConfigurationScriptSequential(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr& a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORAUTOCONFIGURATIONSCRIPTSEQUENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr CFNetworkExecuteProxyAutoConfigurationURL(::System::IntPtr a1, ::System::IntPtr a2, ::Mono::Net::CFNetwork_CFProxyAutoConfigurationResultCallback* a3, ::Mono::Net::CFStreamClientContext& a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Mono::Net::CFNetwork_CFProxyAutoConfigurationResultCallback*, ::Mono::Net::CFStreamClientContext&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFNETWORKEXECUTEPROXYAUTOCONFIGURATIONURL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CFNetworkCopyProxiesForAutoConfigurationScriptThread()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORAUTOCONFIGURATIONSCRIPTTHREAD_OFFSET))();
		}

		static ::System::IntPtr CFNetworkCopyProxiesForAutoConfigurationScript(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr& a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORAUTOCONFIGURATIONSCRIPT_OFFSET))(a1, a2, a3);
		}

		static ::Mono::Net::CFArray* CopyProxiesForAutoConfigurationScript(::System::IntPtr a1, ::Mono::Net::CFUrl* a2)
		{
			return ((::Mono::Net::CFArray*(*)(::System::IntPtr, ::Mono::Net::CFUrl*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_COPYPROXIESFORAUTOCONFIGURATIONSCRIPT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::Mono::Net::CFProxy*>* GetProxiesForAutoConfigurationScript(::System::IntPtr a1, ::Mono::Net::CFUrl* a2)
		{
			return ((::Il2CppArray<::Mono::Net::CFProxy*>*(*)(::System::IntPtr, ::Mono::Net::CFUrl*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_GETPROXIESFORAUTOCONFIGURATIONSCRIPT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::Mono::Net::CFProxy*>* GetProxiesForAutoConfigurationScript_1(::System::IntPtr a1, ::System::Uri* a2)
		{
			return ((::Il2CppArray<::Mono::Net::CFProxy*>*(*)(::System::IntPtr, ::System::Uri*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_GETPROXIESFORAUTOCONFIGURATIONSCRIPT_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::Mono::Net::CFProxy*>* ExecuteProxyAutoConfigurationURL(::System::IntPtr a1, ::System::Uri* a2)
		{
			return ((::Il2CppArray<::Mono::Net::CFProxy*>*(*)(::System::IntPtr, ::System::Uri*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_EXECUTEPROXYAUTOCONFIGURATIONURL_OFFSET))(a1, a2);
		}

		static ::System::IntPtr CFNetworkCopyProxiesForURL(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFNETWORKCOPYPROXIESFORURL_OFFSET))(a1, a2);
		}

		static ::Mono::Net::CFArray* CopyProxiesForURL(::Mono::Net::CFUrl* a1, ::Mono::Net::CFDictionary* a2)
		{
			return ((::Mono::Net::CFArray*(*)(::Mono::Net::CFUrl*, ::Mono::Net::CFDictionary*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_COPYPROXIESFORURL_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::Mono::Net::CFProxy*>* GetProxiesForURL(::Mono::Net::CFUrl* a1, ::Mono::Net::CFProxySettings* a2)
		{
			return ((::Il2CppArray<::Mono::Net::CFProxy*>*(*)(::Mono::Net::CFUrl*, ::Mono::Net::CFProxySettings*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_GETPROXIESFORURL_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::Mono::Net::CFProxy*>* GetProxiesForUri(::System::Uri* a1, ::Mono::Net::CFProxySettings* a2)
		{
			return ((::Il2CppArray<::Mono::Net::CFProxy*>*(*)(::System::Uri*, ::Mono::Net::CFProxySettings*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_GETPROXIESFORURI_OFFSET))(a1, a2);
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
