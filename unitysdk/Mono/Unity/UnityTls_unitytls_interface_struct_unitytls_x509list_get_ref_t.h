#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_REF_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C85F250)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_REF_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C85F290)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_REF_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C85EF30)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_REF_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1C85EF10)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t_TypeDefinitionIndex = 2555;

	class UnityTls_unitytls_interface_struct_unitytls_x509list_get_ref_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_REF_T__CTOR_OFFSET))(this, object, method);
		}

		::Mono::Unity::UnityTls_unitytls_x509list_ref Invoke(::Mono::Unity::UnityTls_unitytls_x509list* list, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509list_ref(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_REF_T_INVOKE_OFFSET))(this, list, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_x509list* list, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list*, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_REF_T_BEGININVOKE_OFFSET))(this, list, errorState, callback, object);
		}

		::Mono::Unity::UnityTls_unitytls_x509list_ref EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509list_ref(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_GET_REF_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
