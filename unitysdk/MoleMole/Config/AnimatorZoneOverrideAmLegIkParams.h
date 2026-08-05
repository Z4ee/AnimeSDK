#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14851940)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x14851700)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x14851C20)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14851C30)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x14851CF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverrideAmLegIkParams_TypeDefinitionIndex = 49936;

	class AnimatorZoneOverrideAmLegIkParams : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single StateOverrideFootOffGroundHeight; // 0x50
		::System::Boolean StateOverrideEnableStrideWrapping; // 0x54
		::System::Single StateOverridePelvisUpVelocityLimit; // 0x58
		::System::Single StateOverrideFootDownVelocityLimit; // 0x5C
		::System::Single StateOverrideFootOnGroundHeight; // 0x60
		::System::Single StateOverridePelvisDownVelocityLimit; // 0x64
		::System::Single StateOverrideFootUpVelocityLimit; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
