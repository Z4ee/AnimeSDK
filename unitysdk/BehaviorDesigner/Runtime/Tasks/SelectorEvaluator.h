#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BAA1C40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_CANREEVALUATE_OFFSET UNITYSDK_OFFSET(0x1BAA1EB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_CANRUNPARALLELCHILDREN_OFFSET UNITYSDK_OFFSET(0x1BAA1E70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1BAA1BB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1BAA1CC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1BAA1BF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1BAA1D80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_ONEND_OFFSET UNITYSDK_OFFSET(0x1BAA1DD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_ONREEVALUATIONENDED_OFFSET UNITYSDK_OFFSET(0x1BAA1F50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_ONREEVALUATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1BAA1EF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1BAA1E20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA2070)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BAA2110)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_CANREEVALUATE_OFFSET UNITYSDK_OFFSET(0x1BAA21A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_CANRUNPARALLELCHILDREN_OFFSET UNITYSDK_OFFSET(0x1BAA2230)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1BAA22C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1BAA2350)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1BAA23F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1BAA2480)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1BAA2510)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_ONREEVALUATIONENDED_OFFSET UNITYSDK_OFFSET(0x1BAA25A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_ONREEVALUATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1BAA2630)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1BAA26C0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int SelectorEvaluator_TypeDefinitionIndex = 31805;

	class SelectorEvaluator : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::System::Int32 currentChildIndex; // 0x60
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x64
		::BehaviorDesigner::Runtime::Tasks::TaskStatus storedExecutionStatus; // 0x68
		::System::Int32 storedCurrentChildIndex; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR__CTOR_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void OnChildStarted(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_ONCHILDSTARTED_OFFSET))(this, childIndex);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::System::Int32 childIndex, ::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_ONCHILDEXECUTED_OFFSET))(this, childIndex, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_ONEND_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_OVERRIDESTATUS_OFFSET))(this, status);
		}

		::System::Boolean CanRunParallelChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_CANRUNPARALLELCHILDREN_OFFSET))(this);
		}

		::System::Boolean CanReevaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_CANREEVALUATE_OFFSET))(this);
		}

		::System::Boolean OnReevaluationStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_ONREEVALUATIONSTARTED_OFFSET))(this);
		}

		::System::Void OnReevaluationEnded(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR_ONREEVALUATIONENDED_OFFSET))(this, status);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Boolean __base_CanReevaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_CANREEVALUATE_OFFSET))(this);
		}

		::System::Boolean __base_CanRunParallelChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_CANRUNPARALLELCHILDREN_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::System::Int32 P0, ::BehaviorDesigner::Runtime::Tasks::TaskStatus P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_ONCHILDEXECUTED_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnChildStarted(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_ONCHILDSTARTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReevaluationEnded(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_ONREEVALUATIONENDED_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnReevaluationStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_ONREEVALUATIONSTARTED_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SELECTOREVALUATOR___BASE_OVERRIDESTATUS_OFFSET))(this, P0);
		}
	};
}
