#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D8C9ED8919282E9;
namespace RPG::Client { class AdventureWaypointConfig; }
namespace RPG::Client { class IMapIcon; }
namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client { class IWayPointTarget; }

#define RPG_CLIENT_MAPICONEXTENSIONS_GETWAYPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0xD5F42A0)
#define RPG_CLIENT_MAPICONEXTENSIONS_ISINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0xD5F3E70)
#define RPG_CLIENT_MAPICONEXTENSIONS__GETFIVEDIMWAYPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0xD5F5110)
#define RPG_CLIENT_MAPICONEXTENSIONS__GETFOURROTATEVOXELWAYPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0xD5F50B0)
#define RPG_CLIENT_MAPICONEXTENSIONS__GETMAZEWAYPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0xD5F4AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapIconExtensions_TypeDefinitionIndex = 62973;

	class MapIconExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsInCurrentScene(::RPG::Client::IMapIcon* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS_ISINCURRENTSCENE_OFFSET))(a1);
		}

		static ::RPG::Client::AdventureWaypointConfig* GetWaypointConfig(::RPG::Client::IMapIconTrackSnapshot* a1)
		{
			return ((::RPG::Client::AdventureWaypointConfig*(*)(::RPG::Client::IMapIconTrackSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS_GETWAYPOINTCONFIG_OFFSET))(a1);
		}

		static ::RPG::Client::IWayPointTarget* _GetFiveDimWaypointConfig(::RPG::Client::IMapIconTrackSnapshot* a1, ::Class_1_0D8C9ED8919282E9* a2)
		{
			return ((::RPG::Client::IWayPointTarget*(*)(::RPG::Client::IMapIconTrackSnapshot*, ::Class_1_0D8C9ED8919282E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS__GETFIVEDIMWAYPOINTCONFIG_OFFSET))(a1, a2);
		}

		static ::RPG::Client::IWayPointTarget* _GetFourRotateVoxelWaypointConfig(::RPG::Client::IMapIconTrackSnapshot* a1, ::Class_1_0D8C9ED8919282E9* a2)
		{
			return ((::RPG::Client::IWayPointTarget*(*)(::RPG::Client::IMapIconTrackSnapshot*, ::Class_1_0D8C9ED8919282E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS__GETFOURROTATEVOXELWAYPOINTCONFIG_OFFSET))(a1, a2);
		}

		static ::RPG::Client::IWayPointTarget* _GetMazeWaypointConfig(::RPG::Client::IMapIconTrackSnapshot* a1, ::Class_1_0D8C9ED8919282E9* a2)
		{
			return ((::RPG::Client::IWayPointTarget*(*)(::RPG::Client::IMapIconTrackSnapshot*, ::Class_1_0D8C9ED8919282E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS__GETMAZEWAYPOINTCONFIG_OFFSET))(a1, a2);
		}
	};
}
