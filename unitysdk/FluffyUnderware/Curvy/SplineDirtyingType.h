#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int SplineDirtyingType_TypeDefinitionIndex = 39579;

	enum class SplineDirtyingType : ::System::Int32
	{
		Everything = 1,
		OrientationOnly = 0,
	};
}
