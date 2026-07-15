#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialPropertyType_TypeDefinitionIndex = 10116;

	enum class MaterialPropertyType : ::System::Int32
	{
		Float = 0,
		Vector3 = 1,
		Vector4 = 2,
		Color = 3,
	};
}
