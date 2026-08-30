#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_ciphersuite.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E9065B0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E9065F0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E9065A0)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_CIPHERSUITE_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1E906520)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t_TypeDefinitionIndex = 2393;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_get_ciphersuite_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_CIPHERSUITE_T__CTOR_OFFSET))(this, a1, a2);
		}

		::Mono::Unity::UnityTls_unitytls_ciphersuite Invoke(::Mono::Unity::UnityTls_unitytls_tlsctx* a1, ::Mono::Unity::UnityTls_unitytls_errorstate* a2)
		{
			return ((::Mono::Unity::UnityTls_unitytls_ciphersuite(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_tlsctx* a1, ::Mono::Unity::UnityTls_unitytls_errorstate* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::Mono::Unity::UnityTls_unitytls_ciphersuite EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::Mono::Unity::UnityTls_unitytls_ciphersuite(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_GET_CIPHERSUITE_T_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
