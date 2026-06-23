#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x12BDE900)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_CHOOSEEXCUTEINDEX_OFFSET UNITYSDK_OFFSET(0x12BDE670)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x12BDE8B0)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_GETALLWEIGHT_OFFSET UNITYSDK_OFFSET(0x12BDE7B0)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12BDE5C0)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x12BDE950)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x12BDE9B0)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_ONEND_OFFSET UNITYSDK_OFFSET(0x12BDEA00)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_ONRESET_OFFSET UNITYSDK_OFFSET(0x12BDEA50)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_ONSTART_OFFSET UNITYSDK_OFFSET(0x12BDE620)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDEAA0)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x12BDEB40)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x12BDEBD0)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12BDEC60)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x12BDECF0)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x12BDED80)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x12BDEE10)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x12BDEEA0)
#define MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x12BDEF30)

namespace MoleMole
{
	inline static constexpr unsigned int RandomExcuteWithSharedWeight_TypeDefinitionIndex = 39711;

	class RandomExcuteWithSharedWeight : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* childNodeWeightList; // 0x60
		::System::Boolean useSeed; // 0x68
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x6C
		::System::Int32 _excuteIndex; // 0x70
		::System::Int32 seed; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_ONSTART_OFFSET))(this);
		}

		::System::Single GetAllWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_GETALLWEIGHT_OFFSET))(this);
		}

		::System::Int32 ChooseExcuteIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_CHOOSEEXCUTEINDEX_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_ONEND_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT_ONRESET_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RANDOMEXCUTEWITHSHAREDWEIGHT___BASE_ONSTART_OFFSET))(this);
		}
	};
}
