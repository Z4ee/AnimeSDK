#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509_ref.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509verify_result.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C483C90)
#define MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C483D40)
#define MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C483C60)
#define MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C483BE0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_x509verify_callback_TypeDefinitionIndex = 2358;

	class UnityTls_unitytls_x509verify_callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result Invoke(::System::Void* a1, ::Mono::Unity::UnityTls_unitytls_x509_ref a2, ::Mono::Unity::UnityTls_unitytls_x509verify_result a3, ::Mono::Unity::UnityTls_unitytls_errorstate* a4)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::Mono::Unity::UnityTls_unitytls_x509verify_result, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Void* a1, ::Mono::Unity::UnityTls_unitytls_x509_ref a2, ::Mono::Unity::UnityTls_unitytls_x509verify_result a3, ::Mono::Unity::UnityTls_unitytls_errorstate* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::Mono::Unity::UnityTls_unitytls_x509verify_result, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_X509VERIFY_CALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
