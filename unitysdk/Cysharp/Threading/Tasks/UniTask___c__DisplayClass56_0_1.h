#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask___c__DisplayClass56_0_1_TypeDefinitionIndex = 42762;

	template <typename T>
	class UniTask___c__DisplayClass56_0_1 : public ::System::Object
	{
	public:
		::System::Func_3<T, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskVoid>* asyncAction; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
