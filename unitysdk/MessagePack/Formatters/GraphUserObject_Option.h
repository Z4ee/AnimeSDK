#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GraphUserObject_Option_TypeDefinitionIndex = 26853;

	enum class GraphUserObject_Option : ::System::Int32
	{
		Opt_Using_Auto_Gen_Formatter_In_Serialize = 2,
		Opt_Default = 1,
	};
}
