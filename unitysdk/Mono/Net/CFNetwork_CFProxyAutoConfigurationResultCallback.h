#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A0951F0)
#define MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A095280)
#define MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A094E50)
#define MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A093C90)

namespace Mono::Net
{
	inline static constexpr unsigned int CFNetwork_CFProxyAutoConfigurationResultCallback_TypeDefinitionIndex = 2408;

	class CFNetwork_CFProxyAutoConfigurationResultCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr client, ::System::IntPtr proxyList, ::System::IntPtr error)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK_INVOKE_OFFSET))(this, client, proxyList, error);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr client, ::System::IntPtr proxyList, ::System::IntPtr error, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK_BEGININVOKE_OFFSET))(this, client, proxyList, error, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
