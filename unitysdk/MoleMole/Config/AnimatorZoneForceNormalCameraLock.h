#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK_DOZONEENTER_OFFSET UNITYSDK_OFFSET(0xFE9E6D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK_DOZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFE9E960)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFE9E640)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFE9E8C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xFE9EB60)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFE9EB70)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFE9EC20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneForceNormalCameraLock_TypeDefinitionIndex = 52303;

	class AnimatorZoneForceNormalCameraLock : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		static ::System::Void DoZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK_DOZONEENTER_OFFSET))(entity, curStateInfo, zoneInfo, deltaTime);
		}

		static ::System::Void DoZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK_DOZONEEXIT_OFFSET))(entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORCENORMALCAMERALOCK___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
