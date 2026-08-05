#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectMetaFlags_TypeDefinitionIndex = 82794;

	enum class EViewObjectMetaFlags : ::System::Int32
	{
		None = 0,
		IsGroup = 2,
		IsMember = 1,
		HasEntity = 4,
	};
}
