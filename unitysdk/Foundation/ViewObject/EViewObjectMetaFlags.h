#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectMetaFlags_TypeDefinitionIndex = 54706;

	enum class EViewObjectMetaFlags : ::System::Int32
	{
		IsMember = 1,
		None = 0,
		HasEntity = 4,
		IsGroup = 2,
	};
}
