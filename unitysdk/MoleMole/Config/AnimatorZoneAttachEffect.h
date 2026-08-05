#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ZoneEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1624B2D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1624AB70)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1624AFD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_ONZONEPRELOAD_OFFSET UNITYSDK_OFFSET(0x1624AB20)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1624B360)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1624B370)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1624B440)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1624B4F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT___BASE_ONZONEPRELOAD_OFFSET UNITYSDK_OFFSET(0x1624B5B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAttachEffect_TypeDefinitionIndex = 87953;

	class AnimatorZoneAttachEffect : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ZoneEffectConfig*>* effects; // 0x50
		::System::Boolean IgnoreLocalAvatarLimit; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnZonePreload(::MoleMole::Battle::Entity* entity, ::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_ONZONEPRELOAD_OFFSET))(this, entity, animatorComponent);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZonePreload(::MoleMole::Battle::Entity* P0, ::Class_3_F33F9DC5F4112336* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEATTACHEFFECT___BASE_ONZONEPRELOAD_OFFSET))(this, P0, P1);
		}
	};
}
