#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Uploader
{
	inline static constexpr unsigned int Provider_TypeDefinitionIndex = 44888;

	enum class Provider : ::System::Int32
	{
		Aliyun = 0,
		Amazon = 1,
	};
}
