#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventGraphOwnerType_TypeDefinitionIndex = 17070;

	enum class EEventGraphOwnerType : ::System::Int16
	{
		Scene = 0,
		Hollow = 3,
		Section = 1,
		SceneUnit = 2,
	};
}
