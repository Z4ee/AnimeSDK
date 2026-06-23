#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelShootGameConfig_MoveType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelShootGameConfig_WayPoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_WAYPATHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x158BF5E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_WayPathConfig_TypeDefinitionIndex = 70555;

	class LevelShootGameConfig_WayPathConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::LevelShootGameConfig_WayPoint*>* PointList; // 0x10
		::System::Single MoveSpeed; // 0x18
		::MoleMole::Config::LevelShootGameConfig_MoveType MoveType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_WAYPATHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
