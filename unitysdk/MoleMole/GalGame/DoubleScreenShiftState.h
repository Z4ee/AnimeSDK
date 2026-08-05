#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int DoubleScreenShiftState_TypeDefinitionIndex = 49752;

	enum class DoubleScreenShiftState : ::System::Int32
	{
		ToMiddle = 1,
		LeftExpand = 3,
		None = 0,
		RightExpand = 2,
	};
}
