#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore_Stage_TypeDefinitionIndex = 37655;

	enum class CinemachineCore_Stage : ::System::Int32
	{
		Body = 0,
		Aim = 1,
		Noise = 2,
		Finalize = 3,
	};
}
