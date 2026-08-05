#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraTargetType_TypeDefinitionIndex = 69488;

	enum class CameraTargetType : ::System::Int32
	{
		GameObject = 0,
		SomePosition = 1,
		SomeDir = 2,
	};
}
