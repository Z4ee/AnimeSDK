#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DashOverrideCalcMode_TypeDefinitionIndex = 18361;

	enum class DashOverrideCalcMode : ::System::Int32
	{
		KeepInitSpeed = 0,
		KeepAcceleration = 1,
	};
}
