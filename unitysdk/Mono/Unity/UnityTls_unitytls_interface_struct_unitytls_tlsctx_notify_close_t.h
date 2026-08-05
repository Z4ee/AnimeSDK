#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_errorstate.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_tlsctx.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CBEEB30)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CBEEB70)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CBEE810)
#define MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_NOTIFY_CLOSE_T__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEE7F0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t_TypeDefinitionIndex = 2576;

	class UnityTls_unitytls_interface_struct_unitytls_tlsctx_notify_close_t : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_NOTIFY_CLOSE_T__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::Mono::Unity::UnityTls_unitytls_errorstate*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_INVOKE_OFFSET))(this, ctx, errorState);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Unity::UnityTls_unitytls_tlsctx* ctx, ::Mono::Unity::UnityTls_unitytls_errorstate* errorState, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_tlsctx*, ::Mono::Unity::UnityTls_unitytls_errorstate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_BEGININVOKE_OFFSET))(this, ctx, errorState, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_UNITYTLS_INTERFACE_STRUCT_UNITYTLS_TLSCTX_NOTIFY_CLOSE_T_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
