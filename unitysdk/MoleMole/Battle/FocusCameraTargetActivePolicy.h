#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FocusCameraTargetActivePolicy_TypeDefinitionIndex = 58954;

	enum class FocusCameraTargetActivePolicy : ::System::Int32
	{
		ByRadius2D = 1,
		None = 0,
		Always = 2,
	};
}
