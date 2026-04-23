#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Effect_ElectricChainV2Behavior_SubChainShapeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Effect_ElectricChainV2Behavior_SubChainCollection_TypeDefinitionIndex = 67721;

	struct alignas(4) Effect_ElectricChainV2Behavior_SubChainCollection
	{
		::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainShapeType from; // 0x10
		::RPG::Client::ElectricChainV2::Effect_ElectricChainV2Behavior_SubChainShapeType to; // 0x14
		::UnityEngine::Vector2 rangeOnMainChain; // 0x18
		::UnityEngine::Vector2 length; // 0x20
		::System::Int32 proportion; // 0x28
	};
}
