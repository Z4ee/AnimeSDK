#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PCSuperResolutionType_TypeDefinitionIndex = 49292;

	enum class PCSuperResolutionType : ::System::Int32
	{
		FSR = 2,
		DLSS = 1,
		None = 0,
	};
}
