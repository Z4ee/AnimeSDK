#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR_DOIGNOREAVATARAVATARLOCKMOVEDIR_OFFSET UNITYSDK_OFFSET(0x186A5610)
#define MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x186A5A20)
#define MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x186A5580)
#define MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x186A5990)
#define MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x186A5AD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x186A5AE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x186A5BA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x186A5C50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneIgnoreAvatarLockMoveDir_TypeDefinitionIndex = 60790;

	class AnimatorZoneIgnoreAvatarLockMoveDir : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void DoIgnoreAvatarAvatarLockMoveDir(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR_DOIGNOREAVATARAVATARLOCKMOVEDIR_OFFSET))(this, entity);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEIGNOREAVATARLOCKMOVEDIR___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
