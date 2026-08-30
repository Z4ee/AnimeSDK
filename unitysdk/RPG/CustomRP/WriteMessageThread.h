#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/IOThread.h"

namespace RPG::CustomRP { class IMsgFactory; }
namespace RPG::CustomRP { class IRPMessage; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }
namespace System::IO { class Stream; }
namespace System::Threading { class AutoResetEvent; }

#define RPG_CUSTOMRP_WRITEMESSAGETHREAD_ENQUEUEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C6F6210)
#define RPG_CUSTOMRP_WRITEMESSAGETHREAD_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1C6F6350)
#define RPG_CUSTOMRP_WRITEMESSAGETHREAD_STOP_OFFSET UNITYSDK_OFFSET(0x1C6F61B0)
#define RPG_CUSTOMRP_WRITEMESSAGETHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F5EC0)
#define RPG_CUSTOMRP_WRITEMESSAGETHREAD__ONIDLE_OFFSET UNITYSDK_OFFSET(0x1C6F6360)
#define RPG_CUSTOMRP_WRITEMESSAGETHREAD__ONWRITING_OFFSET UNITYSDK_OFFSET(0x1C6F6500)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int WriteMessageThread_TypeDefinitionIndex = 37215;

	class WriteMessageThread : public ::RPG::CustomRP::IOThread
	{
	public:
		::System::IO::BinaryWriter* _writer; // 0x40
		::System::Collections::Generic::Queue_1<::RPG::CustomRP::IRPMessage*>* _messageQueue; // 0x48
		::System::Threading::AutoResetEvent* _event; // 0x50
		::System::IO::BinaryWriter* _bw; // 0x58
		::System::IO::MemoryStream* _writeMS; // 0x60
		::Il2CppArray<::System::Byte>* _bufferTmp; // 0x68
		::RPG::CustomRP::IRPMessage* _currentMessage; // 0x70

		::System::Void _ctor(::System::IO::Stream* a1, ::System::String* a2, ::RPG::CustomRP::IMsgFactory* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::RPG::CustomRP::IMsgFactory*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WRITEMESSAGETHREAD__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WRITEMESSAGETHREAD_STOP_OFFSET))(this);
		}

		::System::Void EnqueueMessage(::RPG::CustomRP::IRPMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WRITEMESSAGETHREAD_ENQUEUEMESSAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WRITEMESSAGETHREAD_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Void _OnIdle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WRITEMESSAGETHREAD__ONIDLE_OFFSET))(this);
		}

		::System::Void _OnWriting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WRITEMESSAGETHREAD__ONWRITING_OFFSET))(this);
		}
	};
}
