#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AICalculateType_TypeDefinitionIndex = 42985;

	enum class AICalculateType : ::System::Int32
	{
		Mul = 2,
		Add = 0,
		Sub = 1,
		Div = 3,
	};
}
