#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1B53FD70)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1B540030)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B540260)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1B540280)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1B540330)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBuddySwitchFadeDurationOverride_TypeDefinitionIndex = 70718;

	class AnimatorZoneBuddySwitchFadeDurationOverride : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single overrideFadeOutDuration; // 0x50
		::System::Boolean needOverrideSwitchFadeInDuration; // 0x54
		::System::Boolean needOverrideSwitchFadeOutDuration; // 0x55
		::System::Single overrideFadeInDuration; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHFADEDURATIONOVERRIDE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
