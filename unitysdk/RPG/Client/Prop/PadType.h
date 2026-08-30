#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadType_TypeDefinitionIndex = 78281;

	enum class PadType : ::System::Int32
	{
		None = 0,
		Start = 1,
		End = 2,
		Normal = 10,
		Transport = 11,
		Obstacle = 101,
		FailAnchor = 102,
		Bridge = 103,
	};
}
