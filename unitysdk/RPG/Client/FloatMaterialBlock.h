#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FloatMaterialBlock_TypeDefinitionIndex = 66791;

	struct alignas(4) FloatMaterialBlock
	{
		::System::Boolean Enable; // 0x10
		::System::Single Value; // 0x14
	};
}
