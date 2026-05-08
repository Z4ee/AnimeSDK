#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12412540)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12412890)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x124125D0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12412B70)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ__CTOR_OFFSET UNITYSDK_OFFSET(0x12412CA0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12412CB0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12412D80)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12412E40)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12412EF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetBuddyControlMoveXZ_TypeDefinitionIndex = 49034;

	class AnimatorZoneSetBuddyControlMoveXZ : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* speedAnimatorParameter; // 0x50
		::System::Single targetSpeedWithoutInput; // 0x58
		::System::Single targetSpeedWithInput; // 0x5C
		::System::Single accelerationWithInput; // 0x60
		::System::Single decelerationWithoutInput; // 0x64
		::System::Boolean enableStartSpeed; // 0x68
		::System::Boolean isAirControl; // 0x69
		::System::Single accelerationWithoutInput; // 0x6C
		::System::Single startSpeed; // 0x70
		::System::Single decelerationWithInput; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ__CTOR_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEXZ___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
