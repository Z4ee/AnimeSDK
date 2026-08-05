#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AIMoveTargetType_TypeDefinitionIndex = 84091;

	enum class AIMoveTargetType : ::System::Int32
	{
		GuideTargetPosition = 4,
		LocalAvatar = 2,
		LockTarget = 0,
		AnchorTarget = 1,
		FloorPoint = 9,
		Custom = 5,
		GroupPoint = 8,
		SelfBornPosition = 7,
		SavePoint = 10,
		Self = 3,
		Camera = 6,
	};
}
