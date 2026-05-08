#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ALLOWFOLLOWAWARENESSTARGETTOATTACKTARGET_OFFSET UNITYSDK_OFFSET(0x122F77D0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x122F7350)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_DOAWARENESSLOCKPROCESS_OFFSET UNITYSDK_OFFSET(0x122F7030)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ISINAWARENESSLIST_OFFSET UNITYSDK_OFFSET(0x122F7660)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x122F7A10)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x122F6FA0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x122F7530)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_SETENTITYAWARENESSTARGET_OFFSET UNITYSDK_OFFSET(0x122F73E0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x122F7CB0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x122F7CC0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x122F7D90)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x122F7E50)
#define MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x122F7F00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetAwarenessTarget_TypeDefinitionIndex = 79918;

	class AnimatorZoneSetAwarenessTarget : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorZoneSetAwarenessTarget_AwarenessUpdateSegment*>* AwarenessUpdateSegmentList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void DoAwarenessLockProcess(::MoleMole::Battle::Entity* entity, ::Class_1_677CEA8C88AC78AB* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_677CEA8C88AC78AB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_DOAWARENESSLOCKPROCESS_OFFSET))(this, entity, zoneInfo);
		}

		::System::Void SetEntityAwarenessTarget(::MoleMole::Battle::Entity* entity, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_677CEA8C88AC78AB*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_SETENTITYAWARENESSTARGET_OFFSET))(this, entity, zoneInfo, pos);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Boolean IsInAwarenessList(::System::Single normalizedTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ISINAWARENESSLIST_OFFSET))(this, normalizedTime);
		}

		::System::Boolean AllowFollowAwarenessTargetToAttackTarget(::MoleMole::Battle::Entity* entity, ::System::Single normlizedTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ALLOWFOLLOWAWARENESSTARGETTOATTACKTARGET_OFFSET))(this, entity, normlizedTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETAWARENESSTARGET___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
