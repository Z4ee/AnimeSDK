#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderHDRPLit_Prop_TypeDefinitionIndex = 94511;

	enum class TextureBlenderHDRPLit_Prop : ::System::Int32
	{
		doColor = 0,
		doMask = 1,
		doSpecular = 2,
		doEmission = 3,
		doNone = 4,
	};
}
