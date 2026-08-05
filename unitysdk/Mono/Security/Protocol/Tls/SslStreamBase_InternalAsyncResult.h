#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_ASYNCEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E701580)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1E701570)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1E701710)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1E701530)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_BYTESREAD_OFFSET UNITYSDK_OFFSET(0x1E701560)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1E701820)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_COMPLETEDWITHERROR_OFFSET UNITYSDK_OFFSET(0x1E701590)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E701550)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_FROMWRITE_OFFSET UNITYSDK_OFFSET(0x1E701520)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E701660)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1E701540)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_PROCEEDAFTERHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1E701510)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_SETCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1E7019D0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_SETCOMPLETE_2_OFFSET UNITYSDK_OFFSET(0x1E7019E0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_SETCOMPLETE_3_OFFSET UNITYSDK_OFFSET(0x1E7019F0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E701830)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E701490)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SslStreamBase_InternalAsyncResult_TypeDefinitionIndex = 2384;

	class SslStreamBase_InternalAsyncResult : public ::System::Object
	{
	public:
		::System::Object* _userState; // 0x10
		::Il2CppArray<::System::Byte>* _buffer; // 0x18
		::System::AsyncCallback* _userCallback; // 0x20
		::System::Exception* _asyncException; // 0x28
		::System::Threading::ManualResetEvent* handle; // 0x30
		::System::Object* locker; // 0x38
		::System::Boolean _fromWrite; // 0x40
		::System::Boolean completed; // 0x41
		::System::Boolean _proceedAfterHandshake; // 0x42
		::System::Int32 _offset; // 0x44
		::System::Int32 _count; // 0x48
		::System::Int32 _bytesRead; // 0x4C

		::System::Void _ctor(::System::AsyncCallback* userCallback, ::System::Object* userState, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Boolean fromWrite, ::System::Boolean proceedAfterHandshake)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT__CTOR_OFFSET))(this, userCallback, userState, buffer, offset, count, fromWrite, proceedAfterHandshake);
		}

		::System::Boolean get_ProceedAfterHandshake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_PROCEEDAFTERHANDSHAKE_OFFSET))(this);
		}

		::System::Boolean get_FromWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_FROMWRITE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Buffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_BUFFER_OFFSET))(this);
		}

		::System::Int32 get_Offset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_OFFSET_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_BytesRead()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_BYTESREAD_OFFSET))(this);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Exception* get_AsyncException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_ASYNCEXCEPTION_OFFSET))(this);
		}

		::System::Boolean get_CompletedWithError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_COMPLETEDWITHERROR_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void SetComplete(::System::Exception* ex, ::System::Int32 bytesRead)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_SETCOMPLETE_OFFSET))(this, ex, bytesRead);
		}

		::System::Void SetComplete_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_SETCOMPLETE_1_OFFSET))(this, ex);
		}

		::System::Void SetComplete_2(::System::Int32 bytesRead)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_SETCOMPLETE_2_OFFSET))(this, bytesRead);
		}

		::System::Void SetComplete_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_SETCOMPLETE_3_OFFSET))(this);
		}
	};
}
