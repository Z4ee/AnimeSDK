#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraPredicateSimpleValueType_TypeDefinitionIndex = 53744;

	enum class HollowCameraPredicateSimpleValueType : ::System::Int32
	{
		DeltaZ = 2,
		DeltaZAbsolute = 3,
		Distance = 1,
		None = 0,
	};
}
