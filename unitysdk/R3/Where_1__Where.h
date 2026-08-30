#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace R3
{
	inline static constexpr unsigned int Where_1__Where_TypeDefinitionIndex = 35275;

	template <typename T>
	class Where_1__Where : public ::R3::Observer_1<T>
	{
	public:
		::R3::Observer_1<T>* _observer_P; // 0x0
		::System::Func_2<T, ::System::Boolean>* _predicate_P; // 0x0
	};
}
