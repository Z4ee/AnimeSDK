#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_TRIGGERABILITYENTRY_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13ECAAF0)
#define MOLEMOLE_TRIGGERABILITYENTRY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13ECAC80)
#define MOLEMOLE_TRIGGERABILITYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECAE90)
#define MOLEMOLE_TRIGGERABILITYENTRY___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13ECAF20)
#define MOLEMOLE_TRIGGERABILITYENTRY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13ECAFB0)

namespace MoleMole
{
	inline static constexpr unsigned int TriggerAbilityEntry_TypeDefinitionIndex = 74106;

	class TriggerAbilityEntry : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* AbilityName; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::MoleMole::Battle::Entity* ownerEntity; // 0x68
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
