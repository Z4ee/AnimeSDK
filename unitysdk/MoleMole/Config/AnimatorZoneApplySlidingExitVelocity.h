#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEAPPLYSLIDINGEXITVELOCITY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFAF4D20)
#define MOLEMOLE_CONFIG_ANIMATORZONEAPPLYSLIDINGEXITVELOCITY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFAF4E00)
#define MOLEMOLE_CONFIG_ANIMATORZONEAPPLYSLIDINGEXITVELOCITY__CTOR_OFFSET UNITYSDK_OFFSET(0xFAF4EE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEAPPLYSLIDINGEXITVELOCITY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFAF4EF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEAPPLYSLIDINGEXITVELOCITY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFAF4FA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneApplySlidingExitVelocity_TypeDefinitionIndex = 74130;

	class AnimatorZoneApplySlidingExitVelocity : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single RotateSpeed; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAPPLYSLIDINGEXITVELOCITY__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAPPLYSLIDINGEXITVELOCITY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAPPLYSLIDINGEXITVELOCITY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAPPLYSLIDINGEXITVELOCITY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAPPLYSLIDINGEXITVELOCITY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
