#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Plane3Triangle3Intr_TypeDefinitionIndex = 33151;

	struct alignas(4) Plane3Triangle3Intr
	{
		::Dest::Math::IntersectionTypes IntersectionType; // 0x10
		::System::Int32 Quantity; // 0x14
		::UnityEngine::Vector3 Point0; // 0x18
		::UnityEngine::Vector3 Point1; // 0x24
		::UnityEngine::Vector3 Point2; // 0x30
	};
}
