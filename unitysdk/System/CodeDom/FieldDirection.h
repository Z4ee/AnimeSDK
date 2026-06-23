#pragma once
#include "unitysdk/unitysdk.h"

namespace System::CodeDom
{
	inline static constexpr unsigned int FieldDirection_TypeDefinitionIndex = 4068;

	enum class FieldDirection : ::System::Int32
	{
		In = 0,
		Out = 1,
		Ref = 2,
	};
}
