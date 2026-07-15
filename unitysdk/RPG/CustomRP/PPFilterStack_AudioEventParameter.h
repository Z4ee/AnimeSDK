#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PPFilterStack_AudioEventParameter_TypeDefinitionIndex = 49498;

	struct alignas(8) PPFilterStack_AudioEventParameter
	{
		::System::String* OpenAudioEvent; // 0x10
		::System::String* EndAudioEvent; // 0x18
		::System::String* RTPCName; // 0x20
	};
}
