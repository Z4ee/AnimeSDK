#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicComboType_TypeDefinitionIndex = 18503;

	enum class MusicComboType : ::System::Int32
	{
		Perfect = 0,
		Good = 1,
		Nice = 2,
		Super = 3,
		Fantastic = 4,
	};
}
