#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_SpeedMode_TypeDefinitionIndex = 51247;

	enum class ConfigZipLine_SpeedMode : ::System::Int32
	{
		Tangent_Acceleration = 0,
		Tangent_FinalSpeed_Acceleration = 1,
		Tangent_FinalSpeed_Resistance = 2,
	};
}
