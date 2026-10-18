#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace System { class Exception; }

namespace R3
{
	inline static constexpr unsigned int Take_1__Take_TypeDefinitionIndex = 35957;

	template <typename T>
	class Take_1__Take : public ::R3::Observer_1<T>
	{
	public:
		::R3::Observer_1<T>* _observer_P; // 0x0
		::System::Int32 remaining; // 0x0
	};
}
