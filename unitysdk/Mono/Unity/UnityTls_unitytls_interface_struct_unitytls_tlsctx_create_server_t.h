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

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A0A7FA0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A0A8080)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0A7980)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A7960)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t_TypeDefinitionIndex = 2375;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_create_server_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T__CTOR_OFFSET))(this, object, method);
		}

		::Mono::Unity::UnityTls_unitytls_tlsctx* Invoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange supportedProtocols, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks callbacks, ::System::UInt64 certChain, ::System::UInt64 leafCertificateKey, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::Mono::Unity::UnityTls_unitytls_tlsctx*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::System::UInt64, ::System::UInt64, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_INVOKE_OFFSET))(this, supportedProtocols, callbacks, certChain, leafCertificateKey, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange supportedProtocols, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks callbacks, ::System::UInt64 certChain, ::System::UInt64 leafCertificateKey, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::System::UInt64, ::System::UInt64, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_BEGININVOKE_OFFSET))(this, supportedProtocols, callbacks, certChain, leafCertificateKey, errorState, callback, object);
		}

		::Mono::Unity::UnityTls_unitytls_tlsctx* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Mono::Unity::UnityTls_unitytls_tlsctx*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_CREATE_SERVER_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
