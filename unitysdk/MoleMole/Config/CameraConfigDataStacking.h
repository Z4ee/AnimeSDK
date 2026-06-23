#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraConfigDataStacking_TypeDefinitionIndex = 49777;

	enum class CameraConfigDataStacking : ::System::Int32
	{
		Unique_UseCurValue = 0,
		Mutiple = 2,
		Unique_UseZeroValue = 1,
	};
}
