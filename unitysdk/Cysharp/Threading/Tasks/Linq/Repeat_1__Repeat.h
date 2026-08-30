#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Repeat_1__Repeat_TypeDefinitionIndex = 44406;

	template <typename TElement>
	class Repeat_1__Repeat : public ::System::Object
	{
	public:
		TElement element; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 remaining; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
