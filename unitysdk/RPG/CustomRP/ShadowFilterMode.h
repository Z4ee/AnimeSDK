#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShadowFilterMode_TypeDefinitionIndex = 36024;

	enum class ShadowFilterMode : ::System::Int32
	{
		PCF2x2 = 0,
		PCF3x3_Tent = 1,
		PCF5x5_Tent = 2,
		PCF7x7_Tent = 3,
	};
}
