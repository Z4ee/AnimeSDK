#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleTalkStyleType_TypeDefinitionIndex = 24259;

	enum class SimpleTalkStyleType : ::System::Int32
	{
		Default = 0,
		Communication = 1,
		ToTheMoon = 2,
	};
}
