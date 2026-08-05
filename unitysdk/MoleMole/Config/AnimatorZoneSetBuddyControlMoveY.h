#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BD4D7A0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BD4DE00)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1BD4D830)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1BD4E0A0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4E1D0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BD4E1E0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BD4E2B0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1BD4E370)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1BD4E420)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetBuddyControlMoveY_TypeDefinitionIndex = 83185;

	class AnimatorZoneSetBuddyControlMoveY : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* speedAnimatorParameter; // 0x50
		::System::Boolean enableStartSpeed; // 0x58
		::System::Single deceleration; // 0x5C
		::System::Single acceleration; // 0x60
		::System::Single targetSpeed; // 0x64
		::System::Single startSpeed; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY__CTOR_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
