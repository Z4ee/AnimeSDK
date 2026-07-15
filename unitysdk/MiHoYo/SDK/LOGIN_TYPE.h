#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LOGIN_TYPE_TypeDefinitionIndex = 8043;

	enum class LOGIN_TYPE : ::System::Int32
	{
		PHONE_MESSAGE = 0,
		ACCOUNT_PASSWORD = 1,
		GUEST = 2,
		QRCODE = 3,
		FACEBOOK = 4,
		TWITTER = 5,
		BBS = 6,
		SONY = 7,
		TapTap = 8,
		BiliBili = 9,
		WeGame = 10,
		Steam = 11,
		GOOGLE = 12,
		APPLE = 13,
		GAME_QRCODE = 14,
		CX = 15,
		AuthTicket = 16,
		HUAWEI = 17,
	};
}
