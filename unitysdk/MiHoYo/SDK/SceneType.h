#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SceneType_TypeDefinitionIndex = 8035;

	enum class SceneType : ::System::Int32
	{
		S_NORMAL = 0,
		S_TEMPLE = 1,
		S_USER = 2,
		S_ACCOUNT = 3,
	};
}
