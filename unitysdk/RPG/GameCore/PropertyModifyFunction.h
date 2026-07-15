#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropertyModifyFunction_TypeDefinitionIndex = 15031;

	enum class PropertyModifyFunction : ::System::Int32
	{
		Unknow = 0,
		Set = 1,
		Add = 2,
		Mul = 3,
		MinSet = 4,
		MaxSet = 5,
	};
}
