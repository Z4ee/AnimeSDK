#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int TexType_TypeDefinitionIndex = 36342;

	enum class TexType : ::System::Int32
	{
		PNG = 0,
		TGA = 1,
		JPG = 2,
	};
}
