#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_DOMUTEBTNSWITCH_OFFSET UNITYSDK_OFFSET(0x11096FA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11096DD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x110971C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x11097370)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11097380)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11097430)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteSwitchZone_TypeDefinitionIndex = 57089;

	class AnimatorZoneMuteSwitchZone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		// static const ::System::String* _inputMuteTag; // 0x0
		::System::Boolean EnableSpecificBtnSwitchMute; // 0x50
		::System::Boolean MuteAidAttackSwitch; // 0x51
		::System::Boolean MuteNormalSwitch; // 0x52
		::System::Boolean MutePerfectSwitch; // 0x53

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void DoMuteBtnSwitch(::System::Boolean mute, ::System::UInt32 triggerEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_DOMUTEBTNSWITCH_OFFSET))(this, mute, triggerEntityID);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
