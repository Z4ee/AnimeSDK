#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_CanceledResultSource_1_TypeDefinitionIndex = 28598;

	template <typename T>
	class UniTask_CanceledResultSource_1 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
