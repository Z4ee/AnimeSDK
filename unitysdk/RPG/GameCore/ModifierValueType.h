#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierValueType_TypeDefinitionIndex = 23957;

	enum class ModifierValueType : ::System::Int32
	{
		Count = 0,
		Layer = 1,
		LifeTime = 2,
		Amount = 3,
		CurrentShield = 4,
		MaxLayer = 5,
		RawDeltaStackingLayer = 6,
		DeltaStackingLayer = 7,
	};
}
