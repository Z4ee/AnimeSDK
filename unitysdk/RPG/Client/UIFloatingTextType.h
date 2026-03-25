#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIFloatingTextType_TypeDefinitionIndex = 59276;

	enum class UIFloatingTextType : ::System::Int32
	{
		None = 0,
		Default = 1,
		Critical = 2,
		Shield = 4,
		Break = 8,
		BuffStatus = 16,
		Element = 32,
		Pursued = 64,
		Dot = 128,
		TrueDamage = 256,
		Luck = 1024,
		LuckCritical = 1026,
		Joy = 2048,
		JoyCritical = 2050,
		JoyLuck = 3072,
		Resistance = 4096,
	};
}
