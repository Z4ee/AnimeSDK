#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirlineSubwayWay_PossessionConfig_TypeDefinitionIndex = 64518;

	struct alignas(8) AirlineSubwayWay_PossessionConfig
	{
		::System::String* AnimName; // 0x10
		::UnityEngine::Vector3 LocalPosition; // 0x18
		::UnityEngine::Quaternion LocalRotation; // 0x24
		::UnityEngine::Vector3 LocalScale; // 0x34
		::System::String* AttachPoint; // 0x40
		::System::String* PrefabPath; // 0x48
	};
}
