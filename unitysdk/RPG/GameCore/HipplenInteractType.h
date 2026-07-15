#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenInteractType_TypeDefinitionIndex = 11212;

	enum class HipplenInteractType : ::System::Int32
	{
		Caress = 0,
		Bathe = 1,
		Feeding = 2,
		BallFetch = 3,
	};
}
