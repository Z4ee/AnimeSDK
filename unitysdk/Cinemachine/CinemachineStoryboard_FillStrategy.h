#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStoryboard_FillStrategy_TypeDefinitionIndex = 37599;

	enum class CinemachineStoryboard_FillStrategy : ::System::Int32
	{
		BestFit = 0,
		CropImageToFit = 1,
		StretchToFit = 2,
	};
}
