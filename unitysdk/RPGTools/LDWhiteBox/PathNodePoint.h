#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int PathNodePoint_TypeDefinitionIndex = 47118;

	struct alignas(4) PathNodePoint
	{
		::UnityEngine::Vector3 LocalPos; // 0x10
	};
}
