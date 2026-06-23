#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x127061E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12705EE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12706070)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x12706270)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x12706280)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x12706350)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x12706400)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverrideCameraDitherKey_TypeDefinitionIndex = 86183;

	class AnimatorZoneOverrideCameraDitherKey : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* OverrideCameraDitherKey; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERRIDECAMERADITHERKEY___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
