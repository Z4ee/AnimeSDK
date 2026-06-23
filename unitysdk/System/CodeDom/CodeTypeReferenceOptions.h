#pragma once
#include "unitysdk/unitysdk.h"

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeReferenceOptions_TypeDefinitionIndex = 4053;

	enum class CodeTypeReferenceOptions : ::System::Int32
	{
		GenericTypeParameter = 2,
		GlobalReference = 1,
	};
}
