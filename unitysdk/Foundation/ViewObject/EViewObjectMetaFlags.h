#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectMetaFlags_TypeDefinitionIndex = 64818;

	enum class EViewObjectMetaFlags : ::System::Int32
	{
		IsGroup = 2,
		IsMember = 1,
		None = 0,
		HasEntity = 4,
	};
}
