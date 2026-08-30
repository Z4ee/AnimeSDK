#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask___c__DisplayClass53_0_2_TypeDefinitionIndex = 42759;

	template <typename T0, typename T1>
	class UniTask___c__DisplayClass53_0_2 : public ::System::Object
	{
	public:
		::System::Func_3<T0, T1, ::Cysharp::Threading::Tasks::UniTaskVoid>* asyncAction; // 0x0
	};
}
