#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RayByAxis_TypeDefinitionIndex = 75650;

	enum class RayByAxis : ::System::Int32
	{
		LOCAL_Z = 2,
		LOCAL_X = 0,
		LOCAL_Y = 1,
	};
}
