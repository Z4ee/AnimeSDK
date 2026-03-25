#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x186733B0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18673430)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18673030)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18673010)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_read_callback_TypeDefinitionIndex = 2353;

	class UnityTls_unitytls_tlsctx_read_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::System::Void* userData, ::System::Byte* buffer, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Void*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_INVOKE_OFFSET))(this, userData, buffer, bufferLen, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::System::Void* userData, ::System::Byte* buffer, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Void*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_BEGININVOKE_OFFSET))(this, userData, buffer, bufferLen, errorState, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_READ_CALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
