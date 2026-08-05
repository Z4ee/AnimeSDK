#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int PropertyModifyFunction_TypeDefinitionIndex = 68232;

	enum class PropertyModifyFunction : ::System::Int32
	{
		Rand = 5,
		Add = 1,
		Mul = 2,
		Unknow = 0,
		Div = 4,
		Replace = 3,
		Mod = 6,
	};
}
