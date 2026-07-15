#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFramingTransposer_AdjustmentMode_TypeDefinitionIndex = 37619;

	enum class CinemachineFramingTransposer_AdjustmentMode : ::System::Int32
	{
		ZoomOnly = 0,
		DollyOnly = 1,
		DollyThenZoom = 2,
	};
}
