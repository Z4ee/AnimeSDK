#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DownsampleType_TypeDefinitionIndex = 29161;

	enum class DownsampleType : ::System::Int32
	{
		_2xBilinear = 0,
		_Fullres = 1,
		_4xBox = 2,
		_4xBilinear = 3,
	};
}
