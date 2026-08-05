#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CameraRotType_TypeDefinitionIndex = 82515;

	enum class CameraRotType : ::System::Int32
	{
		Clockwise = 1,
		Normal = 0,
		Anticlockwise = 2,
	};
}
