#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x17D172F0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x17D16FC0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x17D171D0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY__CTOR_OFFSET UNITYSDK_OFFSET(0x17D17380)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x17D17390)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x17D17460)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x17D17510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetGravity_TypeDefinitionIndex = 70577;

	class AnimatorZoneSetGravity : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single gravityVelocityOverride; // 0x50
		::System::Single groundThresholdOverride; // 0x54
		::System::Single gravityAccelerateOverride; // 0x58
		::System::Boolean isEnableGroundThreshold; // 0x5C
		::System::Boolean isEnableGroundThresholdOverride; // 0x5D
		::System::Boolean isEnableGravityOverride; // 0x5E
		::System::Boolean isEnableGravity; // 0x5F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
