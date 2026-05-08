#pragma once
#include "unitysdk/unitysdk.h"

namespace Octree::Native
{
	inline static constexpr unsigned int NativeSizeAreaOptions_TypeDefinitionIndex = 65485;

	enum class NativeSizeAreaOptions : ::System::Int32
	{
		ClearMemory = 1,
		UninitializedMemory = 0,
	};
}
