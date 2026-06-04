#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class IMsgFactory; }
namespace RPG::CustomRP { class IRPMessage; }
namespace RPG::CustomRP { class IRPMsgCreator; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CUSTOMRP_MSGCALLBACK_ADDMSGCREATOR_OFFSET UNITYSDK_OFFSET(0x18EED6B0)
#define RPG_CUSTOMRP_MSGCALLBACK_CLEAR_OFFSET UNITYSDK_OFFSET(0x18EEDB60)
#define RPG_CUSTOMRP_MSGCALLBACK_FINDMSGCREATOR_OFFSET UNITYSDK_OFFSET(0x18EDB1C0)
#define RPG_CUSTOMRP_MSGCALLBACK_GET_MSGCB_OFFSET UNITYSDK_OFFSET(0x18EDC200)
#define RPG_CUSTOMRP_MSGCALLBACK_PROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x18EED6A0)
#define RPG_CUSTOMRP_MSGCALLBACK_PROCESS_OFFSET UNITYSDK_OFFSET(0x18EDC680)
#define RPG_CUSTOMRP_MSGCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDAF60)
#define RPG_CUSTOMRP_MSGCALLBACK__ONREADMESSAGE_OFFSET UNITYSDK_OFFSET(0x18EED8E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MsgCallback_TypeDefinitionIndex = 35586;

	class MsgCallback : public ::System::Object
	{
	public:
		::RPG::CustomRP::IMsgFactory* _msgFactory; // 0x10
		::System::Collections::Generic::List_1<::RPG::CustomRP::IRPMessage*>* _messagesToProcess; // 0x18
		::System::Action_1<::RPG::CustomRP::IRPMessage*>* _msgCb; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::IRPMsgCreator*>* _messageCreators; // 0x28
		::System::Boolean _DelayProcess; // 0x30

		::System::Void _ctor(::System::Boolean a1, ::RPG::CustomRP::IMsgFactory* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::CustomRP::IMsgFactory*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK_PROCESSMESSAGE_OFFSET))(this);
		}

		::System::Void AddMsgCreator(::RPG::CustomRP::IRPMsgCreator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMsgCreator*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK_ADDMSGCREATOR_OFFSET))(this, a1);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK_PROCESS_OFFSET))(this);
		}

		::RPG::CustomRP::IRPMsgCreator* FindMsgCreator(::System::String* a1)
		{
			return ((::RPG::CustomRP::IRPMsgCreator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK_FINDMSGCREATOR_OFFSET))(this, a1);
		}

		::System::Action_1<::RPG::CustomRP::IRPMessage*>* get_MsgCb()
		{
			return ((::System::Action_1<::RPG::CustomRP::IRPMessage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK_GET_MSGCB_OFFSET))(this);
		}

		::System::Void _OnReadMessage(::RPG::CustomRP::IRPMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK__ONREADMESSAGE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MSGCALLBACK_CLEAR_OFFSET))(this);
		}
	};
}
