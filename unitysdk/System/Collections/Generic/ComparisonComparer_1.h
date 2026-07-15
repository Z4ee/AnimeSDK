#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Comparer_1.h"

namespace System { template <typename T> class Comparison_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ComparisonComparer_1_TypeDefinitionIndex = 1541;

	template <typename T>
	class ComparisonComparer_1 : public ::System::Collections::Generic::Comparer_1<T>
	{
	public:
		::System::Comparison_1<T>* _comparison; // 0x0
	};
}
