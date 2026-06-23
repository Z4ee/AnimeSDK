#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventGraphOwnerType_TypeDefinitionIndex = 8833;

	enum class EEventGraphOwnerType : ::System::Int16
	{
		Hollow = 3,
		SceneUnit = 2,
		Scene = 0,
		Section = 1,
	};
}
