#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonDataCompatibility_SourceType_TypeDefinitionIndex = 42201;

	enum class SkeletonDataCompatibility_SourceType : ::System::Int32
	{
		Json = 0,
		Binary = 1,
	};
}
