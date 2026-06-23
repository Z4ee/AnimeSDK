#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsDataType_TypeDefinitionIndex = 30120;

	enum class fsDataType : ::System::Int32
	{
		String = 5,
		Double = 2,
		Array = 0,
		Object = 1,
		Boolean = 4,
		Int64 = 3,
		Null = 6,
	};
}
