#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicArgumentType_TypeDefinitionIndex = 61155;

	enum class DynamicArgumentType : ::System::Int32
	{
		EBOOL = 2,
		EFLOAT = 0,
		EINT = 1,
		ESTRING = 3,
	};
}
