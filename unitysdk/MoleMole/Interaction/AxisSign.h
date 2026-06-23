#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Interaction
{
	inline static constexpr unsigned int AxisSign_TypeDefinitionIndex = 48315;

	enum class AxisSign : ::System::Int32
	{
		Zn = 5,
		Yn = 3,
		Zp = 4,
		Xp = 0,
		Xn = 1,
		None = -1,
		Yp = 2,
	};
}
