#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F80BD90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_CANREEVALUATE_OFFSET UNITYSDK_OFFSET(0x1F80C0A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_CANRUNPARALLELCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F80C060)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1F80BD00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F80BE00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1F80BD40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1F80BF70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONEND_OFFSET UNITYSDK_OFFSET(0x1F80BFC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONREEVALUATIONENDED_OFFSET UNITYSDK_OFFSET(0x1F80C130)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONREEVALUATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1F80C0E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F80BBE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1F80C010)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F80C2F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F80C3E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_CANREEVALUATE_OFFSET UNITYSDK_OFFSET(0x1F80C470)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_CANRUNPARALLELCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F80C500)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1F80C590)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F80C620)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONCHILDSTARTED_OFFSET UNITYSDK_OFFSET(0x1F80C6C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1F80C750)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F80C7E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONREEVALUATIONENDED_OFFSET UNITYSDK_OFFSET(0x1F80C870)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONREEVALUATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1F80C900)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F80C990)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_OVERRIDESTATUS_OFFSET UNITYSDK_OFFSET(0x1F80CA20)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int UtilitySelector_TypeDefinitionIndex = 33994;

	class UtilitySelector : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* availableChildren; // 0x60
		::System::Int32 currentChildIndex; // 0x68
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x6C
		::System::Single highestUtility; // 0x70
		::System::Boolean reevaluating; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONSTART_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void OnChildStarted(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONCHILDSTARTED_OFFSET))(this, childIndex);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::System::Int32 childIndex, ::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONCHILDEXECUTED_OFFSET))(this, childIndex, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONEND_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_OVERRIDESTATUS_OFFSET))(this, status);
		}

		::System::Boolean CanRunParallelChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_CANRUNPARALLELCHILDREN_OFFSET))(this);
		}

		::System::Boolean CanReevaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_CANREEVALUATE_OFFSET))(this);
		}

		::System::Boolean OnReevaluationStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONREEVALUATIONSTARTED_OFFSET))(this);
		}

		::System::Void OnReevaluationEnded(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR_ONREEVALUATIONENDED_OFFSET))(this, status);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Boolean __base_CanReevaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_CANREEVALUATE_OFFSET))(this);
		}

		::System::Boolean __base_CanRunParallelChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_CANRUNPARALLELCHILDREN_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::System::Int32 P0, ::BehaviorDesigner::Runtime::Tasks::TaskStatus P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONCHILDEXECUTED_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnChildStarted(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONCHILDSTARTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReevaluationEnded(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONREEVALUATIONENDED_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnReevaluationStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONREEVALUATIONSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OverrideStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UTILITYSELECTOR___BASE_OVERRIDESTATUS_OFFSET))(this, P0);
		}
	};
}
