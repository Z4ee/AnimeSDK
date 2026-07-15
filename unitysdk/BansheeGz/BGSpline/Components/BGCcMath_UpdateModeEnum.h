#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcMath_UpdateModeEnum_TypeDefinitionIndex = 34496;

	enum class BGCcMath_UpdateModeEnum : ::System::Int32
	{
		Always = 0,
		AabbVisible = 1,
		RendererVisible = 2,
	};
}
