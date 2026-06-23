#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MathUtil
{
	inline static constexpr unsigned int FloatExtension_eEpsType_TypeDefinitionIndex = 52497;

	enum class FloatExtension_eEpsType : ::System::Int32
	{
		Mild = 0,
		Strong = 2,
		Normal = 1,
	};
}
