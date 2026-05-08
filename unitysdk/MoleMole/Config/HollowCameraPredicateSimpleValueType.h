#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraPredicateSimpleValueType_TypeDefinitionIndex = 42581;

	enum class HollowCameraPredicateSimpleValueType : ::System::Int32
	{
		None = 0,
		DeltaZ = 2,
		DeltaZAbsolute = 3,
		Distance = 1,
	};
}
