#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/IOThread.h"

namespace RPG::CustomRP { class IMsgFactory; }
namespace RPG::CustomRP { class IRPMessage; }
namespace RPG::CustomRP { class ReadMessageThread_MsgDispatcher; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class MemoryStream; }
namespace System::IO { class Stream; }

#define RPG_CUSTOMRP_READMESSAGETHREAD_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x181458F0)
#define RPG_CUSTOMRP_READMESSAGETHREAD_READBYTESBLOCKED_OFFSET UNITYSDK_OFFSET(0x18175FA0)
#define RPG_CUSTOMRP_READMESSAGETHREAD_START_OFFSET UNITYSDK_OFFSET(0x18145780)
#define RPG_CUSTOMRP_READMESSAGETHREAD_STOP_OFFSET UNITYSDK_OFFSET(0x181457B0)
#define RPG_CUSTOMRP_READMESSAGETHREAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x18145790)
#define RPG_CUSTOMRP_READMESSAGETHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x18145490)
#define RPG_CUSTOMRP_READMESSAGETHREAD__ONREADING_OFFSET UNITYSDK_OFFSET(0x18176020)
#define RPG_CUSTOMRP_READMESSAGETHREAD__READMSG_OFFSET UNITYSDK_OFFSET(0x18175CD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReadMessageThread_TypeDefinitionIndex = 35276;

	class ReadMessageThread : public ::RPG::CustomRP::IOThread
	{
	public:
		::System::IO::BinaryReader* _reader; // 0x40
		::RPG::CustomRP::ReadMessageThread_MsgDispatcher* _dispatcher; // 0x48
		::Il2CppArray<::System::Byte>* _bufferTmp; // 0x50
		::System::IO::MemoryStream* _readMS; // 0x58
		::System::Action_1<::RPG::CustomRP::IRPMessage*>* _callback; // 0x60
		::System::IO::BinaryReader* _br; // 0x68

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Action_1<::RPG::CustomRP::IRPMessage*>* callback, ::System::String* name, ::RPG::CustomRP::IMsgFactory* msgFactory)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Action_1<::RPG::CustomRP::IRPMessage*>*, ::System::String*, ::RPG::CustomRP::IMsgFactory*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD__CTOR_OFFSET))(this, stream, callback, name, msgFactory);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD_UPDATE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD_STOP_OFFSET))(this);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Boolean _ReadMsg(::System::IO::BinaryReader* br)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD__READMSG_OFFSET))(this, br);
		}

		::System::Void ReadBytesBlocked(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 msgLen)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD_READBYTESBLOCKED_OFFSET))(this, buffer, msgLen);
		}

		::System::Void _OnReading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_READMESSAGETHREAD__ONREADING_OFFSET))(this);
		}
	};
}
