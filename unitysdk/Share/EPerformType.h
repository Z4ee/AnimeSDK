#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPerformType_TypeDefinitionIndex = 14254;

	enum class EPerformType : ::System::Int16
	{
		EnumCount = 3,
		PlotPlay = 0,
		Bubble = 2,
		None = -1,
		Dialog = 1,
	};
}
