#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AIMoveTargetType_TypeDefinitionIndex = 40888;

	enum class AIMoveTargetType : ::System::Int32
	{
		Custom = 5,
		SavePoint = 10,
		Camera = 6,
		LocalAvatar = 2,
		AnchorTarget = 1,
		GuideTargetPosition = 4,
		GroupPoint = 8,
		Self = 3,
		SelfBornPosition = 7,
		LockTarget = 0,
		FloorPoint = 9,
	};
}
