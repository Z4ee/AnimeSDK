#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityTimeSlows_ValueType_TypeDefinitionIndex = 68915;

	enum class ConfigEntityTimeSlows_ValueType : ::System::Int32
	{
		Null = 0,
		ConfigEntityTimeSlow = 1,
		ConfigEntityTimeSlowCurve = 2,
	};
}
