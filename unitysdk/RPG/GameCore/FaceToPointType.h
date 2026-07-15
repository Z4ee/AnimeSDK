#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FaceToPointType_TypeDefinitionIndex = 23653;

	enum class FaceToPointType : ::System::Int32
	{
		Anchor = 0,
		Waypath = 1,
		ChaseBailu = 2,
	};
}
