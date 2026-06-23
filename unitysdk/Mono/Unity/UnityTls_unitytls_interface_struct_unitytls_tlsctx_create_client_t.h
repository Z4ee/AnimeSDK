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

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D4522B0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D452380)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D451CA0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1D451C80)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t_TypeDefinitionIndex = 2565;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_client_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T__CTOR_OFFSET))(this, object, method);
		}

		::Mono::Unity::UnityTls_unitytls_tlsctx* Invoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange supportedProtocols, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks callbacks, ::System::Byte* cn, ::System::IntPtr cnLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::Mono::Unity::UnityTls_unitytls_tlsctx*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_INVOKE_OFFSET))(this, supportedProtocols, callbacks, cn, cnLen, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange supportedProtocols, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks callbacks, ::System::Byte* cn, ::System::IntPtr cnLen, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::System::Byte*, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_BEGININVOKE_OFFSET))(this, supportedProtocols, callbacks, cn, cnLen, errorState, callback, object);
		}

		::Mono::Unity::UnityTls_unitytls_tlsctx* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Mono::Unity::UnityTls_unitytls_tlsctx*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_CLIENT_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
