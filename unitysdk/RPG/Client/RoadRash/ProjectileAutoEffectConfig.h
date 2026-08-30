#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int ProjectileAutoEffectConfig_TypeDefinitionIndex = 75445;

	struct alignas(8) ProjectileAutoEffectConfig
	{
		::System::String* PrefabPath; // 0x10
		::UnityEngine::Transform* AttachPointTransform; // 0x18
		::UnityEngine::Vector3 LocalScale; // 0x20
		::UnityEngine::Vector3 LocalPositionOffset; // 0x2C
		::UnityEngine::Vector3 LocalRotationOffset; // 0x38
	};
}
