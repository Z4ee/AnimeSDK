#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Effect_ElectricChainV2Behavior_DisplacementType_TypeDefinitionIndex = 60301;

	enum class Effect_ElectricChainV2Behavior_DisplacementType : ::System::Int32
	{
		ScaledByLength = 0,
		Directly = 1,
	};
}
