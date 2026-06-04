#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::HoudiniToUnity
{
	inline static constexpr unsigned int SegmentValueType_TypeDefinitionIndex = 44285;

	enum class SegmentValueType : ::System::Int32
	{
		Float = 0,
		Int = 1,
		String = 2,
	};
}
