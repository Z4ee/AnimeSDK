#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
class Class_2_672E33A544FDB8BF;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST_APPLYBUFFRESISTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1240B3B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1240C660)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1240AEC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1240BD80)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST_REMOVEBUFFRESISTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1240BFF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1240C6F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1240C700)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1240C7D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1240C880)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBuffResist_TypeDefinitionIndex = 44777;

	class AnimatorZoneBuffResist : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single BuffResistOddsDelta; // 0x50
		::System::Single BuffResistPossibility; // 0x54
		::System::Int32 BuffID; // 0x58
		::MoleMole::Config::BuffGroupName BuffGroup; // 0x5C
		::System::Single BuffResistDurationDelta; // 0x60
		::System::Single BuffResistOddsRatio; // 0x64
		::System::Single BuffResistDamageRatio; // 0x68
		::System::Single BuffResistDurationRatio; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void ApplyBuffResistProperty(::Class_3_F41D242A20F8FE06* abilityComponent, ::System::Int32 buffID, ::Class_2_672E33A544FDB8BF* curZoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::System::Int32, ::Class_2_672E33A544FDB8BF*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST_APPLYBUFFRESISTPROPERTY_OFFSET))(this, abilityComponent, buffID, curZoneInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void RemoveBuffResistProperty(::Class_3_F41D242A20F8FE06* abilityComponent, ::System::Int32 buffID, ::Class_2_672E33A544FDB8BF* curZoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::System::Int32, ::Class_2_672E33A544FDB8BF*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST_REMOVEBUFFRESISTPROPERTY_OFFSET))(this, abilityComponent, buffID, curZoneInfo);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUFFRESIST___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
