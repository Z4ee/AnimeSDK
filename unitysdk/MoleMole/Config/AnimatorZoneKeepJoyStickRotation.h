#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8377BAB19A574A40;
class Class_2_3C8B3E69CE86835B;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12B9F910)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_GETFORWARD_OFFSET UNITYSDK_OFFSET(0x12B9F9A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_MOVEBYSTEERTYPE_OFFSET UNITYSDK_OFFSET(0x12B9F680)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B9F330)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12B9EEC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12B9F840)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_UPDATEJOYSTICKDATA_OFFSET UNITYSDK_OFFSET(0x12B9F4C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x12B9FC40)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12B9FC50)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B9FD20)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12B9FDE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12B9FE90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneKeepJoyStickRotation_TypeDefinitionIndex = 45771;

	class AnimatorZoneKeepJoyStickRotation : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_CREATEZONEINFOINSTANCE_OFFSET))(this);
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

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
