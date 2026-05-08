#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTransposer_AngularDampingMode_TypeDefinitionIndex = 32534;

	enum class CinemachineTransposer_AngularDampingMode : ::System::Int32
	{
		Euler = 0,
		Quaternion = 1,
	};
}
