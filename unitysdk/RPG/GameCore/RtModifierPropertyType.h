#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtModifierPropertyType_TypeDefinitionIndex = 23937;

	enum class RtModifierPropertyType : ::System::Int32
	{
		Chance = 0,
		LifeTime = 1,
		MaxLayer = 2,
		LayerAddWhenStack = 3,
		TickInterval = 4,
		Count = 5,
		RemainLifeTime = 6,
		Layer = 7,
		RawDeltaStackingLayer = 8,
		DeltaStackingLayer = 9,
	};
}
