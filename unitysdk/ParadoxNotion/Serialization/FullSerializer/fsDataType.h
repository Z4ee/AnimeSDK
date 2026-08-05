#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsDataType_TypeDefinitionIndex = 30879;

	enum class fsDataType : ::System::Int32
	{
		Null = 6,
		String = 5,
		Boolean = 4,
		Object = 1,
		Int64 = 3,
		Double = 2,
		Array = 0,
	};
}
