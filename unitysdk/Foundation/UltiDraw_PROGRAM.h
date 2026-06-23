#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int UltiDraw_PROGRAM_TypeDefinitionIndex = 8293;

	enum class UltiDraw_PROGRAM : ::System::Int32
	{
		LINES = 1,
		TRIANGLES = 2,
		NONE = 0,
		QUADS = 4,
		TRIANGLE_STRIP = 3,
	};
}
