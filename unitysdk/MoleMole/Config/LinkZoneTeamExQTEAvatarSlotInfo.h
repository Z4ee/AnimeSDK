#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_LINKZONETEAMEXQTEAVATARSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17E37120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LinkZoneTeamExQTEAvatarSlotInfo_TypeDefinitionIndex = 69070;

	class LinkZoneTeamExQTEAvatarSlotInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 Offset; // 0x10
		::System::Single TilingY; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LINKZONETEAMEXQTEAVATARSLOTINFO__CTOR_OFFSET))(this);
		}
	};
}
