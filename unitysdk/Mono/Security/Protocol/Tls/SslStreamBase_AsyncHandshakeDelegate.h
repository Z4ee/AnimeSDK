#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Mono::Security::Protocol::Tls { class SslStreamBase_InternalAsyncResult; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ASYNCHANDSHAKEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F8E7990)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ASYNCHANDSHAKEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F8E7A10)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ASYNCHANDSHAKEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F8E7380)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ASYNCHANDSHAKEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E7360)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SslStreamBase_AsyncHandshakeDelegate_TypeDefinitionIndex = 2383;

	class SslStreamBase_AsyncHandshakeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ASYNCHANDSHAKEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult* asyncResult, ::System::Boolean fromWrite)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ASYNCHANDSHAKEDELEGATE_INVOKE_OFFSET))(this, asyncResult, fromWrite);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult* asyncResult, ::System::Boolean fromWrite, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Security::Protocol::Tls::SslStreamBase_InternalAsyncResult*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ASYNCHANDSHAKEDELEGATE_BEGININVOKE_OFFSET))(this, asyncResult, fromWrite, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_ASYNCHANDSHAKEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
