#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509_ref.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18671110)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x186711A0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x18670D80)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T__CTOR_OFFSET UNITYSDK_OFFSET(0x18670D60)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509list_append_t_TypeDefinitionIndex = 2369;

	class UnityTls_unitytls_interface_struct_unitytls_x509list_append_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Mono::Unity::UnityTls_unitytls_x509list* list, ::Mono::Unity::UnityTls_unitytls_x509_ref cert, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list*, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_INVOKE_OFFSET))(this, list, cert, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_x509list* list, ::Mono::Unity::UnityTls_unitytls_x509_ref cert, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list*, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_BEGININVOKE_OFFSET))(this, list, cert, errorState, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
