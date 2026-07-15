#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CNPayPlatType_TypeDefinitionIndex = 8059;

	enum class CNPayPlatType : ::System::Int32
	{
		none = 0,
		wechatpay = 1,
		alipay = 2,
		pcredit = 3,
		unionpay = 4,
	};
}
