#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhoneMessagePlayMode_TypeDefinitionIndex = 20110;

	enum class PhoneMessagePlayMode : ::System::Int32
	{
		Default = 0,
		FreeMode = 1,
	};
}
