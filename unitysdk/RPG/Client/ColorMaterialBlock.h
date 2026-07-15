#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ColorMaterialBlock_TypeDefinitionIndex = 66792;

	struct alignas(4) ColorMaterialBlock
	{
		::System::Boolean Enable; // 0x10
		::UnityEngine::Color Value; // 0x14
	};
}
