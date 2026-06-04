#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCar_BlockAudioEventConfig_TypeDefinitionIndex = 74408;

	struct alignas(8) MonoCityCar_BlockAudioEventConfig
	{
		::System::Int32 MinimalCarCount; // 0x10
		::System::String* BlockAudioEvent; // 0x18
		::System::String* BlockAudioStopEvent; // 0x20
		::System::String* EffectPrefabPath; // 0x28
		::UnityEngine::Transform* EffectAttachPoint; // 0x30
		::System::Single TriggerProbability; // 0x38
	};
}
