#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
class Class_2_07DA189D79FA013B;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CALCTIMESCALE_OFFSET UNITYSDK_OFFSET(0x10CF5710)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x10CF5CF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_GETOVERRIDEANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x10CF5BF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x10CF5460)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10CF5A70)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x10CF5470)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x10CF5950)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_SYNCOVERRIDEWITCHTIMESCALE_OFFSET UNITYSDK_OFFSET(0x10CF5890)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x10CF5D80)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x10CF5D90)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10CF5E60)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x10CF5F20)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x10CF5FD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneWitchSlowDownKeyOverride_TypeDefinitionIndex = 44441;

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

		::System::Single CalcTimeScale(::MoleMole::Battle::Entity* entity, ::Class_2_07DA189D79FA013B* selfZoneInfo, ::UnityEngine::AnimatorStateInfo curStateInfo)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_07DA189D79FA013B*, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CALCTIMESCALE_OFFSET))(this, entity, selfZoneInfo, curStateInfo);
		}

		::UnityEngine::AnimationCurve* GetOverrideAnimationCurve(::MoleMole::Battle::Entity* entity, ::System::Int32 stateName)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_GETOVERRIDEANIMATIONCURVE_OFFSET))(this, entity, stateName);
		}

		::System::Void SyncOverrideWitchTimeScale(::Class_2_07DA189D79FA013B* selfZoneInfo, ::System::Single timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_07DA189D79FA013B*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_SYNCOVERRIDEWITCHTIMESCALE_OFFSET))(this, selfZoneInfo, timeScale);
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
