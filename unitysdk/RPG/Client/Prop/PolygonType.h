#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PolygonType_TypeDefinitionIndex = 73244;

	enum class PolygonType : ::System::Int32
	{
		Triangle = 0,
		Quad = 1,
	};
}
