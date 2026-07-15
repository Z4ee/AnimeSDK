#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TSCRendererType_TypeDefinitionIndex = 67075;

	enum class TSCRendererType : ::System::Byte
	{
		None = 0x0,
		Normal = 0x1,
		Expand = 0x2,
		ExpandSP = 0x3,
	};
}
