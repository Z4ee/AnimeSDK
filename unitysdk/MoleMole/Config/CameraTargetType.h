#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraTargetType_TypeDefinitionIndex = 72386;

	enum class CameraTargetType : ::System::Int32
	{
		SomeDir = 2,
		SomePosition = 1,
		GameObject = 0,
	};
}
