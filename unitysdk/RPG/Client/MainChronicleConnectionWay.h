#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleConnectionPointType.h"
#include "unitysdk/RPG/GameCore/ChronicleLineType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class MissionChronicleMainPathData; }

namespace RPG::Client
{
	inline static constexpr unsigned int MainChronicleConnectionWay_TypeDefinitionIndex = 63145;

	struct alignas(8) MainChronicleConnectionWay
	{
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::ChronicleConnectionPointType FromPoint; // 0x14
		::RPG::GameCore::ChronicleConnectionPointType ToPoint; // 0x18
		::RPG::GameCore::ChronicleLineType LineType; // 0x1C
		::RPG::Client::MissionChronicleMainPathData* PathData; // 0x20
	};
}
