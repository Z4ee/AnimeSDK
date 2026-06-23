#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_ASYNCEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D367E30)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1D367E20)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1D367FC0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1D367DE0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_BYTESREAD_OFFSET UNITYSDK_OFFSET(0x1D367E10)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1D3680D0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_COMPLETEDWITHERROR_OFFSET UNITYSDK_OFFSET(0x1D367E40)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D367E00)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_FROMWRITE_OFFSET UNITYSDK_OFFSET(0x1D367DD0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D367F10)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1D367DF0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_GET_PROCEEDAFTERHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1D367DC0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_SETCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1D368280)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_SETCOMPLETE_2_OFFSET UNITYSDK_OFFSET(0x1D368290)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_SETCOMPLETE_3_OFFSET UNITYSDK_OFFSET(0x1D3682A0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1D3680E0)
#define MONO_SECURITY_PROTOCOL_TLS_SSLSTREAMBASE_INTERNALASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D367D40)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int SslStreamBase_InternalAsyncResult_TypeDefinitionIndex = 2384;

	class SslStreamBase_InternalAsyncResult : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _buffer; // 0x10
		::System::Object* _userState; // 0x18
		::System::Exception* _asyncException; // 0x20
		::System::Threading::ManualResetEvent* handle; // 0x28
		::System::AsyncCallback* _userCallback; // 0x30
		::System::Object* locker; // 0x38
		::System::Boolean _proceedAfterHandshake; // 0x40
		::System::Boolean _fromWrite; // 0x41
		::System::Boolean completed; // 0x42
		::System::Int32 _offset; // 0x44
		::System::Int32 _bytesRead; // 0x48
		::System::Int32 _count; // 0x4C

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
