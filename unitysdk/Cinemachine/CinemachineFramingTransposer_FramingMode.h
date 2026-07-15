#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFramingTransposer_FramingMode_TypeDefinitionIndex = 37618;

	enum class CinemachineFramingTransposer_FramingMode : ::System::Int32
	{
		Horizontal = 0,
		Vertical = 1,
		HorizontalAndVertical = 2,
		None = 3,
	};
}
