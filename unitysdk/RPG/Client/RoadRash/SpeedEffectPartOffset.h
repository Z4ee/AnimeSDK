#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int SpeedEffectPartOffset_TypeDefinitionIndex = 75466;

	struct alignas(4) SpeedEffectPartOffset
	{
		::System::UInt32 PartID; // 0x10
		::UnityEngine::Vector3 LeftOverrideLocalPosition; // 0x14
		::UnityEngine::Vector3 RightOverrideLocalPosition; // 0x20
	};
}
