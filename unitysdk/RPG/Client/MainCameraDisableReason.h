#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MainCameraDisableReason_TypeDefinitionIndex = 65073;

	enum class MainCameraDisableReason : ::System::Int32
	{
		ScreenTransfer = 0,
		Video = 1,
	};
}
