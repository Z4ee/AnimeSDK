#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xF96BC90)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xF96BAA0)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xF96BBA0)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0xF96BD20)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0xF96BD30)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xF96BE00)
#define MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xF96BEB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCenterDither_TypeDefinitionIndex = 76598;

	class AnimatorZoneCenterDither : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* AttachPoint; // 0x50
		::System::Single CenterMinAlpha; // 0x58
		::System::Boolean UseOnAttachment; // 0x5C
		::UnityEngine::Vector2 CenterDitherZW; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECENTERDITHER___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
