#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureType_TypeDefinitionIndex = 14841;

	enum class TravelBrochureType : ::System::Int32
	{
		None = 0,
		Intro = 1,
		Main = 2,
		Final = 3,
	};
}
