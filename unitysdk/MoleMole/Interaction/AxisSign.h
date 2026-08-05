#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Interaction
{
	inline static constexpr unsigned int AxisSign_TypeDefinitionIndex = 50389;

	enum class AxisSign : ::System::Int32
	{
		Zp = 4,
		Zn = 5,
		Xn = 1,
		None = -1,
		Xp = 0,
		Yp = 2,
		Yn = 3,
	};
}
