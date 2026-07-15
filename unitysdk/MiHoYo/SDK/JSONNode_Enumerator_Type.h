#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONNode_Enumerator_Type_TypeDefinitionIndex = 8078;

	enum class JSONNode_Enumerator_Type : ::System::Int32
	{
		None = 0,
		Array = 1,
		Object = 2,
	};
}
