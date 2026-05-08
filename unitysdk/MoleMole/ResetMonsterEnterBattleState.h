#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_4_FFDCB461A077D183;
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE_ONRESET_OFFSET UNITYSDK_OFFSET(0x12369150)
#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x12368F30)
#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12369080)
#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x123691A0)
#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x12369230)
#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x123692C0)
#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12369350)

namespace MoleMole
{
	inline static constexpr unsigned int ResetMonsterEnterBattleState_TypeDefinitionIndex = 69840;

	class ResetMonsterEnterBattleState : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::Class_4_FFDCB461A077D183* _enterBattleComponent; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETMONSTERENTERBATTLESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETMONSTERENTERBATTLESTATE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETMONSTERENTERBATTLESTATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETMONSTERENTERBATTLESTATE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETMONSTERENTERBATTLESTATE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETMONSTERENTERBATTLESTATE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RESETMONSTERENTERBATTLESTATE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
