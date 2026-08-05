#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }

#define MOLEMOLE_NAPHASRECEIVEDEVENT_ONBEHAVIORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x14A1A620)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_ONEND_OFFSET UNITYSDK_OFFSET(0x14A19C90)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_ONRESET_OFFSET UNITYSDK_OFFSET(0x14A1A970)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_ONSTART_OFFSET UNITYSDK_OFFSET(0x14A195F0)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14A19A20)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_RECEIVEDEVENT_1_OFFSET UNITYSDK_OFFSET(0x14A1A1B0)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_RECEIVEDEVENT_2_OFFSET UNITYSDK_OFFSET(0x14A1A290)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_RECEIVEDEVENT_3_OFFSET UNITYSDK_OFFSET(0x14A1A410)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_RECEIVEDEVENT_OFFSET UNITYSDK_OFFSET(0x14A19FF0)
#define MOLEMOLE_NAPHASRECEIVEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1AA00)
#define MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONBEHAVIORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x14A1AAD0)
#define MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x14A1AB60)
#define MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x14A1ABF0)
#define MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x14A1AC80)
#define MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14A1AD10)

namespace MoleMole
{
	inline static constexpr unsigned int NapHasReceivedEvent_TypeDefinitionIndex = 58786;

	class NapHasReceivedEvent : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedVariable* storedValue3; // 0x50
		::BehaviorDesigner::Runtime::SharedVariable* storedValue1; // 0x58
		::MoleMole::Battle::Entity* ownerEntity; // 0x60
		::BehaviorDesigner::Runtime::SharedVariable* storedValue2; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* KeepTime; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78
		::BehaviorDesigner::Runtime::SharedString* eventName; // 0x80
		::System::Boolean registered; // 0x88
		::System::Boolean eventReceived; // 0x89
		::System::Double lastReceivedTime; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT_ONEND_OFFSET))(this);
		}

		::System::Void ReceivedEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT_RECEIVEDEVENT_OFFSET))(this);
		}

		::System::Void ReceivedEvent_1(::System::Object* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT_RECEIVEDEVENT_1_OFFSET))(this, arg1);
		}

		::System::Void ReceivedEvent_2(::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT_RECEIVEDEVENT_2_OFFSET))(this, arg1, arg2);
		}

		::System::Void ReceivedEvent_3(::System::Object* arg1, ::System::Object* arg2, ::System::Object* arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT_RECEIVEDEVENT_3_OFFSET))(this, arg1, arg2, arg3);
		}

		::System::Void OnBehaviorComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT_ONBEHAVIORCOMPLETE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnBehaviorComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONBEHAVIORCOMPLETE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
