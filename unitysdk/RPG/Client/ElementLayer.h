#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ElementLayer_TypeDefinitionIndex = 67647;

	enum class ElementLayer : ::System::Int32
	{
		None = 0,
		Element0 = 1,
		Element1 = 2,
		Element2 = 4,
		Element3 = 8,
		Element4 = 16,
		Element5 = 32,
		Element6 = 64,
		Element7 = 128,
		Element8 = 256,
	};
}
