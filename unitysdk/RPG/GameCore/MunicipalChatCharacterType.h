#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatCharacterType_TypeDefinitionIndex = 16721;

	enum class MunicipalChatCharacterType : ::System::Int32
	{
		NormalNpc = 0,
		AssemNpc = 1,
		Prop = 2,
	};
}
