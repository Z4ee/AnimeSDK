#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterResourceLoadOption_TypeDefinitionIndex = 15875;

	enum class CharacterResourceLoadOption : ::System::Int32
	{
		DefaultLoad = 0,
		DefaultUnload = 1,
		DynamicLoadOnAction = 2,
	};
}
