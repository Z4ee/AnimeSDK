#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x186A30C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x186A2750)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x186A27D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x186A2760)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x186A2E70)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x186A3150)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x186A3160)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x186A3230)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x186A32F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x186A33A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDroneVerticalMove_TypeDefinitionIndex = 40836;

	class AnimatorZoneDroneVerticalMove : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Single Speed; // 0x50
		::System::Single InPlaceMoveSpeed; // 0x54
		::System::Single Deceleration; // 0x58
		::System::Single Acceleration; // 0x5C
		::System::Single InPlaceMovePeriod; // 0x60
		::System::Boolean UseInputMagnitude; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
