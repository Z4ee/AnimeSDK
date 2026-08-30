#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C4712A0)
#define MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C471330)
#define MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C471280)
#define MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C471210)

namespace Mono::Net
{
	inline static constexpr unsigned int CFNetwork_CFProxyAutoConfigurationResultCallback_TypeDefinitionIndex = 2419;

	class CFNetwork_CFProxyAutoConfigurationResultCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_CFPROXYAUTOCONFIGURATIONRESULTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
