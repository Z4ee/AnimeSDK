#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/RunStateType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12EF6B80)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12EF63B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12EF6890)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x12EF6C10)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12EF6C20)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12EF6CF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12EF6DA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverrideRunStateParams_TypeDefinitionIndex = 80337;

	class AnimatorZoneOverrideRunStateParams : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::String*>* overrideMoveStateInfoKeys; // 0x50
		::System::String* overrideTiltBonePath; // 0x58
		::MoleMole::Config::RunStateType RunStateType; // 0x60
		::System::Boolean animatorZoneStatesEnableRunState; // 0x64
		::System::Boolean overrideRunStateLeftJoyStickMode; // 0x65
		::System::Boolean needOverrideLeftJoyStickMode; // 0x66

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDERUNSTATEPARAMS___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
