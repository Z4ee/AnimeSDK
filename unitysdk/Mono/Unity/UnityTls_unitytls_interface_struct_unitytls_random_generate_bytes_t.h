#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A0A71C0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A0A7230)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0A6E30)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A6E10)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t_TypeDefinitionIndex = 2389;

	class UnityTls_unitytls_interface_struct_unitytls_random_generate_bytes_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Byte* buffer, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_INVOKE_OFFSET))(this, buffer, bufferLen, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::System::Byte* buffer, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_BEGININVOKE_OFFSET))(this, buffer, bufferLen, errorState, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_RANDOM_GENERATE_BYTES_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
