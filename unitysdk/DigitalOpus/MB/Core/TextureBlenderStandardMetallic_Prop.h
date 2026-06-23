#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderStandardMetallic_Prop_TypeDefinitionIndex = 90585;

	enum class TextureBlenderStandardMetallic_Prop : ::System::Int32
	{
		doColor = 0,
		doMetallic = 1,
		doEmission = 2,
		doBump = 3,
		doNone = 4,
	};
}
