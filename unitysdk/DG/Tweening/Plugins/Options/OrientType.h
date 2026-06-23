#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening::Plugins::Options
{
	inline static constexpr unsigned int OrientType_TypeDefinitionIndex = 27954;

	enum class OrientType : ::System::Int32
	{
		None = 0,
		ToPath = 1,
		LookAtTransform = 2,
		LookAtPosition = 3,
	};
}
