#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MathUtil
{
	inline static constexpr unsigned int FloatExtension_eEpsType_TypeDefinitionIndex = 63684;

	enum class FloatExtension_eEpsType : ::System::Int32
	{
		Mild = 0,
		Normal = 1,
		Strong = 2,
	};
}
