#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1792B2C0)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1792B270)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1792ABB0)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1792B320)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1792B390)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_ONEND_OFFSET UNITYSDK_OFFSET(0x1792B410)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1792B480)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_ONSTART_OFFSET UNITYSDK_OFFSET(0x1792AC70)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_SHUFFLECHILDREN_OFFSET UNITYSDK_OFFSET(0x1792ACC0)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1792B4D0)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1792B600)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1792B690)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1792B720)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1792B7B0)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1792B840)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1792B8D0)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1792B960)
#define MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1792B9F0)

namespace MoleMole
{
	inline static constexpr unsigned int RandomSelectorWithSharedWeight_TypeDefinitionIndex = 69956;

	class RandomSelectorWithSharedWeight : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::System::Collections::Generic::Queue_1<::System::Int32>* childrenExecutionOrder; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* childIndexList; // 0x68
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* childWeightList; // 0x70
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x78
		::System::Boolean useSeed; // 0x7C
		::System::Int32 seed; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_ONSTART_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_ONEND_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_ONRESET_OFFSET))(this);
		}

		::System::Void ShuffleChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT_SHUFFLECHILDREN_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMSELECTORWITHSHAREDWEIGHT___BASE_ONSTART_OFFSET))(this);
		}
	};
}
