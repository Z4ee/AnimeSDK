#pragma once
#include "unitysdk/unitysdk.h"

namespace Hdg
{
	inline static constexpr unsigned int SerialisationHelpers_ArrayElementType_TypeDefinitionIndex = 45167;

	enum class SerialisationHelpers_ArrayElementType : ::System::Int32
	{
		Primitive = 0,
		UserStruct = 1,
		SerialiserInterface = 2,
	};
}
