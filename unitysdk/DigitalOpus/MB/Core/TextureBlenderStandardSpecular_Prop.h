#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderStandardSpecular_Prop_TypeDefinitionIndex = 94522;

	enum class TextureBlenderStandardSpecular_Prop : ::System::Int32
	{
		doColor = 0,
		doSpecular = 1,
		doEmission = 2,
		doBump = 3,
		doNone = 4,
	};
}
