#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_OutputOptions_TypeDefinitionIndex = 94532;

	enum class MB2_OutputOptions : ::System::Int32
	{
		bakeIntoSceneObject = 0,
		bakeMeshAssetsInPlace = 1,
		bakeIntoPrefab = 2,
	};
}
