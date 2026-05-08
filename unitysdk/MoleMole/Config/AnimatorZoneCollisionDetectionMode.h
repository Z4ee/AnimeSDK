#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/CollisionDetectionMode.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x159DC240)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x159DC310)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x159DC3E0)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x159DC3F0)
#define MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x159DC4A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCollisionDetectionMode_TypeDefinitionIndex = 77628;

	class AnimatorZoneCollisionDetectionMode : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Boolean setToDefault; // 0x50
		::UnityEngine::CollisionDetectionMode collisionDetectionMode; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECOLLISIONDETECTIONMODE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
