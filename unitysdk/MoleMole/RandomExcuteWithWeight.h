#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x141A3950)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_CHOOSEEXCUTEINDEX_OFFSET UNITYSDK_OFFSET(0x141A36B0)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x141A3900)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_GETALLWEIGHT_OFFSET UNITYSDK_OFFSET(0x141A37A0)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x141A35B0)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x141A39A0)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x141A3A00)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_ONEND_OFFSET UNITYSDK_OFFSET(0x141A3A50)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_ONRESET_OFFSET UNITYSDK_OFFSET(0x141A3AA0)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_ONSTART_OFFSET UNITYSDK_OFFSET(0x141A3660)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x141A3AF0)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x141A3BE0)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x141A3C70)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x141A3D00)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x141A3D90)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x141A3E20)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x141A3EB0)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x141A3F40)
#define MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x141A3FD0)

namespace MoleMole
{
	inline static constexpr unsigned int RandomExcuteWithWeight_TypeDefinitionIndex = 48139;

	class RandomExcuteWithWeight : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* childWeightList; // 0x60
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x68
		::System::Boolean useSeed; // 0x6C
		::System::Int32 _excuteIndex; // 0x70
		::System::Int32 seed; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_ONSTART_OFFSET))(this);
		}

		::System::Single GetAllWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_GETALLWEIGHT_OFFSET))(this);
		}

		::System::Int32 ChooseExcuteIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_CHOOSEEXCUTEINDEX_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_ONEND_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT_ONRESET_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHWEIGHT___BASE_ONSTART_OFFSET))(this);
		}
	};
}
