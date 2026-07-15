#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int ThirdpartyMethod_TypeDefinitionIndex = 8427;

	enum class ThirdpartyMethod : ::System::Int32
	{
		Unknown = -1,
		Apple = 0,
		Google = 1,
		Facebook = 2,
		Twitter = 3,
	};
}
