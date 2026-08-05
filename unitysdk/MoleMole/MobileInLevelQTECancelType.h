#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileInLevelQTECancelType_TypeDefinitionIndex = 88418;

	enum class MobileInLevelQTECancelType : ::System::Int32
	{
		DoubleClick = 2,
		None = 0,
		NoCancel = 1,
		SingleClick = 3,
	};
}
