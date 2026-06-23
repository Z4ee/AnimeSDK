#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_TRIGGERABILITYENTRY_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12669B40)
#define MOLEMOLE_TRIGGERABILITYENTRY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12669CD0)
#define MOLEMOLE_TRIGGERABILITYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12669EE0)
#define MOLEMOLE_TRIGGERABILITYENTRY___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12669F70)
#define MOLEMOLE_TRIGGERABILITYENTRY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1266A000)

namespace MoleMole
{
	inline static constexpr unsigned int TriggerAbilityEntry_TypeDefinitionIndex = 40826;

	class TriggerAbilityEntry : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::System::String* AbilityName; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::System::Boolean InstantTrigger; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERABILITYENTRY__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERABILITYENTRY_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERABILITYENTRY_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERABILITYENTRY___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERABILITYENTRY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
