#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/SslClientStream_NegotiateState.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_ASYNCEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1FBB5680)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1FBB5670)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1FBB5810)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1FBB5920)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_COMPLETEDWITHERROR_OFFSET UNITYSDK_OFFSET(0x1FBB5690)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FBB5760)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1FBB5650)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_SETCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1FBB5A80)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1FBB5930)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1FBB5660)
#define MONO_SECURITY_PROTOCOL_TLS_SSLCLIENTSTREAM_NEGOTIATEASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB5610)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SslClientStream_NegotiateAsyncResult_TypeDefinitionIndex = 2379;

	class SslClientStream_NegotiateAsyncResult : public ::System::Object
	{
	public:
		::System::Object* locker; // 0x10
		::System::AsyncCallback* _userCallback; // 0x18
		::System::Threading::ManualResetEvent* handle; // 0x20
		::System::Exception* _asyncException; // 0x28
		::System::Object* _userState; // 0x30
		::Mono::Security::Protocol::Tls::SslClientStream_NegotiateState _state; // 0x38
		::System::Boolean completed; // 0x3C

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
