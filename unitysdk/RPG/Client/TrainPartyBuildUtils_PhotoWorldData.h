#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildUtils_PhotoWorldData_TypeDefinitionIndex = 65149;

	struct alignas(8) TrainPartyBuildUtils_PhotoWorldData
	{
		::System::UInt32 WorldID; // 0x10
		::RPG::Client::TextID WorldName; // 0x18
	};
}
