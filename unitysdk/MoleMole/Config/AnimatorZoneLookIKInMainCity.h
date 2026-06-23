#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/Boolean.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
class Class_2_08285FCC474752C1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12C62BB0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ISVALIDENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x12C61DA0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12C623A0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12C61820)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12C62250)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_SETOVERRIDE_OFFSET UNITYSDK_OFFSET(0x12C61E00)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYGETNPCTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x12C62A00)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYGETPLAYERTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x12C62700)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYSETLOOKIK_OFFSET UNITYSDK_OFFSET(0x12C61FF0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYSETLOOKTARGET_OFFSET UNITYSDK_OFFSET(0x12C62B00)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY__CTOR_OFFSET UNITYSDK_OFFSET(0x12C62C40)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12C62C50)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12C62D20)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12C62DE0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1AA43BD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLookIKInMainCity_TypeDefinitionIndex = 40053;

	class AnimatorZoneLookIKInMainCity : public ::MoleMole::Config::AnimatorZone
	{
	public:
		// static const ::System::String* OverrideAttachPoint; // 0x0
		// static const ::System::String* OverrideAttachPoint2; // 0x0
		::System::Single overridespeedOnChangeTarget; // 0x50
		::System::Single overridespeedOnLockingTarget; // 0x54
		::System::Single overridespeedOnGetTarget; // 0x58
		::System::Single overridePitchDown; // 0x5C
		::System::Single overrideYawRight; // 0x60
		::System::Single overrideYawLeft; // 0x64
		::System::Single overridePitchUp; // 0x68
		::System::Boolean enableOverrideSpeed; // 0x6C
		::System::Boolean enableOverrideAngle; // 0x6D
		::System::Single overridespeedOnMissingTarget; // 0x70
		::MoleMole::Config::Boolean Enable; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Boolean IsValidEntityType(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ISVALIDENTITYTYPE_OFFSET))(this, entity);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* TryGetNpcTargetEntity(::MoleMole::Battle::Entity* entity, ::Class_2_08285FCC474752C1* zoneInfo)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_08285FCC474752C1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYGETNPCTARGETENTITY_OFFSET))(this, entity, zoneInfo);
		}

		::MoleMole::Battle::Entity* TryGetPlayerTargetEntity(::MoleMole::Battle::Entity* entity, ::Class_2_08285FCC474752C1* zoneInfo)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_08285FCC474752C1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYGETPLAYERTARGETENTITY_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void TrySetLookTarget(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* target, ::Class_2_08285FCC474752C1* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_08285FCC474752C1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYSETLOOKTARGET_OFFSET))(this, entity, target, zoneInfo);
		}

		::System::Void SetOverride(::MoleMole::Battle::Entity* entity, ::Class_2_08285FCC474752C1* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_08285FCC474752C1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_SETOVERRIDE_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void TrySetLookIK(::MoleMole::Battle::Entity* entity, ::Class_2_08285FCC474752C1* zoneInfo, ::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_08285FCC474752C1*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYSETLOOKIK_OFFSET))(this, entity, zoneInfo, v);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
