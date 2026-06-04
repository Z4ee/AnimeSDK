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

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF17C90)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF17D60)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF17C50)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF17BE0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t_TypeDefinitionIndex = 2373;

	class UnityTls_unitytls_interface_struct_unitytls_x509verify_default_ca_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T__CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result Invoke(::Mono::Unity::UnityTls_unitytls_x509list_ref a1, ::System::Byte* a2, ::System::IntPtr a3, ::Mono::Unity::UnityTls_unitytls_x509verify_callback* a4, ::System::Void* a5, ::Mono::Unity::UnityTls_unitytls_errorstate* a6)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_x509list_ref a1, ::System::Byte* a2, ::System::IntPtr a3, ::Mono::Unity::UnityTls_unitytls_x509verify_callback* a4, ::System::Void* a5, ::Mono::Unity::UnityTls_unitytls_errorstate* a6, ::System::AsyncCallback* a7, ::System::Object* a8)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*, ::System::Void*, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509VERIFY_DEFAULT_CA_T_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
