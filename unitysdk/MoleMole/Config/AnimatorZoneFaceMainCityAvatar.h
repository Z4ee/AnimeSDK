#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1435C260)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1435BBD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1435C190)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_TICKROTATETOTARGET_OFFSET UNITYSDK_OFFSET(0x1435C2E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1435C380)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1435C390)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1435C450)
#define MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1435C500)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFaceMainCityAvatar_TypeDefinitionIndex = 84788;

	class AnimatorZoneFaceMainCityAvatar : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single offset; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void TickRotateToTarget(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR_TICKROTATETOTARGET_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFACEMAINCITYAVATAR___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
