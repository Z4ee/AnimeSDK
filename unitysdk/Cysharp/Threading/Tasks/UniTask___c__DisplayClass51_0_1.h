#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask___c__DisplayClass51_0_1_TypeDefinitionIndex = 42757;

	template <typename T>
	class UniTask___c__DisplayClass51_0_1 : public ::System::Object
	{
	public:
		::System::Func_2<T, ::Cysharp::Threading::Tasks::UniTaskVoid>* asyncAction; // 0x0
		T state; // 0x0
	};
}
