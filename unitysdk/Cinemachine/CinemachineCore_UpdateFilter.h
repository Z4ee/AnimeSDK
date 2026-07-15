#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore_UpdateFilter_TypeDefinitionIndex = 37659;

	enum class CinemachineCore_UpdateFilter : ::System::Int32
	{
		Fixed = 0,
		Late = 1,
		Smart = 8,
		SmartFixed = 8,
		SmartLate = 9,
	};
}
