#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/ColliderLayerType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12C60EC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12C607C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12C60B30)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C60F50)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12C60F60)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12C61030)
#define MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12C610E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneHullColliderEnable_TypeDefinitionIndex = 69637;

	class AnimatorZoneHullColliderEnable : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* HitColliderList; // 0x50
		::MoleMole::Config::ColliderLayerType colliderEnableLayer; // 0x58
		::System::Boolean colliderActiveState; // 0x5C
		::System::Boolean colliderEnable; // 0x5D
		::System::Boolean forceSetColliderActiveState; // 0x5E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEHULLCOLLIDERENABLE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
