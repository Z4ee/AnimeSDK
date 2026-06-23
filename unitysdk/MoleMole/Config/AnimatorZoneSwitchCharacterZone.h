#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }

#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x17D43580)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x17D43840)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D43B00)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x17D43B10)
#define MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x17D43BC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSwitchCharacterZone_TypeDefinitionIndex = 52124;

	class AnimatorZoneSwitchCharacterZone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::MoleMole::Config::ConfigPosRot* overridePosRot; // 0x50
		::MoleMole::Battle::AnimatorParamControl* switchInParamControl; // 0x58
		::MoleMole::Battle::AnimatorParamControl* switchOutParamControl; // 0x60
		::System::Single overrideTriggerSwitchOutDelay; // 0x68
		::System::Boolean needOverrideTriggerSwitchOutDelay; // 0x6C
		::System::Boolean needOverrideTriggerSwitchInDelay; // 0x6D
		::System::Boolean needOverrideSwitchPosRot; // 0x6E
		::System::Single overrideTriggerSwitchInDelay; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESWITCHCHARACTERZONE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
