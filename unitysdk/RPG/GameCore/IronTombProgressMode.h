#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IronTombProgressMode_TypeDefinitionIndex = 21710;

	enum class IronTombProgressMode : ::System::Int32
	{
		Normal = 0,
		LOVE = 1,
		QTE = 2,
	};
}
