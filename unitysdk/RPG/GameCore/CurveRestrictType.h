#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CurveRestrictType_TypeDefinitionIndex = 43382;

	enum class CurveRestrictType : ::System::Int32
	{
		None = 0,
		X = 1,
		Y = 2,
	};
}
