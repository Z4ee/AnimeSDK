#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_OperationResult_TypeDefinitionIndex = 9139;

	enum class ImmutableDictionary_2_OperationResult : ::System::Int32
	{
		AppliedWithoutSizeChange = 0,
		SizeChanged = 1,
		NoChangeRequired = 2,
	};
}
