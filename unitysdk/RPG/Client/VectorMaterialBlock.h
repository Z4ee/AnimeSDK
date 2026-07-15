#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client
{
	inline static constexpr unsigned int VectorMaterialBlock_TypeDefinitionIndex = 66793;

	struct alignas(4) VectorMaterialBlock
	{
		::System::Boolean Enable; // 0x10
		::UnityEngine::Vector4 Value; // 0x14
	};
}
