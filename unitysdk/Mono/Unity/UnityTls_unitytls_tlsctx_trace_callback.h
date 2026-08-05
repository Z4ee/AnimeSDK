#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D611CD0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D611D40)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D611940)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D611920)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_trace_callback_TypeDefinitionIndex = 2543;

	class UnityTls_unitytls_tlsctx_trace_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Void* userData, ::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, ::System::Byte* traceMessage, ::System::IntPtr traceMessageLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_INVOKE_OFFSET))(this, userData, ctx, traceMessage, traceMessageLen);
		}

		::System::IAsyncResult* BeginInvoke(::System::Void* userData, ::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, ::System::Byte* traceMessage, ::System::IntPtr traceMessageLen, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_BEGININVOKE_OFFSET))(this, userData, ctx, traceMessage, traceMessageLen, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_TRACE_CALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
