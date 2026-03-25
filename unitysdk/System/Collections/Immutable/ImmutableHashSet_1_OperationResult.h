#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1_OperationResult_TypeDefinitionIndex = 8914;

	enum class ImmutableHashSet_1_OperationResult : ::System::Int32
	{
		SizeChanged = 0,
		NoChangeRequired = 1,
	};
}
