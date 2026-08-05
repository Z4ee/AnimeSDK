#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/NPCCrowd/AI/StimulusConfig.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int StimulusItem_TypeDefinitionIndex = 91302;

	struct alignas(8) StimulusItem
	{
		::NPCCrowd::AI::StimulusConfig stimulus; // 0x10
		::UnityEngine::Vector3 position; // 0x40
		::System::Int32 triggerHandlerID; // 0x4C
		::Foundation::Unreal::FGameplayTag tag; // 0x50
		::System::Single timer; // 0x58
	};
}
