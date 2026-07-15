#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactPam_ChatState_TypeDefinitionIndex = 60432;

	enum class ChatContactPam_ChatState : ::System::Int32
	{
		Chatting = 0,
		WaitingForGreeting = 1,
		WaitingForResponse = 2,
		WaitingForSuggestions = 3,
		WaitingForGreetingSuggestions = 4,
	};
}
