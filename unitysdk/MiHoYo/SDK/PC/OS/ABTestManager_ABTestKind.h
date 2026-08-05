#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int ABTestManager_ABTestKind_TypeDefinitionIndex = 20598;

	enum class ABTestManager_ABTestKind : ::System::Int32
	{
		Unknown = 0,
		HoYoPass = 1,
		Compliance = 2,
	};
}
