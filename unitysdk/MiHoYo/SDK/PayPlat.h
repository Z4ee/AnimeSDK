#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PayPlat_TypeDefinitionIndex = 18964;

	enum class PayPlat : ::System::Int32
	{
		ALIPAY = 0,
		WEIXIN = 1,
	};
}
