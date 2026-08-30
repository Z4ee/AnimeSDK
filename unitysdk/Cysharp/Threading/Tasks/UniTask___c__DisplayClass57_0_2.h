#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask___c__DisplayClass57_0_2_TypeDefinitionIndex = 42763;

	template <typename T0, typename T1>
	class UniTask___c__DisplayClass57_0_2 : public ::System::Object
	{
	public:
		::System::Func_4<T0, T1, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskVoid>* asyncAction; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
