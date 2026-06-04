#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TSCRenderStatePositive_TypeDefinitionIndex = 65651;

	enum class TSCRenderStatePositive : ::System::Byte
	{
		TSC = 0x0,
		Hide = 0x1,
		Show = 0x2,
	};
}
