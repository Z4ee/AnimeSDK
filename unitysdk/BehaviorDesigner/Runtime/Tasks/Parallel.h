#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C1B6B10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_CANRUNPARALLELCHILDREN_OFFSET UNITYSDK_OFFSET(0x1C1B6A90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1C1B6AD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1C1B6990)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1C1B6B70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1C1B6A10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1C1B6C80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_ONEND_OFFSET UNITYSDK_OFFSET(0x1C1B6D00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1C1B6BF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B6D70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C1B6E00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_CANRUNPARALLELCHILDREN_OFFSET UNITYSDK_OFFSET(0x1C1B6E80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1C1B6F00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1C1B6F80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1C1B7010)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1C1B70B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1C1B7150)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1C1B71F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1C1B7280)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Parallel_TypeDefinitionIndex = 31798;

	class Parallel : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::Tasks::TaskStatus>* executionStatus; // 0x60
		::System::Int32 currentChildIndex; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnChildStarted(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_ONCHILDSTARTED_OFFSET))(this, childIndex);
		}

		::System::Boolean CanRunParallelChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_CANRUNPARALLELCHILDREN_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::System::Int32 childIndex, ::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_ONCHILDEXECUTED_OFFSET))(this, childIndex, childStatus);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_OVERRIDESTATUS_OFFSET))(this, status);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL_ONEND_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Boolean __base_CanRunParallelChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_CANRUNPARALLELCHILDREN_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::System::Int32 P0, ::BehaviorDesigner::Runtime::Tasks::TaskStatus P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_ONCHILDEXECUTED_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnChildStarted(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_ONCHILDSTARTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_ONEND_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLEL___BASE_OVERRIDESTATUS_OFFSET))(this, P0);
		}
	};
}
