#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F1BA5C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1F1BA570)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1F1BA2E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F1BA620)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1F1BA690)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F1BA700)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1BA760)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1BA3A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_SHUFFLECHILDEN_OFFSET UNITYSDK_OFFSET(0x1F1BA3F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1BA7B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F1BA8E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1F1BA970)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1F1BAA00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F1BAA90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1F1BAB20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F1BABB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1BAC40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1BACD0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int RandomSequence_TypeDefinitionIndex = 33990;

	class RandomSequence : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* childIndexList; // 0x60
		::System::Collections::Generic::Stack_1<::System::Int32>* childrenExecutionOrder; // 0x68
		::System::Boolean useSeed; // 0x70
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x74
		::System::Int32 seed; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_ONSTART_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_ONEND_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_ONRESET_OFFSET))(this);
		}

		::System::Void ShuffleChilden()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE_SHUFFLECHILDEN_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSEQUENCE___BASE_ONSTART_OFFSET))(this);
		}
	};
}
