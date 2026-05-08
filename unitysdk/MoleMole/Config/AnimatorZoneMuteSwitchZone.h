#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_DOMUTEBTNSWITCH_OFFSET UNITYSDK_OFFSET(0xF972920)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xF972750)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xF972B40)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE__CTOR_OFFSET UNITYSDK_OFFSET(0xF972CF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xF972D00)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xF972DB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteSwitchZone_TypeDefinitionIndex = 50489;

	class AnimatorZoneMuteSwitchZone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		// static const ::System::String* _inputMuteTag; // 0x0
		::System::Boolean EnableSpecificBtnSwitchMute; // 0x50
		::System::Boolean MutePerfectSwitch; // 0x51
		::System::Boolean MuteAidAttackSwitch; // 0x52
		::System::Boolean MuteNormalSwitch; // 0x53

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void DoMuteBtnSwitch(::System::Boolean mute, ::System::UInt32 triggerEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_DOMUTEBTNSWITCH_OFFSET))(this, mute, triggerEntityID);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
