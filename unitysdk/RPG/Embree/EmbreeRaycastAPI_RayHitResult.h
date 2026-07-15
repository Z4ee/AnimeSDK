#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeRaycastAPI_RayHitResult_TypeDefinitionIndex = 45237;

	struct alignas(4) EmbreeRaycastAPI_RayHitResult
	{
		::System::Boolean hasHit; // 0x10
		::UnityEngine::Vector3 position; // 0x14
		::UnityEngine::Vector3 normal; // 0x20
		::System::Single distance; // 0x2C
		::System::UInt32 geometryID; // 0x30
		::System::UInt32 primitiveID; // 0x34
		::System::Boolean isFrontFace; // 0x38
		::UnityEngine::Vector2 uv; // 0x3C
	};
}
