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

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF17E40)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF17F30)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF17E00)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF17D90)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t_TypeDefinitionIndex = 2374;

	class UnityTls_unitytls_interface_struct_unitytls_x509verify_explicit_ca_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T__CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result Invoke(::Mono::Unity::UnityTls_unitytls_x509list_ref a1, ::Mono::Unity::UnityTls_unitytls_x509list_ref a2, ::System::Byte* a3, ::System::IntPtr a4, ::Mono::Unity::UnityTls_unitytls_x509verify_callback* a5, ::System::Void* a6, ::Mono::Unity::UnityTls_unitytls_errorstate* a7)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_x509list_ref a1, ::Mono::Unity::UnityTls_unitytls_x509list_ref a2, ::System::Byte* a3, ::System::IntPtr a4, ::Mono::Unity::UnityTls_unitytls_x509verify_callback* a5, ::System::Void* a6, ::Mono::Unity::UnityTls_unitytls_errorstate* a7, ::System::AsyncCallback* a8, ::System::Object* a9)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_EXPLICIT_CA_T_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
