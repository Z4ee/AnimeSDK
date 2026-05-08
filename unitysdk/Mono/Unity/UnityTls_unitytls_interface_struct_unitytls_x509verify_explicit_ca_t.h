#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509verify_result.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Mono::Unity { class UnityTls_unitytls_x509verify_callback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AA8E7E0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AA8E8D0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AA8E2D0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA8E2C0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t_TypeDefinitionIndex = 2564;

	class UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T__CTOR_OFFSET))(this, object, method);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result Invoke(::Mono::Unity::UnityTls_unitytls_x509list_ref chain, ::Mono::Unity::UnityTls_unitytls_x509list_ref trustCA, ::System::Byte* cn, ::System::IntPtr cnLen, ::Mono::Unity::UnityTls_unitytls_x509verify_callback* cb, ::System::Void* userData, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T_INVOKE_OFFSET))(this, chain, trustCA, cn, cnLen, cb, userData, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_x509list_ref chain, ::Mono::Unity::UnityTls_unitytls_x509list_ref trustCA, ::System::Byte* cn, ::System::IntPtr cnLen, ::Mono::Unity::UnityTls_unitytls_x509verify_callback* cb, ::System::Void* userData, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T_BEGININVOKE_OFFSET))(this, chain, trustCA, cn, cnLen, cb, userData, errorState, callback, object);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
