#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThirdpartyLoginType_TypeDefinitionIndex = 19872;

	enum class ThirdpartyLoginType : ::System::Int32
	{
		TK_INVALID_TOKEN = 0,
		TK_THIRDPARTY_TOKEN = 1,
		TK_GAME_TOKEN = 2,
	};
}
