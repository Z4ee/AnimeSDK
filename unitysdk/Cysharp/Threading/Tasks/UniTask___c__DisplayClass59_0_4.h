#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask___c__DisplayClass59_0_4_TypeDefinitionIndex = 42765;

	template <typename T0, typename T1, typename T2, typename T3>
	class UniTask___c__DisplayClass59_0_4 : public ::System::Object
	{
	public:
		::System::Func_6<T0, T1, T2, T3, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskVoid>* asyncAction; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
