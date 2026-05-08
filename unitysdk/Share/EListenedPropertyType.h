#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EListenedPropertyType_TypeDefinitionIndex = 11109;

	enum class EListenedPropertyType : ::System::Int16
	{
		SceneProperty = 3,
		Property = 2,
		None = 0,
		All = 1,
	};
}
