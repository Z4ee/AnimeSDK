#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicArgumentType_TypeDefinitionIndex = 81941;

	enum class DynamicArgumentType : ::System::Int32
	{
		EINT = 1,
		ESTRING = 3,
		EFLOAT = 0,
		EBOOL = 2,
	};
}
