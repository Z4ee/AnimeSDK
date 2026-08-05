#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTMessageType_TypeDefinitionIndex = 28955;

	enum class DTMessageType : ::System::Int32
	{
		None = 0,
		Info = 1,
		Warning = 2,
		Error = 3,
	};
}
