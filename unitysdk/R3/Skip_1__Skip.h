#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace System { class Exception; }

namespace R3
{
	inline static constexpr unsigned int Skip_1__Skip_TypeDefinitionIndex = 35270;

	template <typename T>
	class Skip_1__Skip : public ::R3::Observer_1<T>
	{
	public:
		::R3::Observer_1<T>* _observer_P; // 0x0
		::System::Int32 remaining; // 0x0
	};
}
