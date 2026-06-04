#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_error_code.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF15E10)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF15E70)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF15E00)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF15D80)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t_TypeDefinitionIndex = 2361;

	class UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Mono::Unity::UnityTls_unitytls_errorstate* a1, ::Mono::Unity::UnityTls_unitytls_error_code a2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::Mono::Unity::UnityTls_unitytls_error_code))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_errorstate* a1, ::Mono::Unity::UnityTls_unitytls_error_code a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::Mono::Unity::UnityTls_unitytls_error_code, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_RAISE_ERROR_T_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
