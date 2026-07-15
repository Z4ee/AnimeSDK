#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleConnectionPointType.h"
#include "unitysdk/RPG/GameCore/ChronicleLineType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class MissionChronicleSubPathData; }

namespace RPG::Client
{
	inline static constexpr unsigned int SubChronicleConnectionWay_TypeDefinitionIndex = 63156;

	struct alignas(8) SubChronicleConnectionWay
	{
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::ChronicleConnectionPointType FromPoint; // 0x14
		::RPG::GameCore::ChronicleConnectionPointType ToPoint; // 0x18
		::RPG::GameCore::ChronicleLineType LineType; // 0x1C
		::RPG::Client::MissionChronicleSubPathData* PathData; // 0x20
	};
}
