#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int JunctionType_TypeDefinitionIndex = 47103;

	enum class JunctionType : ::System::Int32
	{
		junction = 0,
		turn = 1,
		loop_anchor = 2,
	};
}
