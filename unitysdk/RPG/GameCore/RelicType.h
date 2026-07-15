#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicType_TypeDefinitionIndex = 14043;

	enum class RelicType : ::System::Int32
	{
		Unknow = 0,
		HEAD = 1,
		HAND = 2,
		BODY = 3,
		FOOT = 4,
		NECK = 5,
		OBJECT = 6,
	};
}
