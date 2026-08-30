#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardAvatarTextMode_TypeDefinitionIndex = 79446;

	enum class CaseBoardAvatarTextMode : ::System::Int32
	{
		Auto = 0,
		Original = 1,
		Updated = 2,
	};
}
