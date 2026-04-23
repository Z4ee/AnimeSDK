#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int GeometryShadowQuality_TypeDefinitionIndex = 35045;

	enum class GeometryShadowQuality : ::System::Int32
	{
		Normal = 0,
		Low = 1,
		VeryLow = 2,
	};
}
