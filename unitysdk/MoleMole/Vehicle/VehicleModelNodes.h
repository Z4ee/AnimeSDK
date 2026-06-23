#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleModelNodes_TypeDefinitionIndex = 66259;

	struct alignas(8) VehicleModelNodes
	{
		::UnityEngine::Transform* body; // 0x10
		::UnityEngine::Transform* frontWheel; // 0x18
	};
}
