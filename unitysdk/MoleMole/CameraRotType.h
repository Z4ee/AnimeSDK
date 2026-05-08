#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CameraRotType_TypeDefinitionIndex = 59106;

	enum class CameraRotType : ::System::Int32
	{
		Clockwise = 1,
		Anticlockwise = 2,
		Normal = 0,
	};
}
