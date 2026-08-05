#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemSpeedCurveType_TypeDefinitionIndex = 75747;

	enum class ConfigSurfGameItemSpeedCurveType : ::System::Int32
	{
		Deceleration = 2,
		None = 0,
		Acceleration = 1,
	};
}
