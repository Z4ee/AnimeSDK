#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityTimeSlows_ValueType_TypeDefinitionIndex = 64824;

	enum class ConfigEntityTimeSlows_ValueType : ::System::Int32
	{
		Null = 0,
		ConfigEntityTimeSlowCurve = 2,
		ConfigEntityTimeSlow = 1,
	};
}
