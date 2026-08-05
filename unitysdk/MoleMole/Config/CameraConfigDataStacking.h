#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraConfigDataStacking_TypeDefinitionIndex = 77977;

	enum class CameraConfigDataStacking : ::System::Int32
	{
		Unique_UseCurValue = 0,
		Unique_UseZeroValue = 1,
		Mutiple = 2,
	};
}
