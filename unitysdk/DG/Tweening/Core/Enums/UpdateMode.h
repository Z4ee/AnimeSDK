#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening::Core::Enums
{
	inline static constexpr unsigned int UpdateMode_TypeDefinitionIndex = 28604;

	enum class UpdateMode : ::System::Int32
	{
		Update = 0,
		Goto = 1,
		IgnoreOnUpdate = 2,
	};
}
