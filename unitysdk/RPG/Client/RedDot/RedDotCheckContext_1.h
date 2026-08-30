#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::RedDot { template <typename T> class RedDotState_1; }

namespace RPG::Client::RedDot
{
	inline static constexpr unsigned int RedDotCheckContext_1_TypeDefinitionIndex = 78677;

	template <typename TInstanceKey>
	struct RedDotCheckContext_1
	{
		::RPG::Client::RedDot::RedDotState_1<TInstanceKey>* State; // 0x0
		::RPG::GameCore::RedDotType RedDotType; // 0x0
	};
}
