#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BA7A090)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_CANRUNPARALLELCHILDREN_OFFSET UNITYSDK_OFFSET(0x1BA7A010)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1BA7A050)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1BA79F10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1BA7A0F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1BA79F90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1BA7A170)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_ONEND_OFFSET UNITYSDK_OFFSET(0x1BA7A280)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1BA7A1F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7A2F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BA7A380)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_CANRUNPARALLELCHILDREN_OFFSET UNITYSDK_OFFSET(0x1BA7A410)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1BA7A4A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1BA7A530)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1BA7A5C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1BA7A660)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1BA7A6F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1BA7A780)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1BA7A810)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int ParallelSelector_TypeDefinitionIndex = 31800;

	class ParallelSelector : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::Tasks::TaskStatus>* executionStatus; // 0x60
		::System::Int32 currentChildIndex; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnChildStarted(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_ONCHILDSTARTED_OFFSET))(this, childIndex);
		}

		::System::Boolean CanRunParallelChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_CANRUNPARALLELCHILDREN_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::System::Int32 childIndex, ::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_ONCHILDEXECUTED_OFFSET))(this, childIndex, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_OVERRIDESTATUS_OFFSET))(this, status);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR_ONEND_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Boolean __base_CanRunParallelChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_CANRUNPARALLELCHILDREN_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::System::Int32 P0, ::BehaviorDesigner::Runtime::Tasks::TaskStatus P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_ONCHILDEXECUTED_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnChildStarted(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_ONCHILDSTARTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_ONEND_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PARALLELSELECTOR___BASE_OVERRIDESTATUS_OFFSET))(this, P0);
		}
	};
}
