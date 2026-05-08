#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
class Class_3_883E597458B91E77;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_DOFORBIDCONTROLROTATION_OFFSET UNITYSDK_OFFSET(0x17D131D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x17D13080)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x17D133C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x17D13520)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x17D13530)
#define MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x17D135E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneForbidRotation_TypeDefinitionIndex = 73816;

	class AnimatorZoneForbidRotation : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Boolean ForbidInputControlRotation; // 0x50
		::System::Boolean ForbidLockTargetRotation; // 0x51
		::System::Boolean ForbidConfigRotation; // 0x52
		::System::Boolean EnableSpecificForbidConfig; // 0x53

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void DoForbidControlRotation(::Class_3_883E597458B91E77* moveComponent, ::System::Boolean forbid)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_883E597458B91E77*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION_DOFORBIDCONTROLROTATION_OFFSET))(this, moveComponent, forbid);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFORBIDROTATION___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
