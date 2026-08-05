#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Coroutine { class CoroutineManager; }
namespace System { template <typename T> class Action_1; }

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager___CallContinuously_d__157_1_TypeDefinitionIndex = 8054;

	template <typename T>
	class CoroutineManager___CallContinuously_d__157_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Single __2__current; // 0x0
		::Foundation::Coroutine::CoroutineManager* __4__this; // 0x0
		::System::Single period; // 0x0
		::System::Action_1<T>* action; // 0x0
		T reference; // 0x0
		::System::Single timeframe; // 0x0
		::System::Action_1<T>* onDone; // 0x0
		::System::Double _startTime_5__2; // 0x0
	};
}
