#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcTrs_CursorChangeModeEnum_TypeDefinitionIndex = 34509;

	enum class BGCcTrs_CursorChangeModeEnum : ::System::Int32
	{
		Constant = 0,
		LinearField = 1,
		LinearFieldInterpolate = 2,
	};
}
