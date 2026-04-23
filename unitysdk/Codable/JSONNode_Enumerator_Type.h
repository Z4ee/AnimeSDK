#pragma once
#include "unitysdk/unitysdk.h"

namespace Codable
{
	inline static constexpr unsigned int JSONNode_Enumerator_Type_TypeDefinitionIndex = 42672;

	enum class JSONNode_Enumerator_Type : ::System::Int32
	{
		None = 0,
		Array = 1,
		Object = 2,
	};
}
