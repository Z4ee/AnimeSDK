#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B73A030)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B73A060)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B739CC0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1B739CA0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t_TypeDefinitionIndex = 2548;

	class UnityTls_unitytls_interface_struct_unitytls_errorstate_create_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T__CTOR_OFFSET))(this, object, method);
		}

		::Mono::Unity::UnityTls_unitytls_errorstate Invoke()
		{
			return ((::Mono::Unity::UnityTls_unitytls_errorstate(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::Mono::Unity::UnityTls_unitytls_errorstate EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Mono::Unity::UnityTls_unitytls_errorstate(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_ERRORSTATE_CREATE_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
