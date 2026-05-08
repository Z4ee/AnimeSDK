#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T> class IPeriodicPolicy_1; }

namespace Foundation
{
	inline static constexpr unsigned int Periodic_1_TypeDefinitionIndex = 8852;

	template <typename T>
	struct Periodic_1
	{
		T _value; // 0x0
		T _period; // 0x0
		T _min; // 0x0
		::Foundation::IPeriodicPolicy_1<T>* _policy; // 0x0
	};
}
