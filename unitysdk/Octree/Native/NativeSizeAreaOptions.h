#pragma once
#include "unitysdk/unitysdk.h"

namespace Octree::Native
{
	inline static constexpr unsigned int NativeSizeAreaOptions_TypeDefinitionIndex = 80452;

	enum class NativeSizeAreaOptions : ::System::Int32
	{
		UninitializedMemory = 0,
		ClearMemory = 1,
	};
}
