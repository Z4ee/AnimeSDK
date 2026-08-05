#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal { class SerializableGameplayTag; }
namespace System { class String; }

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int StimulusConfig_TypeDefinitionIndex = 62714;

	struct alignas(8) StimulusConfig
	{
		::System::UInt32 ID; // 0x10
		::System::String* name; // 0x18
		::Foundation::Unreal::SerializableGameplayTag* tag; // 0x20
		::System::Single radius; // 0x28
		::System::Boolean isDuration; // 0x2C
		::System::Single duration; // 0x30
		::System::Single cd; // 0x34
		::System::Boolean onlySelf; // 0x38
	};
}
