#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace System { class Exception; }

namespace R3
{
	inline static constexpr unsigned int WrappedObserver_1_TypeDefinitionIndex = 35250;

	template <typename T>
	class WrappedObserver_1 : public ::R3::Observer_1<T>
	{
	public:
		::R3::Observer_1<T>* _observer_P; // 0x0
	};
}
