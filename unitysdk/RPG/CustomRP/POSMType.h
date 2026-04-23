#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int POSMType_TypeDefinitionIndex = 35065;

	enum class POSMType : ::System::Int32
	{
		None = -1,
		PointOrtho = 0,
		Direction = 1,
		PointPerspective = 2,
	};
}
