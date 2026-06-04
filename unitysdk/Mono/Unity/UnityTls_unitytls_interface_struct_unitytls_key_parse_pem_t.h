#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_key.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF16250)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF162F0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF16220)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF161A0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t_TypeDefinitionIndex = 2364;

	class UnityTls_unitytls_interface_struct_unitytls_key_parse_pem_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T__CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_key* Invoke(::System::Byte* a1, ::System::IntPtr a2, ::System::Byte* a3, ::System::IntPtr a4, ::Mono::Unity::UnityTls_unitytls_errorstate* a5)
		{
			return ((::Mono::Unity::UnityTls_unitytls_key*(*)(::PVOID, ::System::Byte*, ::System::IntPtr, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::Byte* a1, ::System::IntPtr a2, ::System::Byte* a3, ::System::IntPtr a4, ::Mono::Unity::UnityTls_unitytls_errorstate* a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Byte*, ::System::IntPtr, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::Mono::Unity::UnityTls_unitytls_key* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_key*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_KEY_PARSE_PEM_T_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
