#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MissionWaypointInfoType.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissionWaypointInfo_TypeDefinitionIndex = 63257;

	struct alignas(4) MissionWaypointInfo
	{
		::RPG::Client::MissionWaypointInfoType MissionWaypointInfoType; // 0x10
		::System::Boolean TargetInCurrentMap; // 0x14
		::RPG::GameCore::MissionWayPointType Type; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 EntityID; // 0x20
		::System::UInt32 LittleGameEntityID; // 0x24
		::System::Boolean IsEntityValid; // 0x28
		::System::Boolean IsEntityBorn; // 0x29
		::UnityEngine::Vector3 EntityBornPosition; // 0x2C
		::System::Boolean IsEntityOccupied; // 0x38
	};
}
