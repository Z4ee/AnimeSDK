#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FocusCameraTargetActivePolicy_TypeDefinitionIndex = 44320;

	enum class FocusCameraTargetActivePolicy : ::System::Int32
	{
		None = 0,
		ByRadius2D = 1,
		Always = 2,
	};
}
