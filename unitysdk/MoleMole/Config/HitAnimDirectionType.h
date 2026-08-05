#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitAnimDirectionType_TypeDefinitionIndex = 89346;

	enum class HitAnimDirectionType : ::System::Int32
	{
		HitUp = 0,
		HitDown = 1,
		HitLeft = 2,
		HitRight = 3,
	};
}
