#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitStrengthType_TypeDefinitionIndex = 45814;

	enum class HitStrengthType : ::System::Int32
	{
		Light = 0,
		Heavy = 1,
	};
}
