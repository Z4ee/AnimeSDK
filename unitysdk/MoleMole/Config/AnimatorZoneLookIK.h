#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/Boolean.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
class Class_2_94926EAAB28267F5;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xFEA4DE0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFEA4950)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFEA4010)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFEA4760)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_SETOVERRIDE_OFFSET UNITYSDK_OFFSET(0xFEA4330)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYGETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xFEA4B10)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYSETLOOKIK_OFFSET UNITYSDK_OFFSET(0xFEA4530)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYSETLOOKTARGET_OFFSET UNITYSDK_OFFSET(0xFEA48B0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK__CTOR_OFFSET UNITYSDK_OFFSET(0xFEA4E70)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xFEA4E80)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFEA4F50)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFEA5010)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFEA50C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLookIK_TypeDefinitionIndex = 51881;

	class AnimatorZoneLookIK : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* OverrideAttachPoint; // 0x50
		::System::Single overridePitchUp; // 0x58
		::System::Single overridespeedOnChangeTarget; // 0x5C
		::System::Single overrideYawRight; // 0x60
		::System::Boolean enableOverrideSpeed; // 0x64
		::System::Boolean firstEnter; // 0x65
		::System::Boolean enableOverrideAngle; // 0x66
		::System::Single overrideYawLeft; // 0x68
		::System::Single overridespeedOnMissingTarget; // 0x6C
		::System::Single overridePitchDown; // 0x70
		::MoleMole::Config::Boolean Enable; // 0x74
		::System::Single overridespeedOnGetTarget; // 0x78
		::System::Single overridespeedOnLockingTarget; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* TryGetTargetEntity(::MoleMole::Battle::Entity* entity, ::Class_2_94926EAAB28267F5* zoneInfo)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_94926EAAB28267F5*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYGETTARGETENTITY_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void TrySetLookTarget(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* target, ::Class_2_94926EAAB28267F5* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_94926EAAB28267F5*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYSETLOOKTARGET_OFFSET))(this, entity, target, zoneInfo);
		}

		::System::Void SetOverride(::MoleMole::Battle::Entity* entity, ::Class_2_94926EAAB28267F5* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_94926EAAB28267F5*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_SETOVERRIDE_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void TrySetLookIK(::MoleMole::Battle::Entity* entity, ::Class_2_94926EAAB28267F5* zoneInfo, ::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_94926EAAB28267F5*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYSETLOOKIK_OFFSET))(this, entity, zoneInfo, v);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
