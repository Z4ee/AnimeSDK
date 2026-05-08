#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Interaction
{
	inline static constexpr unsigned int AxisSign_TypeDefinitionIndex = 66429;

	enum class AxisSign : ::System::Int32
	{
		Zn = 5,
		None = -1,
		Xn = 1,
		Yp = 2,
		Xp = 0,
		Zp = 4,
		Yn = 3,
	};
}
