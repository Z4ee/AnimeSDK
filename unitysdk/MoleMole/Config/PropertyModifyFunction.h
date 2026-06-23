#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int PropertyModifyFunction_TypeDefinitionIndex = 82253;

	enum class PropertyModifyFunction : ::System::Int32
	{
		Add = 1,
		Div = 4,
		Replace = 3,
		Mod = 6,
		Rand = 5,
		Unknow = 0,
		Mul = 2,
	};
}
