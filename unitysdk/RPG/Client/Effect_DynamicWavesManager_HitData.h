#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_DynamicWavesManager_HitData_TypeDefinitionIndex = 67291;

	struct alignas(8) Effect_DynamicWavesManager_HitData
	{
		::UnityEngine::Transform* trans; // 0x10
		::UnityEngine::Vector2 hitPoint; // 0x18
		::UnityEngine::Vector3 charaDirection; // 0x20
		::System::Boolean isHit; // 0x2C
		::UnityEngine::Collider* hitCollider; // 0x30
	};
}
