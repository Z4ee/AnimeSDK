#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBtnType_TypeDefinitionIndex = 17778;

	enum class FiveDimBtnType : ::System::Int32
	{
		Jump = 0,
		Skill = 1,
		Flute = 2,
	};
}
