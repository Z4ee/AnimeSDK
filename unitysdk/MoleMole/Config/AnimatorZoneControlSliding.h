#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x106BDA30)
#define MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x106BDB00)
#define MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING__CTOR_OFFSET UNITYSDK_OFFSET(0x106BDB90)
#define MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x106BDBA0)
#define MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x106BDC50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneControlSliding_TypeDefinitionIndex = 65839;

	class AnimatorZoneControlSliding : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& state, ::Class_1_8377BAB19A574A40* zone, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING_ONZONEENTER_OFFSET))(this, entity, state, zone, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zone, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zone, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECONTROLSLIDING___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
