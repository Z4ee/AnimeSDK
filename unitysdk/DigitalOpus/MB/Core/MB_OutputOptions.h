#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_OutputOptions_TypeDefinitionIndex = 90597;

	enum class MB_OutputOptions : ::System::Int32
	{
		bakeIntoPrefab = 0,
		bakeMeshsInPlace = 1,
		bakeTextureAtlasesOnly = 2,
		bakeIntoSceneObject = 3,
	};
}
