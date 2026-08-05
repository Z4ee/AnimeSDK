#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EListenedPropertyType_TypeDefinitionIndex = 13363;

	enum class EListenedPropertyType : ::System::Int16
	{
		All = 1,
		None = 0,
		SceneProperty = 3,
		Property = 2,
	};
}
