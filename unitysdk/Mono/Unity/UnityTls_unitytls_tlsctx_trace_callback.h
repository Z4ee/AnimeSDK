#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A851510)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A851580)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8514E0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A851460)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_trace_callback_TypeDefinitionIndex = 2359;

	class UnityTls_unitytls_tlsctx_trace_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Void* a1, ::Mono::Unity::UnityTls_unitytls_tlsctx* a2, ::System::Byte* a3, ::System::IntPtr a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Void* a1, ::Mono::Unity::UnityTls_unitytls_tlsctx* a2, ::System::Byte* a3, ::System::IntPtr a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
