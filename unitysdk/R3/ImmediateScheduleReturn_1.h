#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observable_1.h"

namespace R3 { template <typename T> class Observer_1; }
namespace System { class IDisposable; }

namespace R3
{
	inline static constexpr unsigned int ImmediateScheduleReturn_1_TypeDefinitionIndex = 35237;

	template <typename T>
	class ImmediateScheduleReturn_1 : public ::R3::Observable_1<T>
	{
	public:
		T _value_P; // 0x0
	};
}
