#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2TreeStats_TypeDefinitionIndex = 35253;

	struct alignas(4) B2TreeStats
	{
		::System::Int32 nodeVisits; // 0x10
		::System::Int32 leafVisits; // 0x14
	};
}
