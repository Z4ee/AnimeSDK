#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIBattleState.h"

namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_CHECKBATTLESTATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1751DC40)
#define MOLEMOLE_CHECKBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1751DE20)
#define MOLEMOLE_CHECKBATTLESTATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1751DEB0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckBattleState_TypeDefinitionIndex = 82983;

	class CheckBattleState : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x50
		::System::Boolean IsEqual; // 0x58
		::MoleMole::AIBattleState BattleValue; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBATTLESTATE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBATTLESTATE_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKBATTLESTATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
