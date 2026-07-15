#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TrainParty::OutlinePost
{
	inline static constexpr unsigned int TrainPartyBuildOutlineState_TypeDefinitionIndex = 70971;

	enum class TrainPartyBuildOutlineState : ::System::Int32
	{
		Normal = 0,
		Hover = 1,
	};
}
