#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int GeometryHeightType_TypeDefinitionIndex = 82892;

	enum class GeometryHeightType : ::System::Int32
	{
		Back = 1,
		HalfTop = 2,
		SpecialTop = 4,
		None = 0,
		NormalTop = 3,
	};
}
