#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY_DOZONEENTER_OFFSET UNITYSDK_OFFSET(0x1240C9D0)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY_DOZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1240CBD0)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1240C940)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1240CB20)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1240CD80)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1240CD90)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1240CE40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCameraLockTargetPermanently_TypeDefinitionIndex = 45243;

	class AnimatorZoneCameraLockTargetPermanently : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* OverrideExitBossLockCurveKey; // 0x50
		::System::Single OverrideExitBossLockTime; // 0x58
		::System::Boolean EnableOverrideBlendOut; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		static ::System::Void DoZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY_DOZONEENTER_OFFSET))(entity, curStateInfo, zoneInfo, deltaTime);
		}

		static ::System::Void DoZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime, ::System::Boolean enableOverrideBlendOut, ::System::Single overrideExitBossLockTime, ::System::String* overrideExitBossLockCurveKey)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY_DOZONEEXIT_OFFSET))(entity, stateNormalizedTime, zoneInfo, deltaTime, enableOverrideBlendOut, overrideExitBossLockTime, overrideExitBossLockCurveKey);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERALOCKTARGETPERMANENTLY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
