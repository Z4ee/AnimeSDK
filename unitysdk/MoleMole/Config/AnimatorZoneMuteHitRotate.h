#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x134EF9D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x134EF6A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x134EF860)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x134EFA60)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x134EFA70)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x134EFB40)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x134EFBF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteHitRotate_TypeDefinitionIndex = 80533;

	class AnimatorZoneMuteHitRotate : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Boolean MuteHitRotate; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEHITROTATE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
