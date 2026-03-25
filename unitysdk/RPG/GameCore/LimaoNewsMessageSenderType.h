#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsMessageSenderType_TypeDefinitionIndex = 12756;

	enum class LimaoNewsMessageSenderType : ::System::Int32
	{
		None = 0,
		Limao = 1,
		PlayerOption = 2,
		PlayerAuto = 3,
		System = 4,
	};
}
