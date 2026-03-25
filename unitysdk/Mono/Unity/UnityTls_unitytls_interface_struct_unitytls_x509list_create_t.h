#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18671510)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18671540)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x186711D0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T__CTOR_OFFSET UNITYSDK_OFFSET(0x186711B0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509list_create_t_TypeDefinitionIndex = 2368;

	class UnityTls_unitytls_interface_struct_unitytls_x509list_create_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T__CTOR_OFFSET))(this, object, method);
		}

		::Mono::Unity::UnityTls_unitytls_x509list* Invoke(::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509list*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_INVOKE_OFFSET))(this, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_BEGININVOKE_OFFSET))(this, errorState, callback, object);
		}

		::Mono::Unity::UnityTls_unitytls_x509list* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509list*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_CREATE_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
