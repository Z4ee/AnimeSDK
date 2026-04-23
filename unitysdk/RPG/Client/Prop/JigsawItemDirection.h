#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawItemDirection_TypeDefinitionIndex = 72153;

	enum class JigsawItemDirection : ::System::Int32
	{
		Up = 0,
		Right = 1,
		Down = 2,
		Left = 3,
	};
}
