#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SslClientStream_NegotiateState.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_ASYNCEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E7BF9B0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1E7BF9A0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1E7BFB40)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1E7BFC50)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_COMPLETEDWITHERROR_OFFSET UNITYSDK_OFFSET(0x1E7BF9C0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E7BFA90)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1E7BF980)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_SETCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1E7BFDB0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E7BFC60)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1E7BF990)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BF940)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SslClientStream_NegotiateAsyncResult_TypeDefinitionIndex = 2379;

	class SslClientStream_NegotiateAsyncResult : public ::System::Object
	{
	public:
		::System::AsyncCallback* _userCallback; // 0x10
		::System::Threading::ManualResetEvent* handle; // 0x18
		::System::Object* locker; // 0x20
		::System::Exception* _asyncException; // 0x28
		::System::Object* _userState; // 0x30
		::System::Boolean completed; // 0x38
		::Mono::Security::Protocol::Tls::SslClientStream_NegotiateState _state; // 0x3C

		::System::Void _ctor(::System::AsyncCallback* userCallback, ::System::Object* userState, ::Mono::Security::Protocol::Tls::SslClientStream_NegotiateState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*, ::Mono::Security::Protocol::Tls::SslClientStream_NegotiateState))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT__CTOR_OFFSET))(this, userCallback, userState, state);
		}

		::Mono::Security::Protocol::Tls::SslClientStream_NegotiateState get_State()
		{
			return ((::Mono::Security::Protocol::Tls::SslClientStream_NegotiateState(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Mono::Security::Protocol::Tls::SslClientStream_NegotiateState value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::SslClientStream_NegotiateState))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_SET_STATE_OFFSET))(this, value);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Exception* get_AsyncException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_ASYNCEXCEPTION_OFFSET))(this);
		}

		::System::Boolean get_CompletedWithError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_COMPLETEDWITHERROR_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void SetComplete(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_SETCOMPLETE_OFFSET))(this, ex);
		}

		::System::Void SetComplete_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_SETCOMPLETE_1_OFFSET))(this);
		}
	};
}
