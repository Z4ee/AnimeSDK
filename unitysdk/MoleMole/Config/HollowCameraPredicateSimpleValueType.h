#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraPredicateSimpleValueType_TypeDefinitionIndex = 60146;

	enum class HollowCameraPredicateSimpleValueType : ::System::Int32
	{
		DeltaZAbsolute = 3,
		Distance = 1,
		None = 0,
		DeltaZ = 2,
	};
}
