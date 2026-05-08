#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
class Class_2_07DA189D79FA013B;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CALCTIMESCALE_OFFSET UNITYSDK_OFFSET(0xED0A730)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xED0AD10)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_GETOVERRIDEANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0xED0AC10)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0xED0A480)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xED0AA90)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xED0A490)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xED0A970)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_SYNCOVERRIDEWITCHTIMESCALE_OFFSET UNITYSDK_OFFSET(0xED0A8B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xED0ADA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xED0ADB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xED0AE80)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xED0AF40)
#define MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xED0AFF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneWitchSlowDownKeyOverride_TypeDefinitionIndex = 60776;

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

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
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

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWITCHSLOWDOWNKEYOVERRIDE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
