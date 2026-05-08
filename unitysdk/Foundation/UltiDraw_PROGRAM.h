#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int UltiDraw_PROGRAM_TypeDefinitionIndex = 7698;

	enum class UltiDraw_PROGRAM : ::System::Int32
	{
		TRIANGLE_STRIP = 3,
		TRIANGLES = 2,
		QUADS = 4,
		NONE = 0,
		LINES = 1,
	};
}
