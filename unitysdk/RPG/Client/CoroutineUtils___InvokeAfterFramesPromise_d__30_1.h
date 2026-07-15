#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils___InvokeAfterFramesPromise_d__30_1_TypeDefinitionIndex = 33799;

	template <typename TReturn>
	class CoroutineUtils___InvokeAfterFramesPromise_d__30_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Object* __2__current; // 0x0
		::System::Int32 frames; // 0x0
		::System::Action_1<TReturn>* resolve; // 0x0
		TReturn returnVal; // 0x0
		::System::Int32 _i_5__2; // 0x0
	};
}
