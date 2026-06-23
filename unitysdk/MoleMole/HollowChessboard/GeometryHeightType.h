#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int GeometryHeightType_TypeDefinitionIndex = 84364;

	enum class GeometryHeightType : ::System::Int32
	{
		HalfTop = 2,
		None = 0,
		Back = 1,
		NormalTop = 3,
		SpecialTop = 4,
	};
}
