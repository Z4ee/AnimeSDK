#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int CameraOrbialElevationAngles_TypeDefinitionIndex = 56519;

	struct alignas(4) CameraOrbialElevationAngles
	{
		::System::Single m_Ratio; // 0x10
		::System::Single m_ElevationAngle; // 0x14
	};
}
