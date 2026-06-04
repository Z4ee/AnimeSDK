#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int HPBar_Mode_TypeDefinitionIndex = 67778;

	enum class HPBar_Mode : ::System::Int32
	{
		StartFromLeft = 0,
		StartFromRight = 1,
	};
}
