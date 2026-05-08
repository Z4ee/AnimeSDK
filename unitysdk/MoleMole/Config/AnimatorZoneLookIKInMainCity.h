#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/Boolean.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
class Class_2_08285FCC474752C1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12410790)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ISVALIDENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1240F970)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1240FF80)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1240F400)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1240FE30)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_SETOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1240F9D0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYGETNPCTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x124105E0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYGETPLAYERTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x124102E0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYSETLOOKIK_OFFSET UNITYSDK_OFFSET(0x1240FBD0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_TRYSETLOOKTARGET_OFFSET UNITYSDK_OFFSET(0x124106E0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY__CTOR_OFFSET UNITYSDK_OFFSET(0x12410820)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12410830)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12410900)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x124109C0)
#define MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12410A70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLookIKInMainCity_TypeDefinitionIndex = 69980;

	class AnimatorZoneLookIKInMainCity : public ::MoleMole::Config::AnimatorZone
	{
	public:
		// static const ::System::String* OverrideAttachPoint; // 0x0
		// static const ::System::String* OverrideAttachPoint2; // 0x0
		::System::Single overridespeedOnMissingTarget; // 0x50
		::System::Single overridespeedOnChangeTarget; // 0x54
		::System::Single overridePitchUp; // 0x58
		::System::Single overrideYawRight; // 0x5C
		::System::Single overridespeedOnLockingTarget; // 0x60
		::MoleMole::Config::Boolean Enable; // 0x64
		::System::Single overridespeedOnGetTarget; // 0x68
		::System::Single overrideYawLeft; // 0x6C
		::System::Single overridePitchDown; // 0x70
		::System::Boolean enableOverrideAngle; // 0x74
		::System::Boolean enableOverrideSpeed; // 0x75

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Boolean IsValidEntityType(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ISVALIDENTITYTYPE_OFFSET))(this, entity);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY_CREATEZONEINFOINSTANCE_OFFSET))(this);
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

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONELOOKIKINMAINCITY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
