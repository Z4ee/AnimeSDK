#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Circle3.h"
#include "unitysdk/Dest/Math/Sphere3Sphere3IntrTypes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Sphere3Sphere3Intr_TypeDefinitionIndex = 35391;

	struct alignas(4) Sphere3Sphere3Intr
	{
		::Dest::Math::Sphere3Sphere3IntrTypes IntersectionType; // 0x10
		::Dest::Math::Circle3 Circle; // 0x14
		::UnityEngine::Vector3 ContactPoint; // 0x48
	};
}
