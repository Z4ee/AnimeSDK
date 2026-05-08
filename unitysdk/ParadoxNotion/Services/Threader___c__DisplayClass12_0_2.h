#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Threader___c__DisplayClass12_0_2_TypeDefinitionIndex = 27241;

	template <typename TResult, typename T1>
	class Threader___c__DisplayClass12_0_2 : public ::System::Object
	{
	public:
		TResult result; // 0x0
		::System::Func_2<T1, TResult>* function; // 0x0
		T1 parameter1; // 0x0
		::System::Action_1<TResult>* callback; // 0x0
	};
}
