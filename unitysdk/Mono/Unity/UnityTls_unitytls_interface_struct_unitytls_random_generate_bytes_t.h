#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF163A0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF16410)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF16380)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF16300)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t_TypeDefinitionIndex = 2389;

	class UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Byte* a1, ::System::IntPtr a2, ::Mono::Unity::UnityTls_unitytls_errorstate* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Byte* a1, ::System::IntPtr a2, ::Mono::Unity::UnityTls_unitytls_errorstate* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
