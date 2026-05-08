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

#define MOLEMOLE_NAPHASRECEIVEDEVENT_ONBEHAVIORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x13EAE730)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_ONEND_OFFSET UNITYSDK_OFFSET(0x13EADE10)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_ONRESET_OFFSET UNITYSDK_OFFSET(0x13EAEA70)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_ONSTART_OFFSET UNITYSDK_OFFSET(0x13EAD880)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EADCA0)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_RECEIVEDEVENT_1_OFFSET UNITYSDK_OFFSET(0x13EAE1C0)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_RECEIVEDEVENT_2_OFFSET UNITYSDK_OFFSET(0x13EAE300)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_RECEIVEDEVENT_3_OFFSET UNITYSDK_OFFSET(0x13EAE4D0)
#define MOLEMOLE_NAPHASRECEIVEDEVENT_RECEIVEDEVENT_OFFSET UNITYSDK_OFFSET(0x13EAE160)
#define MOLEMOLE_NAPHASRECEIVEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EAEB00)
#define MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONBEHAVIORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x13EAEBD0)
#define MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x13EAEC60)
#define MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x13EAECF0)
#define MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x13EAED80)
#define MOLEMOLE_NAPHASRECEIVEDEVENT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EAEE10)

namespace MoleMole
{
	inline static constexpr unsigned int NapHasReceivedEvent_TypeDefinitionIndex = 53711;

	class NapHasReceivedEvent : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x50
		::BehaviorDesigner::Runtime::SharedVariable* storedValue2; // 0x58
		::BehaviorDesigner::Runtime::SharedVariable* storedValue3; // 0x60
		::MoleMole::Battle::Entity* ownerEntity; // 0x68
		::BehaviorDesigner::Runtime::SharedVariable* storedValue1; // 0x70
		::BehaviorDesigner::Runtime::SharedString* eventName; // 0x78
		::BehaviorDesigner::Runtime::SharedFloat* KeepTime; // 0x80
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
