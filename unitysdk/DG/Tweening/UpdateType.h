#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening
{
	inline static constexpr unsigned int UpdateType_TypeDefinitionIndex = 28539;

	enum class UpdateType : ::System::Int32
	{
		Normal = 0,
		Late = 1,
		Fixed = 2,
	};
}
