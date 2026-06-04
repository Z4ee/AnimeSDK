#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509_ref.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF17780)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF17810)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF17760)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF176E0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_x509list_append_t_TypeDefinitionIndex = 2370;

	class UnityTls_unitytls_interface_struct_unitytls_x509list_append_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Mono::Unity::UnityTls_unitytls_x509list* a1, ::Mono::Unity::UnityTls_unitytls_x509_ref a2, ::Mono::Unity::UnityTls_unitytls_errorstate* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list*, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_x509list* a1, ::Mono::Unity::UnityTls_unitytls_x509_ref a2, ::Mono::Unity::UnityTls_unitytls_errorstate* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list*, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_X509LIST_APPEND_T_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
