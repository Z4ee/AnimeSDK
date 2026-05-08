#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaCode_TypeDefinitionIndex = 18442;

	enum class KibanaCode : ::System::Int32
	{
		CodeSuccess = 0,
		CodeNet4xx = -1,
		CodeNet5xx = -2,
		CodeNetOther = -3,
		CodeNetError = -4,
	};
}
