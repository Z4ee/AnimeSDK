#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MaskType_TypeDefinitionIndex = 36272;

	enum class MaskType : ::System::Int32
	{
		None = 0,
		Circle = 1,
		Direction = 2,
	};
}
