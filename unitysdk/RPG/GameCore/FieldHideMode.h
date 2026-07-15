#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FieldHideMode_TypeDefinitionIndex = 15772;

	enum class FieldHideMode : ::System::Int32
	{
		All = 9,
		Sphere = 8,
		NoHide = 0,
	};
}
