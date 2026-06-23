#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ALLOWFOLLOWAWARENESSTARGETTOATTACKTARGET_OFFSET UNITYSDK_OFFSET(0x17D41800)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x17D41380)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_DOAWARENESSLOCKPROCESS_OFFSET UNITYSDK_OFFSET(0x17D41060)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ISINAWARENESSLIST_OFFSET UNITYSDK_OFFSET(0x17D41690)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17D41A40)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x17D40FD0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x17D41560)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_SETENTITYAWARENESSTARGET_OFFSET UNITYSDK_OFFSET(0x17D41410)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17D41CE0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x17D41CF0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17D41DC0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x17D41E80)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x17D41F30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetAwarenessTarget_TypeDefinitionIndex = 74001;

	class AnimatorZoneSetAwarenessTarget : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*>* AwarenessUpdateSegmentList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void DoAwarenessLockProcess(::MoleMole::Battle::Entity* entity, ::Class_1_8377BAB19A574A40* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_8377BAB19A574A40*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_DOAWARENESSLOCKPROCESS_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void SetEntityAwarenessTarget(::MoleMole::Battle::Entity* entity, ::Class_1_8377BAB19A574A40* zoneInfo, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_8377BAB19A574A40*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_SETENTITYAWARENESSTARGET_OFFSET))(this, entity, zoneInfo, pos);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Boolean IsInAwarenessList(::System::Single normalizedTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ISINAWARENESSLIST_OFFSET))(this, normalizedTime);
		}

		::System::Boolean AllowFollowAwarenessTargetToAttackTarget(::MoleMole::Battle::Entity* entity, ::System::Single normlizedTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ALLOWFOLLOWAWARENESSTARGETTOATTACKTARGET_OFFSET))(this, entity, normlizedTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
