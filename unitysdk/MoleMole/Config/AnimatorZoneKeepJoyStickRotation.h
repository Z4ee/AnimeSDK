#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_677CEA8C88AC78AB;
class Class_2_3C8B3E69CE86835B;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xFEA1940)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_GETFORWARD_OFFSET UNITYSDK_OFFSET(0xFEA19D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_MOVEBYSTEERTYPE_OFFSET UNITYSDK_OFFSET(0xFEA16B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFEA1360)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFEA0EF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFEA1870)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_UPDATEJOYSTICKDATA_OFFSET UNITYSDK_OFFSET(0xFEA14F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0xFEA1C70)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xFEA1C80)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFEA1D50)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xFEA1E10)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xFEA1EC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneKeepJoyStickRotation_TypeDefinitionIndex = 57915;

	class AnimatorZoneKeepJoyStickRotation : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetForward(::Class_2_3C8B3E69CE86835B* zoneInfo)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_3C8B3E69CE86835B*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_GETFORWARD_OFFSET))(this, zoneInfo);
		}

		::System::Void MoveBySteerType(::MoleMole::Battle::Entity* entity, ::Class_2_3C8B3E69CE86835B* selfZoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_3C8B3E69CE86835B*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_MOVEBYSTEERTYPE_OFFSET))(this, entity, selfZoneInfo, deltaTime);
		}

		::System::Void UpdateJoyStickData(::Class_2_3C8B3E69CE86835B* selfZoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3C8B3E69CE86835B*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_UPDATEJOYSTICKDATA_OFFSET))(this, selfZoneInfo);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
