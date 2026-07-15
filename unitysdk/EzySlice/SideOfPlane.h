#pragma once
#include "unitysdk/unitysdk.h"

namespace EzySlice
{
	inline static constexpr unsigned int SideOfPlane_TypeDefinitionIndex = 45221;

	enum class SideOfPlane : ::System::Int32
	{
		UP = 0,
		DOWN = 1,
		ON = 2,
	};
}
