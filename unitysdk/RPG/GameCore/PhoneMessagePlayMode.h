#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhoneMessagePlayMode_TypeDefinitionIndex = 23727;

	enum class PhoneMessagePlayMode : ::System::Int32
	{
		Default = 0,
		FreeMode = 1,
	};
}
