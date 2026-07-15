#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactPam_Mode_TypeDefinitionIndex = 60430;

	enum class ChatContactPam_Mode : ::System::Int32
	{
		Helper = 0,
		Questioner = 1,
	};
}
