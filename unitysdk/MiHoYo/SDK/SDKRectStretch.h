#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKRectStretch_TypeDefinitionIndex = 7959;

	enum class SDKRectStretch : ::System::Int32
	{
		HorizontalTop = 0,
		HorizontalCenter = 1,
		HorizontalBottom = 2,
		VerticalLeft = 3,
		VerticalCenter = 4,
		VerticalRight = 5,
		FullStretch = 6,
	};
}
