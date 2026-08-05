#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyAccessType_TypeDefinitionIndex = 31609;

	enum class StateTreePropertyAccessType : ::System::Byte
	{
		Offset = 0x0,
		Object = 0x1,
		WeakObject = 0x2,
		SoftObject = 0x3,
		ObjectInstance = 0x4,
		StructInstance = 0x5,
		IndexArray = 0x6,
	};
}
