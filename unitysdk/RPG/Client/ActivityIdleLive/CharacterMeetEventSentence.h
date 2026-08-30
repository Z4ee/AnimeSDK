#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int CharacterMeetEventSentence_TypeDefinitionIndex = 74864;

	struct alignas(8) CharacterMeetEventSentence
	{
		::System::UInt32 Index; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::RPG::Client::TextID Sentence; // 0x28
		::System::String* FigurePath; // 0x38
	};
}
