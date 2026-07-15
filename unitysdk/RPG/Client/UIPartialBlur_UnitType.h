#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIPartialBlur_UnitType_TypeDefinitionIndex = 69738;

	enum class UIPartialBlur_UnitType : ::System::Int32
	{
		Percent = 0,
		Pixel = 1,
	};
}
