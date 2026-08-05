#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x114667F0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11466BB0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11466880)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11466E90)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ__CTOR_OFFSET UNITYSDK_OFFSET(0x11466FC0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x11466FD0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x114670A0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11467160)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11467210)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetBuddyControlMoveXZ_TypeDefinitionIndex = 52354;

	class AnimatorZoneSetBuddyControlMoveXZ : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* speedAnimatorParameter; // 0x50
		::System::Boolean isAirControl; // 0x58
		::System::Boolean enableStartSpeed; // 0x59
		::System::Single decelerationWithoutInput; // 0x5C
		::System::Single targetSpeedWithInput; // 0x60
		::System::Single targetSpeedWithoutInput; // 0x64
		::System::Single accelerationWithInput; // 0x68
		::System::Single decelerationWithInput; // 0x6C
		::System::Single startSpeed; // 0x70
		::System::Single accelerationWithoutInput; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ__CTOR_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
