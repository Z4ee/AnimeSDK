#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E3C39F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1E3C39A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E3C3720)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1E3C3A50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1E3C3AC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONEND_OFFSET UNITYSDK_OFFSET(0x1E3C3B30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E3C3B90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E3C37E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_SHUFFLECHILDEN_OFFSET UNITYSDK_OFFSET(0x1E3C3830)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C3BE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E3C3D10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1E3C3DA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1E3C3E30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1E3C3EC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1E3C3F50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1E3C3FE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E3C4070)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E3C4100)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int RandomSelector_TypeDefinitionIndex = 33353;

	class RandomSelector : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::System::Collections::Generic::Stack_1<::System::Int32>* childrenExecutionOrder; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* childIndexList; // 0x68
		::System::Boolean useSeed; // 0x70
		::System::Int32 seed; // 0x74
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONSTART_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONEND_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONRESET_OFFSET))(this);
		}

		::System::Void ShuffleChilden()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_SHUFFLECHILDEN_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONSTART_OFFSET))(this);
		}
	};
}
