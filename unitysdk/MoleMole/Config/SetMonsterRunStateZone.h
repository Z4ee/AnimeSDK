#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityRunState; }

#define MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1B4F0D70)
#define MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1B4F0E40)
#define MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4F0F10)
#define MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1B4F0F20)
#define MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1B4F0FD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SetMonsterRunStateZone_TypeDefinitionIndex = 65283;

	class SetMonsterRunStateZone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::MoleMole::Config::ConfigEntityRunState* RunStateConfig; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
