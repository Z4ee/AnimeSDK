#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_1_83665B095F1535B5_10;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_TRIGGERAIMIK_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16103940)
#define MOLEMOLE_TRIGGERAIMIK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16103A90)
#define MOLEMOLE_TRIGGERAIMIK_RESETENTITYINFO_OFFSET UNITYSDK_OFFSET(0x16103E70)
#define MOLEMOLE_TRIGGERAIMIK_SETPHYISCINFO_OFFSET UNITYSDK_OFFSET(0x16103AE0)
#define MOLEMOLE_TRIGGERAIMIK__CTOR_OFFSET UNITYSDK_OFFSET(0x16103ED0)
#define MOLEMOLE_TRIGGERAIMIK___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16103F60)
#define MOLEMOLE_TRIGGERAIMIK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16103FF0)

namespace MoleMole
{
	inline static constexpr unsigned int TriggerAimIK_TypeDefinitionIndex = 68390;

	class TriggerAimIK : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::Class_1_83665B095F1535B5_10* _physicInfo; // 0x60
		::BehaviorDesigner::Runtime::SharedString* animStateName; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::BehaviorDesigner::Runtime::SharedBool* isTrigger; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERAIMIK__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERAIMIK_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERAIMIK_ONUPDATE_OFFSET))(this);
		}

		::System::Void SetPhyiscInfo(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERAIMIK_SETPHYISCINFO_OFFSET))(this, entity);
		}

		::System::Void ResetEntityInfo(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERAIMIK_RESETENTITYINFO_OFFSET))(this, entity);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERAIMIK___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERAIMIK___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
