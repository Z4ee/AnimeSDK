#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int PhonemeMarker_TypeDefinitionIndex = 45234;

	struct alignas(8) PhonemeMarker
	{
		::System::String* phoneme; // 0x10
		::System::Int32 emotionIndex; // 0x18
		::System::Int32 phonemeNumber; // 0x1C
		::System::Single time; // 0x20
		::System::Single value; // 0x24
	};
}
