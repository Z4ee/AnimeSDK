#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x116E5EA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x116E6100)
#define MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0x116E6360)
#define MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x116E6380)
#define MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x116E6430)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBlurShadow_TypeDefinitionIndex = 69549;

	class AnimatorZoneBlurShadow : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single duration; // 0x50
		::System::Single shadowLifeTime; // 0x54
		::System::Single timeLimit; // 0x58
		::System::Int32 imageCount; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBLURSHADOW___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
