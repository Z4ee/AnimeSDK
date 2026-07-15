#pragma once
#include "unitysdk/unitysdk.h"

namespace IFix::Core
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 9770;

	enum class ValueType : ::System::Int32
	{
		Integer = 0,
		Long = 1,
		Float = 2,
		Double = 3,
		StackReference = 4,
		StaticFieldReference = 5,
		FieldReference = 6,
		ChainFieldReference = 7,
		Object = 8,
		ValueType = 9,
		ArrayReference = 10,
	};
}
