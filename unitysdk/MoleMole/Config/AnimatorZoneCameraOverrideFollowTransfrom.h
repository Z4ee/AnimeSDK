#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x10CE9AE0)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x10CE96E0)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x10CE99D0)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE9B70)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x10CE9B80)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x10CE9C50)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x10CE9D00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCameraOverrideFollowTransfrom_TypeDefinitionIndex = 50230;

	class AnimatorZoneCameraOverrideFollowTransfrom : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* OverrideFollowPoint; // 0x50
		::System::Boolean RestoreOnExit; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAOVERRIDEFOLLOWTRANSFROM___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
