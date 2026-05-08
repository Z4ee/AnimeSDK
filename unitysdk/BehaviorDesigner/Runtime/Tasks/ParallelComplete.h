#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BDBF3F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_CANRUNPARALLELCHILDREN_OFFSET UNITYSDK_OFFSET(0x1BDBF370)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1BDBF3B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1BDBF270)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1BDBF450)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1BDBF2F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1BDBF4D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_ONEND_OFFSET UNITYSDK_OFFSET(0x1BDBF5F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1BDBF550)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBF660)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BDBF6F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_CANRUNPARALLELCHILDREN_OFFSET UNITYSDK_OFFSET(0x1BDBF780)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1BDBF810)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1BDBF8A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1BDBF930)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1BDBF9D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1BDBFA60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1BDBFAF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1BDBFB80)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int ParallelComplete_TypeDefinitionIndex = 31799;

	class ParallelComplete : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::Tasks::TaskStatus>* executionStatus; // 0x60
		::System::Int32 currentChildIndex; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnChildStarted(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_ONCHILDSTARTED_OFFSET))(this, childIndex);
		}

		::System::Boolean CanRunParallelChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_CANRUNPARALLELCHILDREN_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::System::Int32 childIndex, ::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_ONCHILDEXECUTED_OFFSET))(this, childIndex, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_OVERRIDESTATUS_OFFSET))(this, status);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE_ONEND_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Boolean __base_CanRunParallelChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_CANRUNPARALLELCHILDREN_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::System::Int32 P0, ::BehaviorDesigner::Runtime::Tasks::TaskStatus P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_ONCHILDEXECUTED_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnChildStarted(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_ONCHILDSTARTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_ONEND_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELCOMPLETE___BASE_OVERRIDESTATUS_OFFSET))(this, P0);
		}
	};
}
