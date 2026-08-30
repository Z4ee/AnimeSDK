#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace R3
{
	inline static constexpr unsigned int DistinctUntilChanged_1__DistinctUntilChanged_TypeDefinitionIndex = 35260;

	template <typename T>
	class DistinctUntilChanged_1__DistinctUntilChanged : public ::R3::Observer_1<T>
	{
	public:
		::R3::Observer_1<T>* observer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* comparer; // 0x0
		T lastValue; // 0x0
		::System::Boolean hasValue; // 0x0
	};
}
