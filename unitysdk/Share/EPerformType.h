#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPerformType_TypeDefinitionIndex = 11018;

	enum class EPerformType : ::System::Int16
	{
		None = -1,
		EnumCount = 3,
		Dialog = 1,
		Bubble = 2,
		PlotPlay = 0,
	};
}
