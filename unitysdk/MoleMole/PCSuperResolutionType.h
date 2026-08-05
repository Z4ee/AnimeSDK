#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PCSuperResolutionType_TypeDefinitionIndex = 81021;

	enum class PCSuperResolutionType : ::System::Int32
	{
		None = 0,
		DLSS = 1,
		FSR = 2,
	};
}
