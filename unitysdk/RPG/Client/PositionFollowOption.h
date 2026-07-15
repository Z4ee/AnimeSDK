#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PositionFollowOption_TypeDefinitionIndex = 66921;

	enum class PositionFollowOption : ::System::Int32
	{
		NotFollow = 0,
		AttachPointPosition = 1,
		MainCamera = 2,
		EntityPosition = 3,
		UICamera = 4,
		PrefabOriginValue = 5,
		UI3DCamera = 6,
		LocalPlayer = 7,
		CasterAttachPoint = 8,
		CasterPosition = 9,
		LevelAreaRootPosition = 10,
	};
}
