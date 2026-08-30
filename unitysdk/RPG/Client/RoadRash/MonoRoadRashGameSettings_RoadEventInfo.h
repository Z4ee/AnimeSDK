#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::RoadRash { class MonoRoadRashGameRoad; }
namespace System { class String; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameSettings_RoadEventInfo_TypeDefinitionIndex = 75456;

	struct alignas(8) MonoRoadRashGameSettings_RoadEventInfo
	{
		::RPG::Client::RoadRash::MonoRoadRashGameRoad* Road; // 0x10
		::System::Single Distance; // 0x18
		::System::UInt32 LapCount; // 0x1C
		::System::String* CustomString; // 0x20
	};
}
