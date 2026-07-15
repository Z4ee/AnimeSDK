#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_SetMode_TypeDefinitionIndex = 38060;

	enum class Player_SetMode : ::System::Int32
	{
		New = 0,
		Append = 1,
		AppendRepeatedly = 2,
	};
}
