#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ClipPlaneType_TypeDefinitionIndex = 35096;

	enum class ClipPlaneType : ::System::Int32
	{
		ClipPlane = 0,
		None = 1,
		GeometryShadow = 2,
	};
}
