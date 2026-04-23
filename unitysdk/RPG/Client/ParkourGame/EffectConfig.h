#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int EffectConfig_TypeDefinitionIndex = 68243;

	struct alignas(8) EffectConfig
	{
		::System::String* PrefabPath; // 0x10
		::System::String* AttachPoint; // 0x18
		::UnityEngine::Vector3 LocalPositionOffset; // 0x20
		::UnityEngine::Vector3 LocalRotationOffset; // 0x2C
	};
}
