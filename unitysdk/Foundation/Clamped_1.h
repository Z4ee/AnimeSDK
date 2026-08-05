#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T> class IClampedPolicy_1; }

namespace Foundation
{
	inline static constexpr unsigned int Clamped_1_TypeDefinitionIndex = 8797;

	template <typename T>
	struct Clamped_1
	{
		T _value; // 0x0
		T _min; // 0x0
		T _max; // 0x0
		::Foundation::IClampedPolicy_1<T>* _policy; // 0x0
	};
}
