#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x144CBBD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x144CB830)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x144CBA00)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY__CTOR_OFFSET UNITYSDK_OFFSET(0x144CBC60)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x144CBC70)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x144CBD40)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x144CBDF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAllowVelocity_TypeDefinitionIndex = 43725;

	class AnimatorZoneAllowVelocity : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Boolean LogicAllowed; // 0x50
		::System::Boolean AnimatorAllowed; // 0x51
		::System::Boolean KinematicAllowed; // 0x52

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWVELOCITY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
