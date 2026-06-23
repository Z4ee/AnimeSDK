#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigSpeedModifier_Slope_Type_TypeDefinitionIndex = 51234;

	enum class ConfigZipLine_ConfigSpeedModifier_Slope_Type : ::System::Int32
	{
		Curve = 1,
		Map = 0,
	};
}
