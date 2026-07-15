#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameWorld_MovePath_TypeDefinitionIndex = 40344;

	struct alignas(4) TimelineControlGameWorld_MovePath
	{
		::System::Single CostTime; // 0x10
		::UnityEngine::Vector3Int DeltaMove; // 0x14
	};
}
