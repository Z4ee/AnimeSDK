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

#define RPG_CUSTOMRP_MESSAGETHREAD_ENQUEUEMESSAGE_OFFSET UNITYSDK_OFFSET(0x18572350)
#define RPG_CUSTOMRP_MESSAGETHREAD_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x18573060)
#define RPG_CUSTOMRP_MESSAGETHREAD_ONCONNECTING_OFFSET UNITYSDK_OFFSET(0x18572E10)
#define RPG_CUSTOMRP_MESSAGETHREAD_PREPARESTOP_OFFSET UNITYSDK_OFFSET(0x185727A0)
#define RPG_CUSTOMRP_MESSAGETHREAD_STOP_OFFSET UNITYSDK_OFFSET(0x185727C0)
#define RPG_CUSTOMRP_MESSAGETHREAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x185730A0)
#define RPG_CUSTOMRP_MESSAGETHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x18571A20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MessageThread_TypeDefinitionIndex = 37221;

	class MessageThread : public ::System::Object
	{
	public:
		::RPG::CustomRP::WriteMessageThread* _writeThread; // 0x10
		::RPG::CustomRP::ReadMessageThread* _readThread; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD__CTOR_OFFSET))(this);
		}

		::System::Void PrepareStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD_PREPARESTOP_OFFSET))(this);
		}

		::System::Void OnConnecting(::System::String* a1, ::System::Net::Sockets::TcpClient* a2, ::System::Action_1<::RPG::CustomRP::IRPMessage*>* a3, ::RPG::CustomRP::IMsgFactory* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Sockets::TcpClient*, ::System::Action_1<::RPG::CustomRP::IRPMessage*>*, ::RPG::CustomRP::IMsgFactory*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD_ONCONNECTING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD_UPDATE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD_STOP_OFFSET))(this);
		}

		::System::Void EnqueueMessage(::RPG::CustomRP::IRPMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD_ENQUEUEMESSAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInvalid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESSAGETHREAD_GET_ISINVALID_OFFSET))(this);
		}
	};
}
