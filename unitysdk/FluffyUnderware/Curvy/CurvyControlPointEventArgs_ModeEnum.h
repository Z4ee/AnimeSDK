#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyControlPointEventArgs_ModeEnum_TypeDefinitionIndex = 39513;

	enum class CurvyControlPointEventArgs_ModeEnum : ::System::Int32
	{
		None = 0,
		Delete = 3,
		AddAfter = 2,
		AddBefore = 1,
	};
}
