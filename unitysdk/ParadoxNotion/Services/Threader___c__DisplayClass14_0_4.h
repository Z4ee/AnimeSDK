#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T> class Action_1; }

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Threader___c__DisplayClass14_0_4_TypeDefinitionIndex = 30283;

	template <typename TResult, typename T1, typename T2, typename T3>
	class Threader___c__DisplayClass14_0_4 : public ::System::Object
	{
	public:
		TResult result; // 0x0
		::System::Func_4<T1, T2, T3, TResult>* function; // 0x0
		T1 parameter1; // 0x0
		T2 parameter2; // 0x0
		T3 parameter3; // 0x0
		::System::Action_1<TResult>* callback; // 0x0
	};
}
