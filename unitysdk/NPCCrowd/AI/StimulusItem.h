#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/StimulusConfig.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int StimulusItem_TypeDefinitionIndex = 82068;

	struct alignas(8) StimulusItem
	{
		::NPCCrowd::AI::StimulusConfig stimulus; // 0x10
		::UnityEngine::Vector3 position; // 0x40
		::System::UInt32 triggerHandlerID; // 0x4C
		::System::Single timer; // 0x50
	};
}
