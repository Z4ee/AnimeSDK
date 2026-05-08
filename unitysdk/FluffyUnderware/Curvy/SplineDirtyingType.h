#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int SplineDirtyingType_TypeDefinitionIndex = 37238;

	enum class SplineDirtyingType : ::System::Int32
	{
		OrientationOnly = 0,
		Everything = 1,
	};
}
