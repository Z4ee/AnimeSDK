#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int DetailType_TypeDefinitionIndex = 79471;

	enum class DetailType : ::System::Int32
	{
		Team = 0,
		Master = 1,
		Servant = 2,
	};
}
