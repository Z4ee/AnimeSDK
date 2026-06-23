#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraTypeZ_TypeDefinitionIndex = 42581;

	enum class HollowCameraTypeZ : ::System::Int32
	{
		LastZ = 2,
		FixedZ = 1,
		DynamicZ = 0,
	};
}
