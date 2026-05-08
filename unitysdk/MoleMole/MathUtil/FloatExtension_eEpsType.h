#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MathUtil
{
	inline static constexpr unsigned int FloatExtension_eEpsType_TypeDefinitionIndex = 42509;

	enum class FloatExtension_eEpsType : ::System::Int32
	{
		Normal = 1,
		Strong = 2,
		Mild = 0,
	};
}
