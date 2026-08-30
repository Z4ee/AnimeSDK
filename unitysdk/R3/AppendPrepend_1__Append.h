#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace System { class Exception; }

namespace R3
{
	inline static constexpr unsigned int AppendPrepend_1__Append_TypeDefinitionIndex = 35252;

	template <typename T>
	class AppendPrepend_1__Append : public ::R3::Observer_1<T>
	{
	public:
		::R3::Observer_1<T>* _observer_P; // 0x0
		T _value_P; // 0x0
	};
}
