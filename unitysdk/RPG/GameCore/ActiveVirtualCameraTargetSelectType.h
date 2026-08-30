#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveVirtualCameraTargetSelectType_TypeDefinitionIndex = 24256;

	enum class ActiveVirtualCameraTargetSelectType : ::System::Int32
	{
		UniqueName = 0,
		Anchor = 1,
		Target = 2,
	};
}
