#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1642C2E0)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1642C290)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1642BDA0)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1642C350)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1642C3C0)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT_ONEND_OFFSET UNITYSDK_OFFSET(0x1642C440)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1642C4B0)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT_ONSTART_OFFSET UNITYSDK_OFFSET(0x1642BE60)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT_SHUFFLECHILDREN_OFFSET UNITYSDK_OFFSET(0x1642BEB0)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1642C500)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1642C650)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1642C6E0)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1642C770)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1642C800)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1642C890)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1642C920)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1642C9B0)
#define MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1642CA40)

namespace MoleMole
{
	inline static constexpr unsigned int RandomSelectorWithWeight_TypeDefinitionIndex = 59481;

	class RandomSelectorWithWeight : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* childIndexList; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* childWeightList; // 0x68
		::System::Collections::Generic::Queue_1<::System::Int32>* childrenExecutionOrder; // 0x70
		::System::Boolean useSeed; // 0x78
		::System::Int32 seed; // 0x7C
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT_ONSTART_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT_ONEND_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT_ONRESET_OFFSET))(this);
		}

		::System::Void ShuffleChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT_SHUFFLECHILDREN_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHWEIGHT___BASE_ONSTART_OFFSET))(this);
		}
	};
}
