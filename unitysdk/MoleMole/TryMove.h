#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_2_9A7CE2C95D465436;
class Class_3_3B42BC0680587011;
class Class_3_C93CC3D2C2AC4067;
class Class_3_D252341484B6EB1D;
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_TRYMOVE_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x1B6CE570)
#define MOLEMOLE_TRYMOVE_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x1B6CE720)
#define MOLEMOLE_TRYMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B6CE280)
#define MOLEMOLE_TRYMOVE_ONEND_OFFSET UNITYSDK_OFFSET(0x1B6CE6D0)
#define MOLEMOLE_TRYMOVE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1B6CE520)
#define MOLEMOLE_TRYMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B6CE650)
#define MOLEMOLE_TRYMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CE850)
#define MOLEMOLE_TRYMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B6CE8E0)
#define MOLEMOLE_TRYMOVE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1B6CE970)
#define MOLEMOLE_TRYMOVE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1B6CEA00)
#define MOLEMOLE_TRYMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B6CEA90)

namespace MoleMole
{
	inline static constexpr unsigned int TryMove_TypeDefinitionIndex = 72914;

	class TryMove : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::Class_3_C93CC3D2C2AC4067* characterModel; // 0x58
		::Class_3_D252341484B6EB1D* aiComponent; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::Class_2_9A7CE2C95D465436* tryMoveForwardTask; // 0x70
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
