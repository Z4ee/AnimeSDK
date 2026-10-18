#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TalkConvinceTalkingSide_TypeDefinitionIndex = 60681;

	enum class TalkConvinceTalkingSide : ::System::Int32
	{
		Init = 0,
		Left = 1,
		Right = 2,
		VoiceOver = 3,
	};
}
