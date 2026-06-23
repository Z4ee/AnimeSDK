#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace System { class Object; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONBEHAVIORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E106AC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONEND_OFFSET UNITYSDK_OFFSET(0x1E106200)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E106E00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E105E70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E1061B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_RECEIVEDEVENT_1_OFFSET UNITYSDK_OFFSET(0x1E106590)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_RECEIVEDEVENT_2_OFFSET UNITYSDK_OFFSET(0x1E1066B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_RECEIVEDEVENT_3_OFFSET UNITYSDK_OFFSET(0x1E106870)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT_RECEIVEDEVENT_OFFSET UNITYSDK_OFFSET(0x1E106550)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E106E70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONBEHAVIORCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E106F30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1E106FC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E107050)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E1070E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASRECEIVEDEVENT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E107170)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int HasReceivedEvent_TypeDefinitionIndex = 33361;

	class HasReceivedEvent : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* eventName; // 0x50
		::BehaviorDesigner::Runtime::SharedVariable* storedValue3; // 0x58
		::BehaviorDesigner::Runtime::SharedVariable* storedValue1; // 0x60
		::BehaviorDesigner::Runtime::SharedVariable* storedValue2; // 0x68
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
