#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShaderQuality_TypeDefinitionIndex = 35990;

	enum class ShaderQuality : ::System::Int32
	{
		Low = 0,
		Medium = 1,
		High = 2,
	};
}
