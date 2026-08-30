#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask___c__DisplayClass58_0_3_TypeDefinitionIndex = 42764;

	template <typename T0, typename T1, typename T2>
	class UniTask___c__DisplayClass58_0_3 : public ::System::Object
	{
	public:
		::System::Func_5<T0, T1, T2, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskVoid>* asyncAction; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
