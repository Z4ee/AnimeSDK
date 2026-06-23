#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x11090320)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11090130)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11090230)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x110903B0)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x110903C0)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11090490)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11090540)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCenterDither_TypeDefinitionIndex = 56433;

	class AnimatorZoneCenterDither : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* AttachPoint; // 0x50
		::System::Single CenterMinAlpha; // 0x58
		::UnityEngine::Vector2 CenterDitherZW; // 0x5C
		::System::Boolean UseOnAttachment; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
