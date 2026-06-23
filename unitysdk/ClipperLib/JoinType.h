#pragma once
#include "unitysdk/unitysdk.h"

namespace ClipperLib
{
	inline static constexpr unsigned int JoinType_TypeDefinitionIndex = 32776;

	enum class JoinType : ::System::Int32
	{
		jtSquare = 0,
		jtRound = 1,
		jtMiter = 2,
	};
}
