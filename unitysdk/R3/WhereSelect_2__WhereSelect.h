#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace R3 { template <typename T> class Observer_1; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace R3
{
	inline static constexpr unsigned int WhereSelect_2__WhereSelect_TypeDefinitionIndex = 35268;

	template <typename T, typename TResult>
	class WhereSelect_2__WhereSelect : public ::R3::Observer_1<T>
	{
	public:
		::R3::Observer_1<TResult>* _observer_P; // 0x0
		::System::Func_2<T, TResult>* _selector_P; // 0x0
		::System::Func_2<T, ::System::Boolean>* _predicate_P; // 0x0
	};
}
