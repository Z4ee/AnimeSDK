#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_B6045334FA181376;

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int RoadRashMapStartPoint_TypeDefinitionIndex = 41310;

	struct alignas(8) RoadRashMapStartPoint
	{
		::Class_1_B6045334FA181376* Road; // 0x10
		::System::Single Distance; // 0x18
		::System::Single Offset; // 0x1C
	};
}
