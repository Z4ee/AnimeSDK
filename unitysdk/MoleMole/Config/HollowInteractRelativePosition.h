#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowInteractRelativePosition_TypeDefinitionIndex = 64264;

	enum class HollowInteractRelativePosition : ::System::Int32
	{
		Right = 2,
		Left = 0,
		Bottom = 3,
		Top = 1,
	};
}
