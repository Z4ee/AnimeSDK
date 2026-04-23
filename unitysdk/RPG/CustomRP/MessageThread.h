#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class IMsgFactory; }
namespace RPG::CustomRP { class IRPMessage; }
namespace RPG::CustomRP { class ReadMessageThread; }
namespace RPG::CustomRP { class WriteMessageThread; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Net::Sockets { class TcpClient; }

#define RPG_CUSTOMRP_MESSAGETHREAD_ENQUEUEMESSAGE_OFFSET UNITYSDK_OFFSET(0x181371F0)
#define RPG_CUSTOMRP_MESSAGETHREAD_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x18137C50)
#define RPG_CUSTOMRP_MESSAGETHREAD_ONCONNECTING_OFFSET UNITYSDK_OFFSET(0x18137A10)
#define RPG_CUSTOMRP_MESSAGETHREAD_STOP_OFFSET UNITYSDK_OFFSET(0x18137570)
#define RPG_CUSTOMRP_MESSAGETHREAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x18137C90)
#define RPG_CUSTOMRP_MESSAGETHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x18136AC0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MessageThread_TypeDefinitionIndex = 35280;

	class MessageThread : public ::System::Object
	{
	public:
		::RPG::CustomRP::ReadMessageThread* _readThread; // 0x10
		::RPG::CustomRP::WriteMessageThread* _writeThread; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD__CTOR_OFFSET))(this);
		}

		::System::Void OnConnecting(::System::String* name, ::System::Net::Sockets::TcpClient* client, ::System::Action_1<::RPG::CustomRP::IRPMessage*>* callback, ::RPG::CustomRP::IMsgFactory* msgFactory)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Sockets::TcpClient*, ::System::Action_1<::RPG::CustomRP::IRPMessage*>*, ::RPG::CustomRP::IMsgFactory*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD_ONCONNECTING_OFFSET))(this, name, client, callback, msgFactory);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD_UPDATE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD_STOP_OFFSET))(this);
		}

		::System::Void EnqueueMessage(::RPG::CustomRP::IRPMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD_ENQUEUEMESSAGE_OFFSET))(this, msg);
		}

		::System::Boolean get_IsInvalid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD_GET_ISINVALID_OFFSET))(this);
		}
	};
}
