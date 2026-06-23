#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_WAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x170C56B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_WayPoint_TypeDefinitionIndex = 70559;

	class LevelShootGameConfig_WayPoint : public ::System::Object
	{
	public:
		::System::String* PointName; // 0x10
		::System::Single StayTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_WAYPOINT__CTOR_OFFSET))(this);
		}
	};
}
