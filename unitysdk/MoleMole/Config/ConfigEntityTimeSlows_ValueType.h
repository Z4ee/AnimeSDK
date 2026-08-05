#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityTimeSlows_ValueType_TypeDefinitionIndex = 60078;

	enum class ConfigEntityTimeSlows_ValueType : ::System::Int32
	{
		ConfigEntityTimeSlowCurve = 2,
		ConfigEntityTimeSlow = 1,
		Null = 0,
	};
}
