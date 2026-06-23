#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AttackType.h"

class Class_3_0D4C1A014C7CC9DE;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKALLOWATTACK_ALLOWATTACK_OFFSET UNITYSDK_OFFSET(0x1A04FE80)
#define MOLEMOLE_CHECKALLOWATTACK_DOCHECKBYTYPE_OFFSET UNITYSDK_OFFSET(0x1A0503F0)
#define MOLEMOLE_CHECKALLOWATTACK_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A04FC40)
#define MOLEMOLE_CHECKALLOWATTACK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A04FE30)
#define MOLEMOLE_CHECKALLOWATTACK_SETALLOWATTACKINFO_OFFSET UNITYSDK_OFFSET(0x1A050380)
#define MOLEMOLE_CHECKALLOWATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0505D0)
#define MOLEMOLE_CHECKALLOWATTACK___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A050660)
#define MOLEMOLE_CHECKALLOWATTACK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A0506F0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckAllowAttack_TypeDefinitionIndex = 86707;

	class CheckAllowAttack : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x50
		::MoleMole::Battle::Entity* _ownerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* BoolReadyToAttack; // 0x60
		::Class_3_0D4C1A014C7CC9DE* _levelAIComponent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean AllowAttack(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK_ALLOWATTACK_OFFSET))(this, entity);
		}

		::System::Boolean DoCheckByType(::MoleMole::AttackType attackType, ::System::UInt32 entityId)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AttackType, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK_DOCHECKBYTYPE_OFFSET))(this, attackType, entityId);
		}

		::System::Void SetAllowAttackInfo(::System::UInt32 entityId, ::System::Boolean allowAtk, ::MoleMole::AttackType attackType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::MoleMole::AttackType))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK_SETALLOWATTACKINFO_OFFSET))(this, entityId, allowAtk, attackType);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKALLOWATTACK___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
