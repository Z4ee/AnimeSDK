#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509verify_result.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF16BA0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF16BE0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF16B90)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF16B10)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t_TypeDefinitionIndex = 2384;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_process_handshake_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T__CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result Invoke(::Mono::Unity::UnityTls_unitytls_tlsctx* a1, ::Mono::Unity::UnityTls_unitytls_errorstate* a2)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_tlsctx* a1, ::Mono::Unity::UnityTls_unitytls_errorstate* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_PROCESS_HANDSHAKE_T_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
