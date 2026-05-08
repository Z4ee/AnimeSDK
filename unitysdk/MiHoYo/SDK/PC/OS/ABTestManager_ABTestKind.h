#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int ABTestManager_ABTestKind_TypeDefinitionIndex = 19333;

	enum class ABTestManager_ABTestKind : ::System::Int32
	{
		Unknown = 0,
		HoYoPass = 1,
	};
}
