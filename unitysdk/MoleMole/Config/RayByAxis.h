#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RayByAxis_TypeDefinitionIndex = 53465;

	enum class RayByAxis : ::System::Int32
	{
		LOCAL_Z = 2,
		LOCAL_Y = 1,
		LOCAL_X = 0,
	};
}
