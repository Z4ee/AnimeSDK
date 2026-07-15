#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyType_TypeDefinitionIndex = 13429;

	enum class LimaoNewsOfficeSurveyType : ::System::Int32
	{
		None = 0,
		Main = 1,
		Branch = 2,
		Interact = 3,
		Talked = 4,
	};
}
