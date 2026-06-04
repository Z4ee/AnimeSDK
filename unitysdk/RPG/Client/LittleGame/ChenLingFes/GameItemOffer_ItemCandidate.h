#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int GameItemOffer_ItemCandidate_TypeDefinitionIndex = 72262;

	struct alignas(4) GameItemOffer_ItemCandidate
	{
		::System::UInt32 ItemID; // 0x10
		::System::Single Weight; // 0x14
	};
}
