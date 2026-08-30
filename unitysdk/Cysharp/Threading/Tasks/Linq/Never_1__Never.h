#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Never_1__Never_TypeDefinitionIndex = 44376;

	template <typename T>
	class Never_1__Never : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
