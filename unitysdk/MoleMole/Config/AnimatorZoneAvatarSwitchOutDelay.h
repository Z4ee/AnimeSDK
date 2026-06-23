#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xE95A080)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xE95A200)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0xE95A370)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xE95A380)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xE95A430)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAvatarSwitchOutDelay_TypeDefinitionIndex = 44422;

	class AnimatorZoneAvatarSwitchOutDelay : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single minVanishDelay; // 0x50
		::System::Boolean muteVanish; // 0x54
		::System::Boolean needOverrideMaxVanishDelay; // 0x55
		::System::Boolean needOverrideMinVanishDelay; // 0x56
		::System::Single maxVanishDelay; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
