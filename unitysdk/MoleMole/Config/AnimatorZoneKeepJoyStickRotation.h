#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8377BAB19A574A40;
class Class_2_AE8C4F4D7ED6FC16;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x143600A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_GETFORWARD_OFFSET UNITYSDK_OFFSET(0x14360130)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_MOVEBYSTEERTYPE_OFFSET UNITYSDK_OFFSET(0x1435FE10)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1435FAC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1435F660)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1435FFD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_UPDATEJOYSTICKDATA_OFFSET UNITYSDK_OFFSET(0x1435FC50)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x143603C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x143603D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x143604A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x14360560)
#define MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x14360610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneKeepJoyStickRotation_TypeDefinitionIndex = 83431;

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

		::UnityEngine::Vector3 GetForward(::Class_2_AE8C4F4D7ED6FC16* zoneInfo)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_AE8C4F4D7ED6FC16*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_GETFORWARD_OFFSET))(this, zoneInfo);
		}

		::System::Void MoveBySteerType(::MoleMole::Battle::Entity* entity, ::Class_2_AE8C4F4D7ED6FC16* selfZoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_AE8C4F4D7ED6FC16*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_MOVEBYSTEERTYPE_OFFSET))(this, entity, selfZoneInfo, deltaTime);
		}

		::System::Void UpdateJoyStickData(::Class_2_AE8C4F4D7ED6FC16* selfZoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_AE8C4F4D7ED6FC16*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEKEEPJOYSTICKROTATION_UPDATEJOYSTICKDATA_OFFSET))(this, selfZoneInfo);
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
