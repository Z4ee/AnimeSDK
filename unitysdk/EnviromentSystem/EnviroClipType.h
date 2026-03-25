#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroClipType_TypeDefinitionIndex = 40269;

	enum class EnviroClipType : ::System::Int32
	{
		Common = 0,
		Light = 1,
		Fog = 2,
		Sky = 3,
		Weather = 4,
	};
}
