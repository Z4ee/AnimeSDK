#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_SENDABILITYCUSTOMEVENT_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11781DE0)
#define MOLEMOLE_SENDABILITYCUSTOMEVENT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11781F30)
#define MOLEMOLE_SENDABILITYCUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x117821D0)
#define MOLEMOLE_SENDABILITYCUSTOMEVENT___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11782280)
#define MOLEMOLE_SENDABILITYCUSTOMEVENT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11782310)

namespace MoleMole
{
	inline static constexpr unsigned int SendAbilityCustomEvent_TypeDefinitionIndex = 74908;

	class SendAbilityCustomEvent : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* AbilityCustomEventIsGlobal; // 0x60
		::BehaviorDesigner::Runtime::SharedString* AbilityCustomEventKey; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SENDABILITYCUSTOMEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SENDABILITYCUSTOMEVENT_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SENDABILITYCUSTOMEVENT_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SENDABILITYCUSTOMEVENT___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SENDABILITYCUSTOMEVENT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
