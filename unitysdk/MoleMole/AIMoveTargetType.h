#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AIMoveTargetType_TypeDefinitionIndex = 45229;

	enum class AIMoveTargetType : ::System::Int32
	{
		Self = 3,
		LocalAvatar = 2,
		Camera = 6,
		AnchorTarget = 1,
		SavePoint = 10,
		SelfBornPosition = 7,
		GroupPoint = 8,
		FloorPoint = 9,
		GuideTargetPosition = 4,
		LockTarget = 0,
		Custom = 5,
	};
}
