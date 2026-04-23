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

#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A0AD470)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A0AD530)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0ACF50)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0ACF30)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_certificate_callback_TypeDefinitionIndex = 2356;

	class UnityTls_unitytls_tlsctx_certificate_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Void* userData, ::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, ::System::Byte* cn, ::System::IntPtr cnLen, ::Mono::Unity::UnityTls_unitytls_x509name* caList, ::System::IntPtr caListLen, ::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, ::Mono::Unity::UnityTls_unitytls_key_ref* key, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509name*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509list_ref*, ::Mono::Unity::UnityTls_unitytls_key_ref*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_INVOKE_OFFSET))(this, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::System::Void* userData, ::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, ::System::Byte* cn, ::System::IntPtr cnLen, ::Mono::Unity::UnityTls_unitytls_x509name* caList, ::System::IntPtr caListLen, ::Mono::Unity::UnityTls_unitytls_x509list_ref* chain, ::Mono::Unity::UnityTls_unitytls_key_ref* key, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509name*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509list_ref*, ::Mono::Unity::UnityTls_unitytls_key_ref*, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_BEGININVOKE_OFFSET))(this, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_CERTIFICATE_CALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
