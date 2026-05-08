#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FocusCameraTargetActivePolicy_TypeDefinitionIndex = 54661;

	enum class FocusCameraTargetActivePolicy : ::System::Int32
	{
		None = 0,
		Always = 2,
		ByRadius2D = 1,
	};
}
