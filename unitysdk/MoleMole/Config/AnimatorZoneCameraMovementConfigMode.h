#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/CameraMoveModeData_MoveModeDataPriority.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x17436990)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x17436320)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x17436880)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17436A20)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x17436A30)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x17436B00)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x17436BB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCameraMovementConfigMode_TypeDefinitionIndex = 62908;

	class AnimatorZoneCameraMovementConfigMode : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::MoleMole::Config::CameraDelayMoveMode targetMode; // 0x50
		::System::Boolean EnableOverridePriority; // 0x54
		::MoleMole::Cameras::CameraMoveModeData_MoveModeDataPriority OverridePriority; // 0x55
		::System::Boolean RestoreOnExit; // 0x56

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
