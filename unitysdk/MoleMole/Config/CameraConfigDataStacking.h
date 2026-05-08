#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraConfigDataStacking_TypeDefinitionIndex = 54435;

	enum class CameraConfigDataStacking : ::System::Int32
	{
		Unique_UseZeroValue = 1,
		Unique_UseCurValue = 0,
		Mutiple = 2,
	};
}
