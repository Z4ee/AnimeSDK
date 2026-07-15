#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Base::GoodsPlatform
{
	inline static constexpr unsigned int GoodsPlatformManager_WorkMode_TypeDefinitionIndex = 8515;

	enum class GoodsPlatformManager_WorkMode : ::System::Int32
	{
		SimpleMode = 0,
		SafeMode = 1,
		FallbackMode = 2,
	};
}
