#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AlchemyLogicType_TypeDefinitionIndex = 71700;

	enum class AlchemyLogicType : ::System::Int32
	{
		None = 0,
		Color1 = 1,
		Color2 = 2,
		ColorMix = 3,
	};
}
