#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossGroupBehavior_LazyLoadUnloadTag_TypeDefinitionIndex = 67059;

	enum class TimeSpaceCrisscrossGroupBehavior_LazyLoadUnloadTag : ::System::Byte
	{
		None = 0x0,
		NeedEnable = 0x1,
		NeedDisable = 0x2,
	};
}
