#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VCMask_TypeDefinitionIndex = 36143;

	enum class VCMask : ::System::Int32
	{
		VC1 = 1,
		VC2 = 2,
		VC3 = 4,
		VC4 = 8,
		VCBackground = 128,
		VCMaskAll = 255,
	};
}
