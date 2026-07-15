#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TalkModule_OptionType_TypeDefinitionIndex = 65023;

	enum class TalkModule_OptionType : ::System::Int32
	{
		Defalut = 0,
		Rogue = 1,
		TarotBook = 2,
		LINews = 3,
		FullScreen = 4,
	};
}
