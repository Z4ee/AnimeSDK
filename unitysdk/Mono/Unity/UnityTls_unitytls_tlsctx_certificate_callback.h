#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_key_ref.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509name.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF18030)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF180F0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF17FE0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF17F60)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_certificate_callback_TypeDefinitionIndex = 2356;

	class UnityTls_unitytls_tlsctx_certificate_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Void* a1, ::Mono::Unity::UnityTls_unitytls_tlsctx* a2, ::System::Byte* a3, ::System::IntPtr a4, ::Mono::Unity::UnityTls_unitytls_x509name* a5, ::System::IntPtr a6, ::Mono::Unity::UnityTls_unitytls_x509list_ref* a7, ::Mono::Unity::UnityTls_unitytls_key_ref* a8, ::Mono::Unity::UnityTls_unitytls_errorstate* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509name*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509list_ref*, ::Mono::Unity::UnityTls_unitytls_key_ref*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::IAsyncResult* BeginInvoke(::System::Void* a1, ::Mono::Unity::UnityTls_unitytls_tlsctx* a2, ::System::Byte* a3, ::System::IntPtr a4, ::Mono::Unity::UnityTls_unitytls_x509name* a5, ::System::IntPtr a6, ::Mono::Unity::UnityTls_unitytls_x509list_ref* a7, ::Mono::Unity::UnityTls_unitytls_key_ref* a8, ::Mono::Unity::UnityTls_unitytls_errorstate* a9, ::System::AsyncCallback* a10, ::System::Object* a11)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509name*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509list_ref*, ::Mono::Unity::UnityTls_unitytls_key_ref*, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
