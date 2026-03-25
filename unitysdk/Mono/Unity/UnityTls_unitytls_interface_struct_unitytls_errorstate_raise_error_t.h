#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_error_code.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1866B7C0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1866B820)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1866B470)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1866B450)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t_TypeDefinitionIndex = 2360;

	class UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::Mono::Unity::UnityTls_unitytls_error_code errorCode)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::Mono::Unity::UnityTls_unitytls_error_code))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T_INVOKE_OFFSET))(this, errorState, errorCode);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::Mono::Unity::UnityTls_unitytls_error_code errorCode, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::Mono::Unity::UnityTls_unitytls_error_code, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T_BEGININVOKE_OFFSET))(this, errorState, errorCode, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
