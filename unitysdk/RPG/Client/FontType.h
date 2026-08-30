#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FontType_TypeDefinitionIndex = 72490;

	enum class FontType : ::System::Int32
	{
		Default = 0,
		RPG_CN = 1,
		RPG_JP = 2,
		RPG_TH = 3,
		RPG_TR = 4,
		RPG_VI = 5,
	};
}
