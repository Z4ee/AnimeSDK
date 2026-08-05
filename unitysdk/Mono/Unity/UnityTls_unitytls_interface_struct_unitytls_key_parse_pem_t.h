#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_key.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D611490)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D611530)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D6110B0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1D611090)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t_TypeDefinitionIndex = 2552;

	class UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T__CTOR_OFFSET))(this, object, method);
		}

		::Mono::Unity::UnityTls_unitytls_key* Invoke(::System::Byte* buffer, ::System::IntPtr bufferLen, ::System::Byte* password, ::System::IntPtr passwordLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::Mono::Unity::UnityTls_unitytls_key*(*)(::PVOID, ::System::Byte*, ::System::IntPtr, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_INVOKE_OFFSET))(this, buffer, bufferLen, password, passwordLen, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::System::Byte* buffer, ::System::IntPtr bufferLen, ::System::Byte* password, ::System::IntPtr passwordLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Byte*, ::System::IntPtr, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_BEGININVOKE_OFFSET))(this, buffer, bufferLen, password, passwordLen, errorState, callback, object);
		}

		::Mono::Unity::UnityTls_unitytls_key* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Mono::Unity::UnityTls_unitytls_key*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
