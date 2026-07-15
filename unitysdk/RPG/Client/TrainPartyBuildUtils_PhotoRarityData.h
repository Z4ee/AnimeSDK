#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildUtils_PhotoRarityData_TypeDefinitionIndex = 65150;

	struct alignas(8) TrainPartyBuildUtils_PhotoRarityData
	{
		::System::Int32 RarityID; // 0x10
		::RPG::Client::TextID RarityName; // 0x18
	};
}
