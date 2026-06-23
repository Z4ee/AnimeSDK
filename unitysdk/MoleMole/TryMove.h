#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_2_9A7CE2C95D465436;
class Class_3_3B42BC0680587011;
class Class_3_6D73516CC6FEADD7;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_TRYMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x19196C30)
#define MOLEMOLE_TRYMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x19196DE0)
#define MOLEMOLE_TRYMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19196940)
#define MOLEMOLE_TRYMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0x19196D90)
#define MOLEMOLE_TRYMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0x19196BE0)
#define MOLEMOLE_TRYMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19196D10)
#define MOLEMOLE_TRYMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19196F10)
#define MOLEMOLE_TRYMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19196FA0)
#define MOLEMOLE_TRYMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x19197030)
#define MOLEMOLE_TRYMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x191970C0)
#define MOLEMOLE_TRYMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19197150)

namespace MoleMole
{
	inline static constexpr unsigned int TryMove_TypeDefinitionIndex = 69018;

	class TryMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_3_6D73516CC6FEADD7* aiComponent; // 0x58
		::Class_2_9A7CE2C95D465436* tryMoveForwardTask; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::Class_3_DFD5D1FDB9D2A4AC* characterModel; // 0x70
		::Class_3_3B42BC0680587011* characterInput; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE_ONEND_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRYMOVE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
