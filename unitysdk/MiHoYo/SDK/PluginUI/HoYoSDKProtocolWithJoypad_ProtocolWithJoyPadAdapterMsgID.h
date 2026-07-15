#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKProtocolWithJoypad_ProtocolWithJoyPadAdapterMsgID_TypeDefinitionIndex = 44993;

	enum class HoYoSDKProtocolWithJoypad_ProtocolWithJoyPadAdapterMsgID : ::System::Int32
	{
		UNKNOWN = -1,
		SET_JOYPAD_ENABLE = 0,
		SET_JOYPAD_TYPE = 1,
		SET_JOYPAD_EXCHANGE = 2,
	};
}
