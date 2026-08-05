#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int VehicleSplineNode_TypeDefinitionIndex = 89537;

	struct alignas(4) VehicleSplineNode
	{
		::UnityEngine::Vector3 center; // 0x10
	};
}
