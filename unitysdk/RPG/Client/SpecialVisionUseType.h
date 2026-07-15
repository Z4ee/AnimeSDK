#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SpecialVisionUseType_TypeDefinitionIndex = 58207;

	enum class SpecialVisionUseType : ::System::UInt32
	{
		Times = 0x0,
		CD = 0x1,
	};
}
