#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelCallbackType_TypeDefinitionIndex = 19369;

	enum class HoYoChannelCallbackType : ::System::Int32
	{
		MicroTxn = 0,
		GameOverlayActivated = 1,
	};
}
