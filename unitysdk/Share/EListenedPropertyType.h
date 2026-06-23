#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EListenedPropertyType_TypeDefinitionIndex = 17951;

	enum class EListenedPropertyType : ::System::Int16
	{
		All = 1,
		SceneProperty = 3,
		Property = 2,
		None = 0,
	};
}
