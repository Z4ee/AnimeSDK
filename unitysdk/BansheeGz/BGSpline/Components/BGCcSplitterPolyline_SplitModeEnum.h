#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcSplitterPolyline_SplitModeEnum_TypeDefinitionIndex = 33847;

	enum class BGCcSplitterPolyline_SplitModeEnum : ::System::Int32
	{
		UseMathData = 0,
		PartsTotal = 1,
		PartsPerSection = 2,
	};
}
