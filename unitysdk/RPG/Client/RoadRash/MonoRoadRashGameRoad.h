#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/MonoRoadRashGameRoad_Link.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class TrackExtensionMonoPlugin; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROAD_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1BC656F0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROAD_RESET_OFFSET UNITYSDK_OFFSET(0x1BC65780)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC65850)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameRoad_TypeDefinitionIndex = 75447;

	class MonoRoadRashGameRoad : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::TrackExtensionMonoPlugin* Track; // 0x18
		::System::UInt32 StartPointIndex; // 0x20
		::System::UInt32 EndPointIndex; // 0x24
		::Il2CppArray<::RPG::Client::RoadRash::MonoRoadRashGameRoad_Link>* Links; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROAD__CTOR_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROAD_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROAD_RESET_OFFSET))(this);
		}
	};
}
