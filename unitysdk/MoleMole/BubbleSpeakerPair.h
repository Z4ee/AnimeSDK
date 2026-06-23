#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int BubbleSpeakerPair_TypeDefinitionIndex = 56551;

	struct alignas(8) BubbleSpeakerPair
	{
		::System::Int32 speadkerId; // 0x10
		::System::String* tag; // 0x18
	};
}
