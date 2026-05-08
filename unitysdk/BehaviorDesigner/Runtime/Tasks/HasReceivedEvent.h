#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace System { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONBEHAVIORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BDBEB30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONEND_OFFSET UNITYSDK_OFFSET(0x1BDBE270)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BDBEE70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONSTART_OFFSET UNITYSDK_OFFSET(0x1BDBDEE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BDBE220)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_RECEIVEDEVENT_1_OFFSET UNITYSDK_OFFSET(0x1BDBE600)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_RECEIVEDEVENT_2_OFFSET UNITYSDK_OFFSET(0x1BDBE720)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_RECEIVEDEVENT_3_OFFSET UNITYSDK_OFFSET(0x1BDBE8E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_RECEIVEDEVENT_OFFSET UNITYSDK_OFFSET(0x1BDBE5C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBEEE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONBEHAVIORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BDBEFA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1BDBF030)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BDBF0C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1BDBF150)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BDBF1E0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int HasReceivedEvent_TypeDefinitionIndex = 31810;

	class HasReceivedEvent : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* eventName; // 0x50
		::BehaviorDesigner::Runtime::SharedVariable* storedValue3; // 0x58
		::BehaviorDesigner::Runtime::SharedVariable* storedValue2; // 0x60
		::BehaviorDesigner::Runtime::SharedVariable* storedValue1; // 0x68
		::System::Boolean eventReceived; // 0x70
		::System::Boolean registered; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONEND_OFFSET))(this);
		}

		::System::Void ReceivedEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_RECEIVEDEVENT_OFFSET))(this);
		}

		::System::Void ReceivedEvent_1(::System::Object* arg1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_RECEIVEDEVENT_1_OFFSET))(this, arg1);
		}

		::System::Void ReceivedEvent_2(::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_RECEIVEDEVENT_2_OFFSET))(this, arg1, arg2);
		}

		::System::Void ReceivedEvent_3(::System::Object* arg1, ::System::Object* arg2, ::System::Object* arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_RECEIVEDEVENT_3_OFFSET))(this, arg1, arg2, arg3);
		}

		::System::Void OnBehaviorComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONBEHAVIORCOMPLETE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnBehaviorComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONBEHAVIORCOMPLETE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
