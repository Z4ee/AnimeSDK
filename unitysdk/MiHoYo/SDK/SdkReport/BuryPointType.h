#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::SdkReport
{
	inline static constexpr unsigned int BuryPointType_TypeDefinitionIndex = 44858;

	enum class BuryPointType : ::System::Int32
	{
		OnUpdate = 0,
		OnGUI = 1,
		OnBrowserReport = 2,
	};
}
