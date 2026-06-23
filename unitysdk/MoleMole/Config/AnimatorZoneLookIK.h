#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/Boolean.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
class Class_2_94926EAAB28267F5;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12BA2D80)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12BA28F0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12BA1FE0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12BA2700)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_SETOVERRIDE_OFFSET UNITYSDK_OFFSET(0x12BA2300)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYGETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x12BA2AB0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYSETLOOKIK_OFFSET UNITYSDK_OFFSET(0x12BA24D0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_TRYSETLOOKTARGET_OFFSET UNITYSDK_OFFSET(0x12BA2850)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA2E10)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12BA2E20)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12BA2EF0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12BA2FB0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12BA3060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLookIK_TypeDefinitionIndex = 84549;

	class AnimatorZoneLookIK : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* OverrideAttachPoint; // 0x50
		::System::Single overrideYawLeft; // 0x58
		::System::Single overridePitchDown; // 0x5C
		::System::Single overridePitchUp; // 0x60
		::System::Single overrideYawRight; // 0x64
		::System::Single overridespeedOnGetTarget; // 0x68
		::System::Boolean enableOverrideAngle; // 0x6C
		::System::Boolean enableOverrideSpeed; // 0x6D
		::System::Boolean firstEnter; // 0x6E
		::System::Single overridespeedOnChangeTarget; // 0x70
		::System::Single overridespeedOnLockingTarget; // 0x74
		::System::Single overridespeedOnMissingTarget; // 0x78
		::MoleMole::Config::Boolean Enable; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK_CREATEZONEINFOINSTANCE_OFFSET))(this);
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

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIK___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
