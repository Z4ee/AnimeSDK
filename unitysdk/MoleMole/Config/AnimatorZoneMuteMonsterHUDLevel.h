#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x141E3F50)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x141E3D90)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x141E3E70)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x141E3FE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x141E3FF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x141E40C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x141E4170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteMonsterHUDLevel_TypeDefinitionIndex = 64993;

	class AnimatorZoneMuteMonsterHUDLevel : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* Tag; // 0x50
		::MoleMole::Config::EnterBattleState TargetState; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEMONSTERHUDLEVEL___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
