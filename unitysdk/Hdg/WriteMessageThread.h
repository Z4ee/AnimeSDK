#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/WriteMessageThread_State.h"
#include "unitysdk/System/Object.h"

namespace Hdg { class rdtTcpMessage; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class Stream; }
namespace System::Threading { class AutoResetEvent; }
namespace System::Threading { class Thread; }

#define HDG_WRITEMESSAGETHREAD_ENQUEUEMESSAGE_OFFSET UNITYSDK_OFFSET(0x8C13520)
#define HDG_WRITEMESSAGETHREAD_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x8C16080)
#define HDG_WRITEMESSAGETHREAD_ONIDLE_OFFSET UNITYSDK_OFFSET(0x8C1CEA0)
#define HDG_WRITEMESSAGETHREAD_ONLOSTCONNECTION_OFFSET UNITYSDK_OFFSET(0x8C1D570)
#define HDG_WRITEMESSAGETHREAD_ONWRITING_OFFSET UNITYSDK_OFFSET(0x8C1CFE0)
#define HDG_WRITEMESSAGETHREAD_STOP_OFFSET UNITYSDK_OFFSET(0x8C15200)
#define HDG_WRITEMESSAGETHREAD_THREADFUNC_OFFSET UNITYSDK_OFFSET(0x8C1CDC0)
#define HDG_WRITEMESSAGETHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x8C15950)

namespace Hdg
{
	inline static constexpr unsigned int WriteMessageThread_TypeDefinitionIndex = 43759;

	class WriteMessageThread : public ::System::Object
	{
	public:
		::Hdg::rdtTcpMessage* m_currentMessage; // 0x10
		::System::Threading::Thread* m_thread; // 0x18
		::System::IO::BinaryWriter* m_writer; // 0x20
		::Il2CppArray<::System::Action*>* m_stateDelegates; // 0x28
		::System::String* m_name; // 0x30
		::System::Threading::AutoResetEvent* m_event; // 0x38
		::System::Collections::Generic::Queue_1<::Hdg::rdtTcpMessage*>* m_messageQueue; // 0x40
		::System::IO::Stream* m_stream; // 0x48
		::System::Boolean m_run; // 0x50
		::Hdg::WriteMessageThread_State m_state; // 0x54

		::System::Void _ctor(::System::IO::Stream* stream, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*))((::PBYTE)hIl2Cpp + HDG_WRITEMESSAGETHREAD__CTOR_OFFSET))(this, stream, name);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_WRITEMESSAGETHREAD_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_WRITEMESSAGETHREAD_STOP_OFFSET))(this);
		}

		::System::Void EnqueueMessage(::Hdg::rdtTcpMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_WRITEMESSAGETHREAD_ENQUEUEMESSAGE_OFFSET))(this, message);
		}

		::System::Void ThreadFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_WRITEMESSAGETHREAD_THREADFUNC_OFFSET))(this);
		}

		::System::Void OnIdle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_WRITEMESSAGETHREAD_ONIDLE_OFFSET))(this);
		}

		::System::Void OnWriting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_WRITEMESSAGETHREAD_ONWRITING_OFFSET))(this);
		}

		::System::Void OnLostConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_WRITEMESSAGETHREAD_ONLOSTCONNECTION_OFFSET))(this);
		}
	};
}
