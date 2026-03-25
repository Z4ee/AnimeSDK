#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Effect_ElectricChainV2Behavior_SubChainShapeType_TypeDefinitionIndex = 60302;

	enum class Effect_ElectricChainV2Behavior_SubChainShapeType : ::System::Int32
	{
		Emitter = 0,
		Receiver = 1,
		MainChain = 2,
		Nowhere = 3,
	};
}
