#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int ContainerAnchor_TypeDefinitionIndex = 24086;

	enum class ContainerAnchor : ::System::Int32
	{
		UpperLeft = 0,
		UpperCenter = 1,
		UpperRight = 2,
		MiddleLeft = 3,
		MiddleCenter = 4,
		MiddleRight = 5,
		LowerLeft = 6,
		LowerCenter = 7,
		LowerRight = 8,
	};
}
