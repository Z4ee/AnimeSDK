#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CNPayTradeType_TypeDefinitionIndex = 8058;

	enum class CNPayTradeType : ::System::Int32
	{
		Default = 0,
		IOS = 1,
		Android = 2,
		PcCashier = 3,
		MixedQRCode = 4,
		H5 = 5,
		WechatWap = 6,
	};
}
