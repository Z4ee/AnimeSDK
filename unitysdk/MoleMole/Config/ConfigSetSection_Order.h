#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetSection_Order_TypeDefinitionIndex = 64927;

	enum class ConfigSetSection_Order : ::System::Int32
	{
		Temp = 2,
		Prv = 1,
		Cur = 0,
	};
}
