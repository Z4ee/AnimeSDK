#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11C96D60)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11C96B20)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x11C97000)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11C97010)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11C970D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverrideAmLegIkParams_TypeDefinitionIndex = 42001;

	class AnimatorZoneOverrideAmLegIkParams : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single StateOverrideFootOnGroundHeight; // 0x50
		::System::Boolean StateOverrideEnableStrideWrapping; // 0x54
		::System::Single StateOverridePelvisDownVelocityLimit; // 0x58
		::System::Single StateOverrideFootOffGroundHeight; // 0x5C
		::System::Single StateOverrideFootUpVelocityLimit; // 0x60
		::System::Single StateOverridePelvisUpVelocityLimit; // 0x64
		::System::Single StateOverrideFootDownVelocityLimit; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDEAMLEGIKPARAMS___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
