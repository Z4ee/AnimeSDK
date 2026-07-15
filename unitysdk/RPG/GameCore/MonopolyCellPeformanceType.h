#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCellPeformanceType_TypeDefinitionIndex = 11564;

	enum class MonopolyCellPeformanceType : ::System::Int32
	{
		Default = 0,
		ChangeColor = 1,
		ChangeMaterial = 2,
	};
}
