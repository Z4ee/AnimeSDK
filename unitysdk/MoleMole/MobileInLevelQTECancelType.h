#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileInLevelQTECancelType_TypeDefinitionIndex = 68514;

	enum class MobileInLevelQTECancelType : ::System::Int32
	{
		NoCancel = 1,
		None = 0,
		SingleClick = 3,
		DoubleClick = 2,
	};
}
