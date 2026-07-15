#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_FaceToPositionType_TypeDefinitionIndex = 23600;

	enum class SO_FaceToPositionType : ::System::Int32
	{
		AnchorPoint = 0,
		Entity = 1,
		LocalPlayer = 2,
	};
}
