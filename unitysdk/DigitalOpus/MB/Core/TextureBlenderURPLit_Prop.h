#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderURPLit_Prop_TypeDefinitionIndex = 90591;

	enum class TextureBlenderURPLit_Prop : ::System::Int32
	{
		doColor = 0,
		doSpecular = 1,
		doMetallic = 2,
		doEmission = 3,
		doBump = 4,
		doNone = 5,
	};
}
