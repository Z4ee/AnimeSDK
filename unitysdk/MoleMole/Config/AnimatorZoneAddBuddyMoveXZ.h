#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x141DF960)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x141DF9F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x141DFC10)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ__CTOR_OFFSET UNITYSDK_OFFSET(0x141DFD30)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x141DFD40)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x141DFE10)
#define MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x141DFEC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAddBuddyMoveXZ_TypeDefinitionIndex = 60456;

	class AnimatorZoneAddBuddyMoveXZ : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single Value; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ__CTOR_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEADDBUDDYMOVEXZ___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
