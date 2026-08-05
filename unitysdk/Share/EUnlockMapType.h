#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUnlockMapType_TypeDefinitionIndex = 17556;

	enum class EUnlockMapType : ::System::Int16
	{
		End = 2,
		Dialog = 4,
		Begin = 1,
		None = 0,
		Fight = 3,
	};
}
