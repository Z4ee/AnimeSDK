#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int UltiDraw_PROGRAM_TypeDefinitionIndex = 8001;

	enum class UltiDraw_PROGRAM : ::System::Int32
	{
		LINES = 1,
		QUADS = 4,
		NONE = 0,
		TRIANGLE_STRIP = 3,
		TRIANGLES = 2,
	};
}
