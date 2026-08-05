#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/WallColliderLayerType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x177CD600)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x177CD120)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x177CD390)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x177CD690)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x177CD6A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x177CD770)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x177CD820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneWallColliderLayer_TypeDefinitionIndex = 53775;

	class AnimatorZoneWallColliderLayer : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* WallColliderList; // 0x50
		::MoleMole::Config::WallColliderLayerType Layer; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERLAYER___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
