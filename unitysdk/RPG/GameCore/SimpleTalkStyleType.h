#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleTalkStyleType_TypeDefinitionIndex = 23674;

	enum class SimpleTalkStyleType : ::System::Int32
	{
		Default = 0,
		Communication = 1,
		ToTheMoon = 2,
	};
}
