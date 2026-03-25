#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransformComponent_ScaleSource_TypeDefinitionIndex = 46529;

	enum class TransformComponent_ScaleSource : ::System::Int32
	{
		Self = 0,
		Attach = 1,
		Multiply = 2,
	};
}
