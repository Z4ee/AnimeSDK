#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetEmojiInfo_TypeDefinitionIndex = 74690;

	struct alignas(8) PetEmojiInfo
	{
		::System::UInt32 EmojiID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::String* EmojiPath; // 0x18
	};
}
