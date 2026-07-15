#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriMana
{
	inline static constexpr unsigned int AlphaType_TypeDefinitionIndex = 38050;

	enum class AlphaType : ::System::Int32
	{
		CompoOpaq = 0,
		CompoAlphaFull = 1,
		CompoAlpha3Step = 2,
		CompoAlpha32Bit = 3,
	};
}
