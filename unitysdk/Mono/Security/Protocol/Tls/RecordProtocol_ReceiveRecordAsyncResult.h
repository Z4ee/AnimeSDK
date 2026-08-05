#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::IO { class Stream; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ASYNCEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F600990)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1F600980)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1F600B20)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1F600C30)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_COMPLETEDWITHERROR_OFFSET UNITYSDK_OFFSET(0x1F6009A0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_INITIALBUFFER_OFFSET UNITYSDK_OFFSET(0x1F600970)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F600A70)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_RECORD_OFFSET UNITYSDK_OFFSET(0x1F600950)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_RESULTINGBUFFER_OFFSET UNITYSDK_OFFSET(0x1F600960)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1F600D90)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_2_OFFSET UNITYSDK_OFFSET(0x1F600DA0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_3_OFFSET UNITYSDK_OFFSET(0x1F600DB0)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F600C40)
#define MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F600900)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int RecordProtocol_ReceiveRecordAsyncResult_TypeDefinitionIndex = 2365;

	class RecordProtocol_ReceiveRecordAsyncResult : public ::System::Object
	{
	public:
		::System::AsyncCallback* _userCallback; // 0x10
		::Il2CppArray<::System::Byte>* _resultingBuffer; // 0x18
		::System::IO::Stream* _record; // 0x20
		::Il2CppArray<::System::Byte>* _initialBuffer; // 0x28
		::System::Threading::ManualResetEvent* handle; // 0x30
		::System::Object* locker; // 0x38
		::System::Exception* _asyncException; // 0x40
		::System::Object* _userState; // 0x48
		::System::Boolean completed; // 0x50

		::System::Void _ctor(::System::AsyncCallback* userCallback, ::System::Object* userState, ::Il2CppArray<::System::Byte>* initialBuffer, ::System::IO::Stream* record)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*, ::Il2CppArray<::System::Byte>*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT__CTOR_OFFSET))(this, userCallback, userState, initialBuffer, record);
		}

		::System::IO::Stream* get_Record()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_RECORD_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_ResultingBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_RESULTINGBUFFER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_InitialBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_INITIALBUFFER_OFFSET))(this);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Exception* get_AsyncException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ASYNCEXCEPTION_OFFSET))(this);
		}

		::System::Boolean get_CompletedWithError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_COMPLETEDWITHERROR_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void SetComplete(::System::Exception* ex, ::Il2CppArray<::System::Byte>* resultingBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_OFFSET))(this, ex, resultingBuffer);
		}

		::System::Void SetComplete_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_1_OFFSET))(this, ex);
		}

		::System::Void SetComplete_2(::Il2CppArray<::System::Byte>* resultingBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_2_OFFSET))(this, resultingBuffer);
		}

		::System::Void SetComplete_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_RECORDPROTOCOL_RECEIVERECORDASYNCRESULT_SETCOMPLETE_3_OFFSET))(this);
		}
	};
}
