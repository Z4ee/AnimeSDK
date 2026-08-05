#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int GeometryHeightType_TypeDefinitionIndex = 75969;

	enum class GeometryHeightType : ::System::Int32
	{
		SpecialTop = 4,
		NormalTop = 3,
		None = 0,
		HalfTop = 2,
		Back = 1,
	};
}
