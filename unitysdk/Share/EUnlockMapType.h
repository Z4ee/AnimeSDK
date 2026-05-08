#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUnlockMapType_TypeDefinitionIndex = 14976;

	enum class EUnlockMapType : ::System::Int16
	{
		Fight = 3,
		Dialog = 4,
		End = 2,
		Begin = 1,
		None = 0,
	};
}
