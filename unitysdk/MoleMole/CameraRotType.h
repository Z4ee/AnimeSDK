#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CameraRotType_TypeDefinitionIndex = 63928;

	enum class CameraRotType : ::System::Int32
	{
		Normal = 0,
		Anticlockwise = 2,
		Clockwise = 1,
	};
}
