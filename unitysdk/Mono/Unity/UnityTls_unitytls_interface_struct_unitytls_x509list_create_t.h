#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF178A0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF178D0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF17890)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF17820)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509list_create_t_TypeDefinitionIndex = 2369;

	class UnityTls_unitytls_interface_struct_unitytls_x509list_create_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T__CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_x509list* Invoke(::Mono::Unity::UnityTls_unitytls_errorstate* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509list*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_errorstate* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::Mono::Unity::UnityTls_unitytls_x509list* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509list*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
