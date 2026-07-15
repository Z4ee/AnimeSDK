#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TSCRenderStateNegative_TypeDefinitionIndex = 67069;

	enum class TSCRenderStateNegative : ::System::Byte
	{
		TSC = 0x0,
		Show = 0x1,
		Hide = 0x2,
	};
}
