#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

namespace R3 { template <typename T> class Observer_1; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace R3
{
	inline static constexpr unsigned int Select_3__Select_TypeDefinitionIndex = 35266;

	template <typename T, typename TResult, typename TState>
	class Select_3__Select : public ::R3::Observer_1<T>
	{
	public:
		::R3::Observer_1<TResult>* _observer_P; // 0x0
		::System::Func_3<T, TState, TResult>* _selector_P; // 0x0
		TState _state_P; // 0x0
	};
}
