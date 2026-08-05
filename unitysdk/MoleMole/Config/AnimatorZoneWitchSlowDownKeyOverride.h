#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
class Class_2_E65164E33BDA48CE;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CALCTIMESCALE_OFFSET UNITYSDK_OFFSET(0x116F4120)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x116F4700)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_GETOVERRIDEANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x116F4600)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x116F3E80)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x116F4480)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x116F3E90)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x116F4360)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_SYNCOVERRIDEWITCHTIMESCALE_OFFSET UNITYSDK_OFFSET(0x116F42A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x116F4790)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x116F47A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x116F4870)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x116F4930)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x116F49E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneWitchSlowDownKeyOverride_TypeDefinitionIndex = 72163;

	class AnimatorZoneWitchSlowDownKeyOverride : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::UnityEngine::AnimationCurve* OverrideSlowDownCurve; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Single CalcTimeScale(::MoleMole::Battle::Entity* entity, ::Class_2_E65164E33BDA48CE* selfZoneInfo, ::UnityEngine::AnimatorStateInfo curStateInfo)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_E65164E33BDA48CE*, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CALCTIMESCALE_OFFSET))(this, entity, selfZoneInfo, curStateInfo);
		}

		::UnityEngine::AnimationCurve* GetOverrideAnimationCurve(::MoleMole::Battle::Entity* entity, ::System::Int32 stateName)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_GETOVERRIDEANIMATIONCURVE_OFFSET))(this, entity, stateName);
		}

		::System::Void SyncOverrideWitchTimeScale(::Class_2_E65164E33BDA48CE* selfZoneInfo, ::System::Single timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E65164E33BDA48CE*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_SYNCOVERRIDEWITCHTIMESCALE_OFFSET))(this, selfZoneInfo, timeScale);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
