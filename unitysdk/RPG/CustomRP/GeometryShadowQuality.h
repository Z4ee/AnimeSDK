#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int GeometryShadowQuality_TypeDefinitionIndex = 36112;

	enum class GeometryShadowQuality : ::System::Int32
	{
		Normal = 0,
		Low = 1,
		VeryLow = 2,
	};
}
