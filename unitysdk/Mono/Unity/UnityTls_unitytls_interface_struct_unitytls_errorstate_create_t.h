#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF15D20)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF15D50)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF15D00)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF15C90)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t_TypeDefinitionIndex = 2360;

	class UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T__CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_errorstate Invoke()
		{
			return ((::Mono::Unity::UnityTls_unitytls_errorstate(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_errorstate EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_errorstate(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
