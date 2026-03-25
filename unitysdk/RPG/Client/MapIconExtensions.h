#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35661FB1E71DC198;
namespace RPG::Client { class AdventureWaypointConfig; }
namespace RPG::Client { class IMapIcon; }
namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client { class IWayPointTarget; }

#define RPG_CLIENT_MAPICONEXTENSIONS_GETWAYPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0x9AF9A50)
#define RPG_CLIENT_MAPICONEXTENSIONS_ISINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x9AF9870)
#define RPG_CLIENT_MAPICONEXTENSIONS__GETFIVEDIMWAYPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0x9AFA550)
#define RPG_CLIENT_MAPICONEXTENSIONS__GETMAZEWAYPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0x9AF9FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapIconExtensions_TypeDefinitionIndex = 51057;

	class MapIconExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsInCurrentScene(::RPG::Client::IMapIcon* mapIcon)
		{
			return ((::System::Boolean(*)(::RPG::Client::IMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS_ISINCURRENTSCENE_OFFSET))(mapIcon);
		}

		static ::RPG::Client::AdventureWaypointConfig* GetWaypointConfig(::RPG::Client::IMapIconTrackSnapshot* mapIconTrackSnapshot)
		{
			return ((::RPG::Client::AdventureWaypointConfig*(*)(::RPG::Client::IMapIconTrackSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS_GETWAYPOINTCONFIG_OFFSET))(mapIconTrackSnapshot);
		}

		static ::RPG::Client::IWayPointTarget* _GetFiveDimWaypointConfig(::RPG::Client::IMapIconTrackSnapshot* mapIconTrackSnapshot, ::Class_1_35661FB1E71DC198* connectInfo)
		{
			return ((::RPG::Client::IWayPointTarget*(*)(::RPG::Client::IMapIconTrackSnapshot*, ::Class_1_35661FB1E71DC198*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS__GETFIVEDIMWAYPOINTCONFIG_OFFSET))(mapIconTrackSnapshot, connectInfo);
		}

		static ::RPG::Client::IWayPointTarget* _GetMazeWaypointConfig(::RPG::Client::IMapIconTrackSnapshot* mapIconTrackSnapshot, ::Class_1_35661FB1E71DC198* connectInfo)
		{
			return ((::RPG::Client::IWayPointTarget*(*)(::RPG::Client::IMapIconTrackSnapshot*, ::Class_1_35661FB1E71DC198*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS__GETMAZEWAYPOINTCONFIG_OFFSET))(mapIconTrackSnapshot, connectInfo);
		}
	};
}
