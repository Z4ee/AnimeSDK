#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int PropertyModifyFunction_TypeDefinitionIndex = 63851;

	enum class PropertyModifyFunction : ::System::Int32
	{
		Add = 1,
		Mul = 2,
		Mod = 6,
		Rand = 5,
		Replace = 3,
		Unknow = 0,
		Div = 4,
	};
}
