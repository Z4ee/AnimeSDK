#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1B5414C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1B541660)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT_TRYSETOVERWRITEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1B541550)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B541700)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1B541740)
#define MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1B5417F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneOverwriteAttachPoint_TypeDefinitionIndex = 77140;

	class AnimatorZoneOverwriteAttachPoint : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* OverriteAttachPoint; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void TrySetOverwriteAttachPoint(::MoleMole::Battle::Entity* entity, ::System::String* attach)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT_TRYSETOVERWRITEATTACHPOINT_OFFSET))(this, entity, attach);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEOVERWRITEATTACHPOINT___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
