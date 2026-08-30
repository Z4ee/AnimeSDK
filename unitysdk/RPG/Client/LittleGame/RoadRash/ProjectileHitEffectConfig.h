#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int ProjectileHitEffectConfig_TypeDefinitionIndex = 41323;

	struct alignas(8) ProjectileHitEffectConfig
	{
		::System::String* PrefabPath; // 0x10
		::UnityEngine::Vector3 LocalPositionOffset; // 0x18
		::UnityEngine::Vector3 LocalRotationOffset; // 0x24
	};
}
