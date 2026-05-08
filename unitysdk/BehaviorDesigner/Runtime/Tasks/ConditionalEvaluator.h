#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Decorator.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime::Tasks { class Conditional; }
namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BAA0900)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_CANREEVALUATE_OFFSET UNITYSDK_OFFSET(0x1BAA0A40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1BAA07C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1BAA0AD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONDRAWNODETEXT_OFFSET UNITYSDK_OFFSET(0x1BAA0C30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONEND_OFFSET UNITYSDK_OFFSET(0x1BAA0BC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BAA0CC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONSTART_OFFSET UNITYSDK_OFFSET(0x1BAA08A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BAA09D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_OVERRIDESTATUS_1_OFFSET UNITYSDK_OFFSET(0x1BAA0B70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1BAA0B20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA0D10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BAA0DB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_CANREEVALUATE_OFFSET UNITYSDK_OFFSET(0x1BAA0E40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1BAA0ED0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1BAA0F60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONDRAWNODETEXT_OFFSET UNITYSDK_OFFSET(0x1BAA0FF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1BAA1080)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BAA1110)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1BAA11A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BAA1230)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_OVERRIDESTATUS_1_OFFSET UNITYSDK_OFFSET(0x1BAA1350)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1BAA12C0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int ConditionalEvaluator_TypeDefinitionIndex = 31814;

	class ConditionalEvaluator : public ::BehaviorDesigner::Runtime::Tasks::Decorator
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* reevaluate; // 0x58
		::BehaviorDesigner::Runtime::Tasks::Conditional* conditionalTask; // 0x60
		::System::Boolean graphLabel; // 0x68
		::System::Boolean checkConditionalTask; // 0x69
		::System::Boolean conditionalTaskFailed; // 0x6A
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONSTART_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_CANEXECUTE_OFFSET))(this);
		}

		::System::Boolean CanReevaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_CANREEVALUATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_OVERRIDESTATUS_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus_1(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_OVERRIDESTATUS_1_OFFSET))(this, status);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONEND_OFFSET))(this);
		}

		::System::String* OnDrawNodeText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONDRAWNODETEXT_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR_ONRESET_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Boolean __base_CanReevaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_CANREEVALUATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::String* __base_OnDrawNodeText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONDRAWNODETEXT_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OverrideStatus()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_OVERRIDESTATUS_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OverrideStatus_1(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_CONDITIONALEVALUATOR___BASE_OVERRIDESTATUS_1_OFFSET))(this, P0);
		}
	};
}
