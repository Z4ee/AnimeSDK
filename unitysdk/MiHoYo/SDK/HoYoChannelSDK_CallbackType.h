#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSDK_CallbackType_TypeDefinitionIndex = 36932;

	enum class HoYoChannelSDK_CallbackType : ::System::Int32
	{
		MicroTxn = 0,
		GameOverlayActivated = 1,
		AuthStatusChanged = 2,
		SocialUpdate = 3,
		InviteReceived = 4,
	};
}
