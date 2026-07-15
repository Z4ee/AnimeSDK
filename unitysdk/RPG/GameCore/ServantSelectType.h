#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantSelectType_TypeDefinitionIndex = 17447;

	enum class ServantSelectType : ::System::Int32
	{
		Forbidden = 0,
		Allow = 1,
		AllowWhenSummonerUnselectable = 2,
	};
}
