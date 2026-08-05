#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneModifyFriction_ColliderType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/PhysicMaterialCombine.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1728DA10)
#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1728DDB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1728E120)
#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1728E130)
#define MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1728E1E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneModifyFriction_TypeDefinitionIndex = 58998;

	class AnimatorZoneModifyFriction : public ::MoleMole::Config::AnimatorZone
	{
	public:
		// static const ::System::String* DefaultControlTag; // 0x0
		::System::String* Tag; // 0x50
		::System::Boolean isOverrideFrictionType; // 0x58
		::UnityEngine::PhysicMaterialCombine overrideFrictionCombine; // 0x5C
		::System::Single DynamicFriction; // 0x60
		::MoleMole::Config::AnimatorZoneModifyFriction_ColliderType ColliderKind; // 0x64
		::System::Single StaticFriction; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMODIFYFRICTION___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
