#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E32D620)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1E32D5E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1E32D690)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1E32D6E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE_ONEND_OFFSET UNITYSDK_OFFSET(0x1E32D730)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32D780)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E32D810)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1E32D8A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1E32D930)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1E32D9C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1E32DA50)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int Sequence_TypeDefinitionIndex = 33357;

	class Sequence : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x60
		::System::Int32 currentChildIndex; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE_ONEND_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SEQUENCE___BASE_ONEND_OFFSET))(this);
		}
	};
}
