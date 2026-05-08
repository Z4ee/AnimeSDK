#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/RunStateType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xF973650)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xF972E70)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xF973350)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xF9736E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xF9736F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xF9737C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xF973870)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverrideRunStateParams_TypeDefinitionIndex = 51290;

	class AnimatorZoneOverrideRunStateParams : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>* overrideMoveStateInfoKeys; // 0x50
		::System::String* overrideTiltBonePath; // 0x58
		::System::Boolean overrideRunStateLeftJoyStickMode; // 0x60
		::System::Boolean animatorZoneStatesEnableRunState; // 0x61
		::System::Boolean needOverrideLeftJoyStickMode; // 0x62
		::MoleMole::Config::RunStateType RunStateType; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
