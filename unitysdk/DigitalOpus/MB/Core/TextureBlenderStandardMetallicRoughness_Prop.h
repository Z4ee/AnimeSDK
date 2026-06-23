#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderStandardMetallicRoughness_Prop_TypeDefinitionIndex = 90587;

	enum class TextureBlenderStandardMetallicRoughness_Prop : ::System::Int32
	{
		doColor = 0,
		doMetallic = 1,
		doRoughness = 2,
		doEmission = 3,
		doBump = 4,
		doNone = 5,
	};
}
