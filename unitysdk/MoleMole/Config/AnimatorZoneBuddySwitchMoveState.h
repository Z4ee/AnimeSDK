#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/BuddyMoveStatus.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x186A0CB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x186A0E40)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x186A0FE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x186A0FF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x186A10A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBuddySwitchMoveState_TypeDefinitionIndex = 46188;

	class AnimatorZoneBuddySwitchMoveState : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::MoleMole::Battle::BuddyMoveStatus savedStatus; // 0x50
		::MoleMole::Battle::BuddyMoveStatus enterMoveStatus; // 0x54
		::MoleMole::Battle::BuddyMoveStatus exitMoveStatus; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
