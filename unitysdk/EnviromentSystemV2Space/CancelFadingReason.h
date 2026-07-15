#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int CancelFadingReason_TypeDefinitionIndex = 47560;

	enum class CancelFadingReason : ::System::Int32
	{
		Replaced = 0,
		NewFading = 1,
		FadingBack = 2,
		Count = 3,
	};
}
