#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigAvatarDateTeleport; }
namespace MoleMole { class TeleportToAvatar; }

#define MOLEMOLE_TELEPORTTOAVATAR___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160F1A80)
#define MOLEMOLE_TELEPORTTOAVATAR___C__DISPLAYCLASS10_0__ONUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x160F1A90)

namespace MoleMole
{
	inline static constexpr unsigned int TeleportToAvatar___c__DisplayClass10_0_TypeDefinitionIndex = 54675;

	class TeleportToAvatar___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::EntityHandle entityHandle; // 0x10
		::MoleMole::TeleportToAvatar* __4__this; // 0x20
		::MoleMole::ConfigAvatarDateTeleport* config; // 0x28
		::Struct_2_FC595D1A561D8C6F posRot; // 0x30
		::UnityEngine::Vector3 switchInPos; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUpdate_b__0(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR___C__DISPLAYCLASS10_0__ONUPDATE_B__0_OFFSET))(this, id);
		}
	};
}
