#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Threader___c__DisplayClass9_0_2_TypeDefinitionIndex = 30282;

	template <typename T1, typename T2>
	class Threader___c__DisplayClass9_0_2 : public ::System::Object
	{
	public:
		::System::Action_2<T1, T2>* function; // 0x0
		T1 parameter1; // 0x0
		T2 parameter2; // 0x0
	};
}
