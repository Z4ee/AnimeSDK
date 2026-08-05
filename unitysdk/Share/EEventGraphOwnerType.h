#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventGraphOwnerType_TypeDefinitionIndex = 16411;

	enum class EEventGraphOwnerType : ::System::Int16
	{
		Scene = 0,
		Section = 1,
		Hollow = 3,
		SceneUnit = 2,
	};
}
