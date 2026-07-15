#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineGroupComposer_AdjustmentMode_TypeDefinitionIndex = 37622;

	enum class CinemachineGroupComposer_AdjustmentMode : ::System::Int32
	{
		ZoomOnly = 0,
		DollyOnly = 1,
		DollyThenZoom = 2,
	};
}
