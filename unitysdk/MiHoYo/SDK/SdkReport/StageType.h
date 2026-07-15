#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::SdkReport
{
	inline static constexpr unsigned int StageType_TypeDefinitionIndex = 44857;

	enum class StageType : ::System::Int32
	{
		Unknown = 0,
		Down = 1,
		Up = 2,
		InBrowser = 3,
		ToScreen = 4,
		GameFrame = 5,
	};
}
