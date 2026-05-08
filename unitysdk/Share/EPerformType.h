#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPerformType_TypeDefinitionIndex = 16727;

	enum class EPerformType : ::System::Int16
	{
		EnumCount = 3,
		None = -1,
		Dialog = 1,
		PlotPlay = 0,
		Bubble = 2,
	};
}
