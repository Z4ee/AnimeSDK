#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Return_1__Return_TypeDefinitionIndex = 44408;

	template <typename TValue>
	class Return_1__Return : public ::System::Object
	{
	public:
		TValue value; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Boolean called; // 0x0
	};
}
