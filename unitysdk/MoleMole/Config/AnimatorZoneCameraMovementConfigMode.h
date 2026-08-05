#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/CameraMoveModeData_MoveModeDataPriority.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x150E8EE0)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x150E8870)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x150E8DD0)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x150E8F70)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x150E8F80)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x150E9050)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x150E9100)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCameraMovementConfigMode_TypeDefinitionIndex = 86815;

	class AnimatorZoneCameraMovementConfigMode : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Boolean RestoreOnExit; // 0x50
		::System::Boolean EnableOverridePriority; // 0x51
		::MoleMole::Cameras::CameraMoveModeData_MoveModeDataPriority OverridePriority; // 0x52
		::MoleMole::Config::CameraDelayMoveMode targetMode; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
