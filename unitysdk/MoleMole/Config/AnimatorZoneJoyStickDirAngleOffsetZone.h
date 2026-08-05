#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BD4C6F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1BD4C180)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1BD4C440)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4C780)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BD4C790)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1BD4C860)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1BD4C910)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneJoyStickDirAngleOffsetZone_TypeDefinitionIndex = 53970;

	class AnimatorZoneJoyStickDirAngleOffsetZone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single offsetAngle; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
