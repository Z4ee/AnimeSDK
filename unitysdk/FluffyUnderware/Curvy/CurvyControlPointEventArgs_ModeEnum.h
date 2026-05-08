#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyControlPointEventArgs_ModeEnum_TypeDefinitionIndex = 37212;

	enum class CurvyControlPointEventArgs_ModeEnum : ::System::Int32
	{
		None = 0,
		AddBefore = 1,
		AddAfter = 2,
		Delete = 3,
	};
}
