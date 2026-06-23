#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitAnimDirectionType_TypeDefinitionIndex = 67389;

	enum class HitAnimDirectionType : ::System::Int32
	{
		HitDown = 1,
		HitRight = 3,
		HitLeft = 2,
		HitUp = 0,
	};
}
