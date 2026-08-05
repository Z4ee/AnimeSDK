#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F764180)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1F764120)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F7641F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1F764240)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR_ONEND_OFFSET UNITYSDK_OFFSET(0x1F764290)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F763F40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7642E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F7643D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1F764460)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F7644F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1F764580)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F764610)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7646A0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int PrioritySelector_TypeDefinitionIndex = 33988;

	class PrioritySelector : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* childrenExecutionOrder; // 0x60
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x68
		::System::Int32 currentChildIndex; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR_ONSTART_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR_ONEND_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_PRIORITYSELECTOR___BASE_ONSTART_OFFSET))(this);
		}
	};
}
