#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Subway { class AirshipSubway; }

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubwayEmitter_SubData_TypeDefinitionIndex = 76790;

	struct alignas(8) AirshipSubwayEmitter_SubData
	{
		::System::Single Distance; // 0x10
		::RPG::Client::Subway::AirshipSubway* Prefab; // 0x18
	};
}
