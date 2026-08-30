#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int RoadRashObstacleTriggerEffectConfig_TypeDefinitionIndex = 75450;

	struct alignas(8) RoadRashObstacleTriggerEffectConfig
	{
		::System::String* PrefabPath; // 0x10
		::UnityEngine::Vector3 LocalPositionOffset; // 0x18
		::UnityEngine::Vector3 LocalRotationOffset; // 0x24
		::System::Boolean FireOnAttackHit; // 0x30
	};
}
