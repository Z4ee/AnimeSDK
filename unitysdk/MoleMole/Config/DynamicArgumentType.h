#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicArgumentType_TypeDefinitionIndex = 38051;

	enum class DynamicArgumentType : ::System::Int32
	{
		EINT = 1,
		EBOOL = 2,
		EFLOAT = 0,
		ESTRING = 3,
	};
}
