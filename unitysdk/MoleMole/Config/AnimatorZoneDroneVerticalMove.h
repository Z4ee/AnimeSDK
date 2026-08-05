#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A49F9C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x1A49EA00)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A49EF30)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1A49EA10)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1A49F740)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49FA50)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A49FA60)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A49FB30)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1A49FBF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1A49FCA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDroneVerticalMove_TypeDefinitionIndex = 67082;

	class AnimatorZoneDroneVerticalMove : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* MaxHeightBrakingCurve; // 0x50
		::System::String* MinHeightBrakingCurve; // 0x58
		::System::Single InPlaceMovePeriod; // 0x60
		::System::Single Speed; // 0x64
		::System::Boolean UseInputMagnitude; // 0x68
		::System::Single Deceleration; // 0x6C
		::System::Single InPlaceMoveSpeed; // 0x70
		::System::Single MinHeightBrakingDistance; // 0x74
		::System::Single Acceleration; // 0x78
		::System::Single MaxHeightBrakingDistance; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
