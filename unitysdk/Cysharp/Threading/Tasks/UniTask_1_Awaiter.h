#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_1_Awaiter_TypeDefinitionIndex = 42800;

	template <typename T>
	struct UniTask_1_Awaiter
	{
		::Cysharp::Threading::Tasks::UniTask_1<T> task; // 0x0
	};
}
