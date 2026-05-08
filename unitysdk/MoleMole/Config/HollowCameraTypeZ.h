#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraTypeZ_TypeDefinitionIndex = 41476;

	enum class HollowCameraTypeZ : ::System::Int32
	{
		DynamicZ = 0,
		LastZ = 2,
		FixedZ = 1,
	};
}
