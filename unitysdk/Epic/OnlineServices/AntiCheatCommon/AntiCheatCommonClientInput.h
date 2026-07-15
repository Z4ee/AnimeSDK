#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonClientInput_TypeDefinitionIndex = 44124;

	enum class AntiCheatCommonClientInput : ::System::Int32
	{
		Unknown = 0,
		MouseKeyboard = 1,
		Gamepad = 2,
		TouchInput = 3,
	};
}
