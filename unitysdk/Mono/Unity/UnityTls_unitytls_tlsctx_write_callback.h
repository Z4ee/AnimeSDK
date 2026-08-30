#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_WRITE_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E908130)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_WRITE_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E9081B0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_WRITE_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E908100)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_WRITE_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E908080)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_write_callback_TypeDefinitionIndex = 2364;

	class UnityTls_unitytls_tlsctx_write_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_WRITE_CALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr Invoke(::System::Void* a1, ::System::Byte* a2, ::System::IntPtr a3, ::Mono::Unity::UnityTls_unitytls_errorstate* a4)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Void*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_WRITE_CALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Void* a1, ::System::Byte* a2, ::System::IntPtr a3, ::Mono::Unity::UnityTls_unitytls_errorstate* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Void*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_WRITE_CALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_WRITE_CALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
