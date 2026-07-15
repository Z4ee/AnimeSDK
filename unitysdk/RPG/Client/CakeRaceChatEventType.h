#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceChatEventType_TypeDefinitionIndex = 60252;

	enum class CakeRaceChatEventType : ::System::Int32
	{
		Message = 0,
		Emoji = 1,
	};
}
