#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509verify_result.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18674080)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18674110)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18673CF0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_X509VERIFY_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18673CD0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_tlsctx_x509verify_callback_TypeDefinitionIndex = 2356;

	class UnityTls_unitytls_tlsctx_x509verify_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_X509VERIFY_CALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result Invoke(::System::Void* userData, ::Mono::Unity::UnityTls_unitytls_x509list_ref chain, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_INVOKE_OFFSET))(this, userData, chain, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::System::Void* userData, ::Mono::Unity::UnityTls_unitytls_x509list_ref chain, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_BEGININVOKE_OFFSET))(this, userData, chain, errorState, callback, object);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_TLSCTX_X509VERIFY_CALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
