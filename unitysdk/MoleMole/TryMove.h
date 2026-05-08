#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_2_9A7CE2C95D465436;
class Class_3_6D73516CC6FEADD7;
class Class_3_BA709FB56ED5FAC4;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_TRYMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x17E26080)
#define MOLEMOLE_TRYMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x17E26230)
#define MOLEMOLE_TRYMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17E25D90)
#define MOLEMOLE_TRYMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0x17E261E0)
#define MOLEMOLE_TRYMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0x17E26030)
#define MOLEMOLE_TRYMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17E26160)
#define MOLEMOLE_TRYMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E26360)
#define MOLEMOLE_TRYMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17E263F0)
#define MOLEMOLE_TRYMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x17E26480)
#define MOLEMOLE_TRYMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x17E26510)
#define MOLEMOLE_TRYMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17E265A0)

namespace MoleMole
{
	inline static constexpr unsigned int TryMove_TypeDefinitionIndex = 40923;

	class TryMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_2_9A7CE2C95D465436* tryMoveForwardTask; // 0x58
		::Class_3_DFD5D1FDB9D2A4AC* characterModel; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::Class_3_BA709FB56ED5FAC4* characterInput; // 0x70
		::Class_3_6D73516CC6FEADD7* aiComponent; // 0x78

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
