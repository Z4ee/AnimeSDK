#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx_callbacks.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx_protocolrange.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E9061D0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E9062A0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E906180)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1E906110)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t_TypeDefinitionIndex = 2387;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T__CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_tlsctx* Invoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange a1, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks a2, ::System::Byte* a3, ::System::IntPtr a4, ::Mono::Unity::UnityTls_unitytls_errorstate* a5)
		{
			return ((::Mono::Unity::UnityTls_unitytls_tlsctx*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange a1, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks a2, ::System::Byte* a3, ::System::IntPtr a4, ::Mono::Unity::UnityTls_unitytls_errorstate* a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::Mono::Unity::UnityTls_unitytls_tlsctx* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_tlsctx*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
