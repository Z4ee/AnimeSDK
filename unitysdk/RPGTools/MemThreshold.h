#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools
{
	inline static constexpr unsigned int MemThreshold_TypeDefinitionIndex = 45148;

	enum class MemThreshold : ::System::Int32
	{
		Normal = 600,
		Warning = 800,
		Urgent = 1000,
		Critical = 1200,
	};
}
