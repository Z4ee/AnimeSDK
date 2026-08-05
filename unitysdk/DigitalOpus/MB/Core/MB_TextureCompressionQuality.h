#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_TextureCompressionQuality_TypeDefinitionIndex = 94537;

	enum class MB_TextureCompressionQuality : ::System::Int32
	{
		fast = 0,
		normal = 50,
		best = 100,
	};
}
