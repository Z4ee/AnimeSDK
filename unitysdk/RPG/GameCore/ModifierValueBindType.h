#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierValueBindType_TypeDefinitionIndex = 17500;

	enum class ModifierValueBindType : ::System::Int32
	{
		Layer = 0,
		Count = 1,
		MaxLayer = 2,
		LifeTime = 3,
		End = 4,
	};
}
