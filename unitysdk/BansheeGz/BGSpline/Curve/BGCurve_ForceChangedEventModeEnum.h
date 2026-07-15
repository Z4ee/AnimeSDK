#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurve_ForceChangedEventModeEnum_TypeDefinitionIndex = 34444;

	enum class BGCurve_ForceChangedEventModeEnum : ::System::Int32
	{
		Off = 0,
		EditorOnly = 1,
		EditorAndRuntime = 2,
	};
}
