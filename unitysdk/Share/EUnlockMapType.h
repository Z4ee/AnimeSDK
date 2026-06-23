#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUnlockMapType_TypeDefinitionIndex = 13975;

	enum class EUnlockMapType : ::System::Int16
	{
		Begin = 1,
		Dialog = 4,
		None = 0,
		End = 2,
		Fight = 3,
	};
}
