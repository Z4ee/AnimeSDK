#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapper_RaycastHitInfo_TypeDefinitionIndex = 45248;

	struct alignas(4) EmbreeWrapper_RaycastHitInfo
	{
		::UnityEngine::Vector3 point; // 0x10
		::UnityEngine::Vector3 normal; // 0x1C
		::System::Single distance; // 0x28
		::System::UInt32 geometryID; // 0x2C
		::System::UInt32 primitiveID; // 0x30
		::UnityEngine::Vector2 uv; // 0x34
	};
}
