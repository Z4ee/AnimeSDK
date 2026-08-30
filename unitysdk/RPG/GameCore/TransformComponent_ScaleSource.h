#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransformComponent_ScaleSource_TypeDefinitionIndex = 57877;

	enum class TransformComponent_ScaleSource : ::System::Int32
	{
		Self = 0,
		Attach = 1,
		Multiply = 2,
	};
}
