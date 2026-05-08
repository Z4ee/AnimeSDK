#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Threader___c__DisplayClass11_0_1_TypeDefinitionIndex = 27240;

	template <typename TResult>
	class Threader___c__DisplayClass11_0_1 : public ::System::Object
	{
	public:
		TResult result; // 0x0
		::System::Func_1<TResult>* function; // 0x0
		::System::Action_1<TResult>* callback; // 0x0
	};
}
