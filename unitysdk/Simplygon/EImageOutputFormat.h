#pragma once
#include "unitysdk/unitysdk.h"

namespace Simplygon
{
	inline static constexpr unsigned int EImageOutputFormat_TypeDefinitionIndex = 29544;

	enum class EImageOutputFormat : ::System::Int32
	{
		BMP = 0,
		DDS = 1,
		JPEG = 2,
		PNG = 3,
		TGA = 4,
		TIFF = 5,
		EXR = 8,
	};
}
