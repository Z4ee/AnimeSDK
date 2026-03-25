#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPreviewTipsType_TypeDefinitionIndex = 61144;

	enum class TrainPartyPreviewTipsType : ::System::Int32
	{
		None = 0,
		Good = 1,
		Bad = 2,
		Special = 3,
	};
}
