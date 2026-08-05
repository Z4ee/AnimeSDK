#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_4_C2BA23F5AA27FA67;
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE_ONRESET_OFFSET UNITYSDK_OFFSET(0x136E9920)
#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE_ONSTART_OFFSET UNITYSDK_OFFSET(0x136E9710)
#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x136E9850)
#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x136E9970)
#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x136E9A00)
#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x136E9A90)
#define MOLEMOLE_RESETMONSTERENTERBATTLESTATE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x136E9B20)

namespace MoleMole
{
	inline static constexpr unsigned int ResetMonsterEnterBattleState_TypeDefinitionIndex = 88089;

	class ResetMonsterEnterBattleState : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::Class_4_C2BA23F5AA27FA67* _enterBattleComponent; // 0x60

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
